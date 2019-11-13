#include <AceButton.h>
#include <ESP8266WiFi.h>
#include <PubSubClient.h>
using namespace ace_button;
extern "C"{ 
  #include "user_interface.h" 
}
 

const int BUTTON_PIN = 0; 
const int LED_PIN = LED_BUILTIN; 
const char* ssid = "glauco"; 
const char* password = "danielle123"; 
const char* mqtt_server = "192.168.43.115"; 
const char* clientID = "nodemcu"; 
const char* topic = "controlador"; 
const int port = 1883; 
int LED_STATUS = 0; 
int pressed = 0; 
AceButton button(BUTTON_PIN);
void handleEvent(AceButton*, uint8_t, uint8_t); 
WiFiClient TempClient;
PubSubClient mqttclient(TempClient);

void setup() {
   Serial.begin(9600);
   pinMode(LED_PIN, OUTPUT);
   pinMode(BUTTON_PIN, INPUT_PULLUP);
   digitalWrite(LED_PIN, LED_STATUS);
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
   
}

void loop() {  
   if (!mqttclient.connected()) {
    mqtt_connection();
  }
  button.check();
  if (pressed) {
    mqttclient.publish(topic, "1");
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
  digitalWrite(LED_PIN, state);
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
