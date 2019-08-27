#include<stdio.h>
#define MAX 5
int front=-1,rear=-1,item;
int dqueue[MAX];
void insert_front();
void insert_rear();
void delete_front();
// void delete_rear();
void display();
int main(){
	int select;
	while(1){
		printf("Enter option:-\n1. INSERT AT FRONT\n2. INSERT AT REAR\n");
		printf("3. DELETE FROM FRONT\n4. DELETE FROM REAR\n5 DISPLAY\n:");
		scanf("%d",&select);
		switch(select){
			case 1:
				insert_front();
				break;
			case 2:
				insert_rear();
				break;
			case 3:
				delete_front();
				break;
			case 4:
				// delete_rear();
				break;
			case 5:
				display();
				break;
			default:
				printf("INVALID OPTION\n");
		}
	}
	return 0;
}
void insert_front(){
	if((front==0 && rear==MAX-1)||(front==rear+1))
		printf("Queue Overflow\n");
	else{
		if(front==-1)
			front=rear=0;
		else{
			if(front=0)
				front=MAX-1;
			else
				front=front-1;
		}
	}
	printf("Enter item:");
	scanf("%d", &item);
	dqueue[rear] = item;
}
void insert_rear(){
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
	}
	printf("Enter item:");
	scanf("%d", &item);
	dqueue[front] = item;
}
void delete_front(){
	if(front == -1)
		printf("Queue is Empty\n");
	else{
		printf("Deleted item: %d\n", dqueue[front]);
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
// void delete_rear(){

// }
void display(){
	int i;
	if(front == -1)
		printf("Queue is Empty\n");
	else{
		if (rear >= front)
			for(i=front; i<=rear; i++)
				printf("%d  ", dqueue[i]);
		else{
			for(i=front; i<=MAX-1; i++)
				printf("%d  ", dqueue[i]);
			for (i=0; i<=rear; i++)
				printf("%d  ", dqueue[i]);
		}
		printf("\n");
	}
}
