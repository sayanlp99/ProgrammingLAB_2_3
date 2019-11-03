#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
	int info;
	struct Node *next;
}node;
node *front=NULL,*rear=NULL,*temp;
void create();
void delete();
void display();
int main(){
	int c;
	printf("OPTIONS:-\n1. CREATE\n2. DELETE\n3. DISPLAY\n");
	while(1){
	printf("Enter Option:");
	scanf("%d",&c);
		switch(c){
			case 1:
		 		create();
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
void create(){
	node *newnode;
	newnode=(node*)malloc(sizeof(node));
	printf("Enter the node value :");
	scanf("%d",&newnode->info);
	newnode->next=NULL;
	if(rear==NULL)
	front=rear=newnode;
	else{
		rear->next=newnode;
		rear=newnode;
	}
	rear->next=front;
}
void delete(){
	temp=front;
	if(front==NULL)
		printf("UNDERFLOW\n");
	else{
		if(front==rear){
			printf("Deleted Node with value:%d\n",front->info);
			front=rear=NULL;
		}
		else{
			printf("Deleted Node with value:%d\n",front->info);
			front=front->next;
			rear->next=front;
		}
	temp->next=NULL;
	free(temp);
	}
}
void display(){
	temp=front;
	if(front==NULL)
		printf("UNDERFLOW\n");
	else{
		for(;temp!=rear;temp=temp->next)
			printf("Node value:%d  Node address=%u  Node next=%u\n",temp->info,temp,temp->next);
		printf("Node value:%d  Node address=%u  Node next=%u\n",temp->info,temp,temp->next);
	}
}
/*OUTPUT:-
OPTIONS:-
1. CREATE
2. DELETE
3. DISPLAY
Enter Option:1
Enter the node value :4
Enter Option:1
Enter the node value :7
Enter Option:1
Enter the node value :9
Enter Option:1
Enter the node value :2
Enter Option:3
Node value:4  Node address=11086160  Node next=11086176
Node value:7  Node address=11086176  Node next=11086192
Node value:9  Node address=11086192  Node next=11086208
Node value:2  Node address=11086208  Node next=11086160
Enter Option:2
Deleted Node with value:4
Enter Option:2
Deleted Node with value:7
Enter Option:3
Node value:9  Node address=11086192  Node next=11086208
Node value:2  Node address=11086208  Node next=11086192*/
