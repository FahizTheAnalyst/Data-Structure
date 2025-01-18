#include<stdio.h>
int q[5],i,item,size,front=-1,rear=-1;
void enqueue(int item) {
    if (rear == size-1 ) {
        printf("\nQueue is full");
    } else {
        if (rear == -1) {
            front = 0;
            rear=0;
        }
        else{
            rear++;
        }
        q[rear] = item;
    }
}
void dequeue() {
    if (front == -1 && rear == -1) { 
        printf("\n Queue is empty");
    } else {
        printf("\n Deleted item is %d", q[front]); 
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front++; 
        }
    }
}void display(){
    for(i=front;i<=rear;i++){
        printf("%d\t",q[i]);
    }
}
void main(){
    int choice;
    printf("Enter the size:");
    scanf("%d",&size);
    do{
        printf("\n 1.Enqueue \n 2.Dequeue \n 3.Display \n 4.Exit");
        printf("\n Enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Enter item to be inserted:");
            scanf("%d",&item);
            enqueue(item);
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
            printf("Exit");
            break;
            default:printf("Wrong choice");
        }
    }
        while(choice != 4);
}
