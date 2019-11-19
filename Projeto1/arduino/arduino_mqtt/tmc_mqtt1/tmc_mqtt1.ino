#include <AceButton.h>
#include <ESP8266WiFi.h>
#include <PubSubClient.h>
#include <stdlib.h>
using namespace ace_button;
extern "C"{ 
  #include "user_interface.h" 
}
 

const int BUTTON_PIN = 0; 
const int LED_PIN = LED_BUILTIN; 
const char* ssid = "ALPH@-CAVALCANTI"; 
const char* password = "262878166c"; 
const char* mqtt_server = "192.168.1.6"; 
const char* clientID = "nodemcu"; 
const char* topic_pub = "controlador";
const char* topic_sub = "b2";
const int port = 1883; 
const char altera_pub[]= "2";
int LED_STATUS = 0; 
int pressed = 0; 
AceButton button(BUTTON_PIN);
void handleEvent(AceButton*, uint8_t, uint8_t); 
WiFiClient TempClient;
PubSubClient mqttclient(TempClient);

void callback(char* topic, byte* payload, unsigned int length) {
 
  Serial.print("Message arrived in topic: ");
  Serial.println(topic);
  Serial.print("Message:");
  String estado;
  for (int i = 0; i < length; i++) {
    Serial.print((char)payload[i]);
    if (payload[i] == '1'){
      LED_STATUS = 1;
    }
    else{
      LED_STATUS = 0;
    }
  }
  Serial.print("  ");
  Serial.print(LED_STATUS);
  changeLed(LED_STATUS);
  
 
  Serial.println();
  Serial.println("-----------------------");
 
}

void setup() {
   Serial.begin(9600);
   pinMode(LED_PIN, OUTPUT);
   pinMode(BUTTON_PIN, INPUT_PULLUP);
   changeLed(LED_STATUS);
   button.setEventHandler(handleEvent);
   WiFi.begin(ssid, password);
   Serial.print("\nConnecting "); 
   while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print("."); 
  }
   Serial.print("\nConnected. My IP: "); 
   Serial.println(WiFi.localIP());
   mqttclient.setServer(mqtt_server, port);
   mqttclient.setCallback(callback);
   while (!mqttclient.connected()) {
    Serial.println("Connecting to MQTT...");
 
    if (mqttclient.connect("ESP32Client")) {
 
      Serial.println("connected");  
 
    } else {
 
      Serial.print("failed with state ");
      Serial.print(mqttclient.state());
      delay(2000);
 
    }
  }
  mqttclient.subscribe(topic_sub);
}
 

void loop() {  
   if (!mqttclient.connected()) {
    mqtt_connection();
  }
  button.check();
  if (pressed) {
    mqttclient.publish(topic_pub,altera_pub);
    Serial.println("MQTT Message sent");
    pressed = false;
  }
  mqttclient.loop();
}
void mqtt_connection() {
  while (!mqttclient.connected()) {
    Serial.print("Attempting MQTT connection ");
    if (mqttclient.connect(clientID)) {
      Serial.println("Connected!");
    } else {
      Serial.print(".");
      delay(1000);
    }
  }
}

void changeLed(int state) {
  digitalWrite(LED_PIN, !state);
}

void handleEvent(AceButton*, uint8_t eventType, uint8_t) {
  switch (eventType) {
    case AceButton::kEventReleased:
      pressed = 1;
      break;
  }
}
//Para compilar e enviar as mensagens, é necessário 
//alterar as variaveis solicitadas no inicio do código
// IP da maquina onde esta o SUB,ssi que é a rede e o pass que é senha da rede
// inicia o mosquitto_su na máquina que receberá as informações da placa 
