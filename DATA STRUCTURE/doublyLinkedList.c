#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *prev;
    struct node *next;
}*h, *temp, *temp1, *temp2, *temp3;
void create();
void insert();
void delete();
void length();
void display();
int count=0;
int main(){
    int s;
    printf("OPTIONS:-\n1. CREATE\n2. INSERT\n3. DELETE\n4. COUNT\n5. DISPLAY\n");
    while(1){
        printf("Enter option:");
        scanf("%d",&s);
        switch(c){
            case 1:
                create();
                break;
            case 2:
                insert();
                break;
            case 3:
                delete();
                break;
            case 4:
                length();
                break;
            case 5:
                display();
                break;
            default:
                printf("INVALID OPTION.\n");
        }
    }
    return 0;
}
void create(){
    int data;
    temp =(struct node *)malloc(1*sizeof(struct node));
    temp->prev = NULL;
    temp->next = NULL;
    printf("Enter value to node:");
    scanf("%d", &data);
    temp->info = data;
    count++;
}
