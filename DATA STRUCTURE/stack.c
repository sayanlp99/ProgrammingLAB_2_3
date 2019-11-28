#include<stdio.h>
#define MAX 10
int stack[MAX];
int top=-1;
void push();
void pop();
void display();
int main(){
    int ch;
    printf("OPTIONS:\n1. PUSH\n2. POP\n3. DISPLAY\n");
    while(1){
        printf("ENTER OPTION:");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                push();
                break;
            case 2:
                pop();
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
void push(){
    if(top==MAX-1)
        printf("STACK OVERFLOW.\n");
    else{
        printf("ENTER ELEMENT:");
        scanf("%d",&stack[++top]);
    }
}
void pop(){
    if(top==-1)
        printf("STACK UNDERFLOW.\n");
    else
        printf("DELETED VALUE:%d\n",stack[top--]);
}
void display(){
    if(top==-1)
        printf("STACK EMPTY.\n");
    else{
        printf("ELEMENTS IN STACK:\n");
        for(int i=top;i>=0;--i)
            printf("%d  ",stack[i]);
        printf("\n");
    }
}