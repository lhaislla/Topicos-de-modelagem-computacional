# Topicos-de-modelagem-computacional
Disciplina de Modelagem computacional 

#comando para compilar o codigo com o publisher do mqtt
#Assume-se que o mqtt_lamp.c está no diretório do modelo (onde fica o _main.c, gerado pelo heptagon)
#é necessario estar no diretorio dos arquivos(estar com a biblioteca paho instalada)
gcc -I /home/osboxes/tmc/heptagon-1.03.00/lib/c/ -I ../task_controller_c/ -o mqtt_lamp mqtt_lamp.c -l paho-mqtt3c -pipe -L ../task_controller_c/ lamp3.o ../task_controller_c/task_controller.o


#comando para compilar o mosquitto(broker)
#para executar o sub: mosquitto_sub -h localhost -p 1883 -t "b1"
#para executar o pub: mosquitto_pub -t 'test/topic' -m 'hello world'
link para o repositorio da biblioteca: https://github.com/eclipse/mosquitto 
