# Topicos-de-modelagem-computacional
Disciplina de Modelagem computacional 

#comando para compilar o codigo com o publisher do mqtt
#Assume-se que o mqtt_lamp.c está no diretório do modelo (onde fica o _main.c, gerado pelo heptagon)
gcc -I /home/osboxes/tmc/heptagon-1.03.00/lib/c/ -I ../task_controller_c/ -o mqtt_lamp mqtt_lamp.c -l paho-mqtt3c -pipe -L ../task_controller_c/ lamp3.o ../task_controller_c/task_controller.o
