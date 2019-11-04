/* --- Generated the 21/10/2019 at 11:30 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s task lamp3.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "_main.h"
#include "MQTTClient.h"

#define ADDRESS     "tcp://localhost:1883"
#define CLIENTID    "ExampleClientPub"
#define QOS         1
#define TIMEOUT     10000L

Lamp3__task_mem mem;
int main(int argc, char** argv) {
  char PAYLOAD[2];
  char TOPIC[3];
  int step_c;
  int step_max;
  int b1;
  int b2;
  int b3;
  Lamp3__task_out _res;
  step_c = 0;
  step_max = 0;
  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };
  Lamp3__task_reset(&mem);

  MQTTClient client;
  MQTTClient_connectOptions conn_opts = MQTTClient_connectOptions_initializer;
  MQTTClient_message pubmsg = MQTTClient_message_initializer;
  MQTTClient_deliveryToken token;
  int rc;

  MQTTClient_create(&client, ADDRESS, CLIENTID, MQTTCLIENT_PERSISTENCE_NONE, NULL);
  conn_opts.keepAliveInterval = 20;
  conn_opts.cleansession = 1;

  if ((rc = MQTTClient_connect(client, &conn_opts)) != MQTTCLIENT_SUCCESS)
    { 
        printf("Failed to connect, return code %d\n", rc);
        exit(-1);
    }

  while ((!(step_max)||(step_c<step_max))) {
    step_c = (step_c+1);
    
    printf("b1 ? ");
    scanf("%d", &b1);;
    
    printf("b2 ? ");
    scanf("%d", &b2);;
    
    printf("b3 ? ");
    scanf("%d", &b3);;
    Lamp3__task_step(b1, b2, b3, &_res, &mem);
    //printf("=> ");
    //printf("%d ", _res.s1);
    //printf("=> ");
    //printf("%d ", _res.s2);
    //printf("=> ");
    //printf("%d ", _res.s3);
    //puts("");
    //fflush(stdout);
    
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

  };
  MQTTClient_disconnect(client, 10000);
  MQTTClient_destroy(&client);
  return 0;
}