#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Client{
    char name[50];
    char id[10];
    char adress[100];
    float credit;
};

int main(int argc, char const argv[]){

    struct Client client_1 = {0};

    strcpy(client_1.name, "Anthony Luzquiños");
    strcpy(client_1.id, "000000001");
    strcpy(client_1.adress, "Calle 1, Distrito 1, Cuidad 1, País 1");
    client_1.credit = 1000000;

    printf("The client's name is: %s.\n", client_1.name);
    printf("The client's id is: %s.\n", client_1.id);
    printf("The client's credit is: %f.\n", client_1.credit);
    printf("The client's adress is: %s.\n", client_1.adress);
    return 0;
}
