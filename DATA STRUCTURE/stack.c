#include<stdio.h>
#define MAX 50
int stack[MAX];
int top=-1;
void pop();
void push(int);
void display();
int main(){
	int select,item;
	while(1){
		printf("Choose option to perform:-\n1. PUSH\n2. POP\n3. DISPLAY\n:");
		scanf("%d",&select);
		switch(select){
			case 1:
					printf("Enter the Item:");
					scanf("%d",&item);
					push(item);
					break;
			case 2:
					pop();
					break;
			case 3:
					display();
					break;
		}
	}
	return 0;
}
void push(int e){
	if(top==MAX-1)
		printf("Stack is full\n");
	else{
		top=top+1;
		stack[top]=e;		
	}
}
void pop(){
	int t;
	if(top==-1){
		printf("Stack is Empty\n");
	}
	else{
	    t= stack[top];
		top=top-1;	
		printf("Deleted Item is:%d\n",t);
	}
}
void display(){
	int i;
	if(top==-1)
		printf("Stack is Empty.\n");
	else{
		printf("The Stack is:-\n");
		for(i=top;i>=0;--i)
			printf("%d\n",stack[i]);
		printf("\n");
	}
}