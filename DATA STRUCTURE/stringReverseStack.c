#include<stdio.h>
#define MAX 10
int stack[MAX];
int top=-1;
void push(char);
char pop(void);
int main(){
    int i, x=0;
    char string[10], revString[10];
    printf("Enter String:");
    scanf("%s",string);
    while(string[x]!='\0'){
        push(string[x]);
        x++;
    }
    for(i=0;i<x;i++)
        revString[i]=pop();
    revString[i]='\0';
    printf("Reversed String:%s\n",revString);
    return 0;
}
void push(char item){
    stack[++top]=item;
}
char pop(){
    return stack[top--];
}