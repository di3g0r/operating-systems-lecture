//Diego Rodríguez Romero A01741413
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    char input[50];
    int ret;

    ret = fork();
    if(ret == 0) {
        execlp("clear","clear", NULL); //Limpiamos la terminal
    }

    wait(NULL);

    printf("Hola, bienenido a mi pequeña terminal de VIM\n");

    while (1) {
        printf("Escriba uno de los siguientes comandos ls, date, pwd o exit (para salir):\n");
        scanf("%s", input);

        if (strcmp(input, "exit") == 0){
            break; //Salimos del programa
        }

        else if (strcmp(input, "ls") == 0) {
            ret = fork();
            if (ret == 0) {
                printfi("Ayudaaaa estoy dentro de mi hijo\n");
                execlp("ls","ls", NULL); //Listamos los directorios
                printf("Creo que algo salio mal :(\n");
            } else {
                wait(NULL);
                printf("En que momento hice tantos archivos\n");
                printf("Ese fork termino fiuuuuu\n");
                printf("\n");
            }
        } else if (strcmp(input, "date") == 0) {
            ret = fork();
            if (ret == 0) {
                printf("Se le acabo la pila a mi Casio,como voy a saber que hora es\n");
                execlp("date","date", NULL); //Listamos los directorios
                printf("Tal parece que linux no pudo vencer a Casio\n");
            } else {
                wait(NULL);
                printf("Todavia falta mucho para navidad :(((((\n");
                printf("Ya se me olvido la hora, no puede ser\n");
                printf("\n");
            }
        } else if (strcmp(input, "pwd") == 0) {
            ret = fork();
            if (ret == 0) {
                printf("No se donde estoy, voy a prender el GPS\n");
                execlp("pwd","pwd", NULL); //Listamos los directorios
                printf("Estoy perdido dentro de VIM\n");
            } else {
                wait(NULL);
                printf("Ok, ya se donde estoy, pero ¿Qué hacia aqui?\n");
                printf("Deberia poner todos mis documentos en esta carpeta\n");
                printf("\n");
            }
        } else {
            printf("Ese comando no existe, intenta con otro por favor\n");
        }  
    }
    printf("Gracias por usar mi terminal, esperen mi propio sistema operativo en 2028, hecho en pascalina\n");
    return 0;
}
