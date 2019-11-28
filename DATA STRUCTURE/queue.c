#include<stdio.h>
#define MAX 10
int queue[MAX];
int front=-1,rear=-1;
void insert();
void delete();
void display();
int main(){
    int ch;
    printf("ENTER OPTION:\n1. INSERT\n2. DELETE\n3. DISPLAY\n");
    while (1){
        printf("ENTER OPTION:");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            default:
                printf("INVALID OPTION.\n");
        }
    }
    return 0;
}
void insert(){
    if(rear==MAX-1)
        printf("QUEUE OVERFLOW.\n");
    else{
        printf("ENTER ELEMENT:");
        scanf("%d",&queue[++rear]);
        if(front==-1)
            front=0;
    }
}
void delete(){
    if(rear==-1 || front>rear)
        printf("QUEUE UNDERFLOW.\n");
    else{
        printf("DELETED ITEM:%d\n",queue[front]);
        if(front==rear)
            front=rear=-1;
        else
            front=front+1;
    }
}
void display(){
    if(rear==MAX-1)
        printf("QUEUE EMPTY.\n");
    else{
        printf("ITEMS IN QUEUE:\n");
        for(int i=front;i<=rear;i++)
            printf("%d  ",queue[i]);
        printf("\n");
    }
}
