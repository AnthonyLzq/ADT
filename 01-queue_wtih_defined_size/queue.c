#include <stdio.h>
#include <string.h>

// Size of the queue.
#define SIZE 5
// Value that will help us to handle.
int rear = -1;
// Matrix that will represent a queue that can contain 5 names of 15 letters as max.
char values[SIZE][15];

// Method that will control how elements are added to the queue.
void enQueue(char name[]){
    // We will increse rear value in order to count how many values we have in the queue.
    if(rear == SIZE - 1)
        printf("Our queue is full.\n");
    else{
        rear++;
        strcpy(values[rear], name);
        printf("The value \"%s\" has been inserted correctly.\n", name);
    }
}

// Method that will control how elements are eliminated from the queue.
void deQueue(){
    // We will decrease rear value when we eliminate a value in the queue.
    // Then, we will copy the right next values to the left and the last value will be an
    // empty string, in order to create a "dinamic" queue.
    if(rear == -1) 
        printf("Our queue is empty.\n");
    else{
        // We will print the value that has been eliminated from the queue
        printf("The value \"%s\" has been eliminated.\n", values[0]);
        for(int i = 1; i < SIZE; i++){
            strcpy(values[i-1], values[i]);
        }
        strcpy(values[SIZE-1], "");
        rear--;
    }
}

int main(int argc, char *argv[]){
    enQueue("Anthony 1");
    enQueue("Anthony 2");
    enQueue("Anthony 3");
    enQueue("Anthony 4");
    enQueue("Anthony 5");
    enQueue("Anthony 6");
    deQueue();
    enQueue("Anthony 6");
    deQueue();
    enQueue("Anthony 7");
    deQueue();
    enQueue("Anthony 8");
    for(int i = 0; i < SIZE; i++){
        printf("%s\n", values[i]);
    }
    return 0;
}