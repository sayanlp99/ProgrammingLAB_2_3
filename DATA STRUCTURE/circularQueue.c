#include<stdio.h>
#define MAX 5
int cqueue[MAX];
int front = -1, rear = -1, item;
void insert();
void delete();
void display();
int main(){
	int select;
	while(1){
		printf("Enter option:\n1. INSERT\n2. DELETE\n3. DISPLAY\n:");
		scanf("%d", &select);
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
	if((front==0 && rear==MAX-1) || (front==rear+1))
		printf("Queue Overflow\n");
	else{
		if(front==-1)
			front=rear=0;
		else{
			if(rear==MAX-1)
				rear=0;
			else
				rear=rear+1;
		}
		printf("Enter item:");
		scanf("%d", &item);
		cqueue[rear] = item;
	}
}
void delete(){
	if(front == -1)
		printf("Queue is Empty\n");
	else{
		printf("Deleted item: %d\n", cqueue[front]);
		if(rear == front)
			rear = front = -1;
		else{
			if(front == MAX-1)
				front = 0;
			else
				front = front+1;
		}
	}
}
void display(){
	int i;
	if(front == -1)
		printf("Queue is Empty\n");
	else{
		if (rear >= front)
			for(i=front; i<=rear; i++)
				printf("%d  ", cqueue[i]);
		else{
			for(i=front; i<=MAX-1; i++)
				printf("%d  ", cqueue[i]);
			for (i=0; i<=rear; i++)
				printf("%d  ", cqueue[i]);
		}
		printf("\n");
	}
}
