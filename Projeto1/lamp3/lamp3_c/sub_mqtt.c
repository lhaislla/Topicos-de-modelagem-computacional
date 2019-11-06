#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "_main.h"
#include "MQTTClient.h"
#define ADDRESS     "tcp://localhost:1883"
#define CLIENTID    "ExampleClientSub"
#define TOPIC_SUB       "controlador"
#define QOS         1
#define TIMEOUT     10000L
volatile MQTTClient_deliveryToken deliveredtoken;

MQTTClient client;


Lamp3__task_mem mem;
Lamp3__task_out _res;
void delivered(void *context, MQTTClient_deliveryToken dt)
{
    printf("Message with token value %d delivery confirmed\n", dt);
    deliveredtoken = dt;
}
int msgarrvd(void *context, char *topicName, int topicLen, MQTTClient_message *message)
{
    int i;
    char* payloadptr;
    char resultado;
    char PAYLOAD[2];
    char TOPIC[3];
    int b1= 0;
    int b2= 0;
    int b3 = 0;
    MQTTClient_message pubmsg = MQTTClient_message_initializer;
    MQTTClient_deliveryToken token;
    printf("Message arrived\n");
    printf("     topic: %s\n", topicName);
    printf("   message: ");
    payloadptr = message->payload;
    for(i=0; i<message->payloadlen; i++)
    {
        resultado = *payloadptr;
        putchar(*payloadptr++);
        if (resultado  == '1'){
            b1 = 1;
        }
        if(resultado  == '2'){
             b2 = 1;
        }
        if (resultado  == '3'){
             b3 = 1;
        }
    }
    putchar('\n');
    Lamp3__task_step(b1, b2, b3, &_res, &mem);

    sprintf(TOPIC,"%s","b1");
    sprintf(PAYLOAD,"%i", _res.s1);
    pubmsg.payload = PAYLOAD;
    pubmsg.payloadlen = strlen(PAYLOAD);
    pubmsg.qos = QOS;
    pubmsg.retained = 0;
    MQTTClient_publishMessage(client, TOPIC, &pubmsg, &token);

    sprintf(TOPIC,"%s","b2");
    sprintf(PAYLOAD,"%i", _res.s2);
    pubmsg.payload = PAYLOAD;
    pubmsg.payloadlen = strlen(PAYLOAD);
    pubmsg.qos = QOS;
    pubmsg.retained = 0;
    MQTTClient_publishMessage(client, TOPIC, &pubmsg, &token);

    sprintf(TOPIC,"%s","b3");
    sprintf(PAYLOAD,"%i", _res.s3);
    pubmsg.payload = PAYLOAD;
    pubmsg.payloadlen = strlen(PAYLOAD);
    pubmsg.qos = QOS;
    pubmsg.retained = 0;
    MQTTClient_publishMessage(client, TOPIC, &pubmsg, &token);


    //inicializar variaveis b1, b2 e b3
    //verificar quais bs tem na mensagem
    //verificar o valor dos bs da mensagem
    //atribuir o valor de cada b às variáveis respectivas (b1,b2 ou b3)
    //chamar o controlador
    //publicar o saída do controlador no MQTT

    MQTTClient_freeMessage(&message);
    MQTTClient_free(topicName);
    return 1;
}
void connlost(void *context, char *cause)
{
    printf("\nConnection lost\n");
    printf("     cause: %s\n", cause);
}

int main(int argc, char* argv[])
{
    Lamp3__task_reset(&mem);
    MQTTClient_connectOptions conn_opts = MQTTClient_connectOptions_initializer;
    int rc;
    int ch;
    MQTTClient_create(&client, ADDRESS, CLIENTID,
        MQTTCLIENT_PERSISTENCE_NONE, NULL);
    conn_opts.keepAliveInterval = 20;
    conn_opts.cleansession = 1;
    MQTTClient_setCallbacks(client, NULL, connlost, msgarrvd, delivered);
    if ((rc = MQTTClient_connect(client, &conn_opts)) != MQTTCLIENT_SUCCESS)
    {
        printf("Failed to connect, return code %d\n", rc);
        exit(EXIT_FAILURE);
    }
    printf("Subscribing to topic %s\nfor client %s using QoS%d\n\n"
           "Press Q<Enter> to quit\n\n", TOPIC_SUB, CLIENTID, QOS);
    MQTTClient_subscribe(client, TOPIC_SUB, QOS);
    do
    {
        ch = getchar();
    } while(ch!='Q' && ch != 'q');
    MQTTClient_disconnect(client, 10000);
    MQTTClient_destroy(&client);
    return rc;
}