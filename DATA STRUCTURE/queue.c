#include<stdio.h>
#define MAX 10
int front=-1,rear=-1,item;
int queue[MAX];
void insert();
void delete();
void display();
int main(){
	int select;
	while(1){
		printf("Enter Option:-\n1. INSERT\n2. DELETE\n3. DISPLAY\n:");
		scanf("%d",&select);
		switch(select){
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
					printf("INVALID OPTION\n");
		}
	}
	return 0;
}
void insert(){
	if(rear==MAX-1)
		printf("Queue Overflow\n");
	else{
		printf("Enter item:");
		scanf("%d",&item);
		rear=rear+1;
		queue[rear]=item;
		if(front==-1)
			front=0;
	}
}
void delete(){
	if (front==-1 || front>rear)
		printf("Queue Underflow\n");
	else{
		item=queue[front];
		printf("The deleted item:%d\n",item);
		if(front==rear){
			front=-1;
			rear=-1;
		}
		else
			front=front+1;
	}
}
void display(){
	int i;
	if(front==-1)
		printf("Queue Underflow\n");
	else{
		printf("Elements in queue:- ");
		for(i=front;i<=rear;i++)
			printf("%d  ",queue[i]);
		printf("\n");
	}
}
