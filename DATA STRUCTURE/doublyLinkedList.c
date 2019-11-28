#include<stdio.h>
#include<stdlib.h>
struct node {
  struct node * prev;
  struct node * next;
  int data;
};
struct node * head;
void insertion_beginning();
void insertion_last();
void insertion_intermediate();
void deletion_beginning();
void deletion_last();
void deletion_intermediate();
void display();
int main(){
    int s;
    printf("OPTIONS:-\n1. INSERTION AT BEGINING\n2. INSERTION AT INTERMEDIATE\n3. INSERTION AT END\n4. DELETE AT BEGINING\n5. DELETE AT INTERMEDIATE\n6. DELETE AT END\n7. DISPLAY\n");
    while(1){
        printf("Enter option:");
        scanf("%d",&s);
        switch(s){
            case 1:
                insertion_beginning();
                break;
            case 2:
                insertion_intermediate();
                break;
            case 3:
                insertion_last();
                break;
            case 4:
                deletion_beginning();
                break;
            case 5:
                deletion_intermediate();
                break;
            case 6:
                deletion_last();
                break;
            case 7:
                display();
                break;
            default:
                printf("INVALID OPTION.\n");
        }
    }
    return 0;
}
void insertion_beginning() {
    struct node * ptr;
    int item;
    ptr = (struct node * ) malloc(sizeof(struct node));
    if (ptr == NULL)
        printf("OVERFLOW\n");
    else {
        printf("Enter Item value:");
        scanf("%d", &item);
        if (head == NULL) {
            ptr -> next = NULL;
            ptr -> prev = NULL;
            ptr -> data = item;
            head = ptr;
        } 
        else {
            ptr -> data = item;
            ptr -> prev = NULL;
            ptr -> next = head;
            head -> prev = ptr;
            head = ptr;
        }
        printf("Node inserted.\n");
    }
}
void insertion_last() {
    struct node * ptr, * temp;
    int item;
    ptr = (struct node * ) malloc(sizeof(struct node));
    if (ptr == NULL)
        printf("OVERFLOW\n");
    else {
        printf("Enter value:");
        scanf("%d", &item);
        ptr -> data = item;
        if (head == NULL) {
            ptr -> next = NULL;
            ptr -> prev = NULL;
            head = ptr;
        } 
        else {
            temp = head;
            while (temp -> next != NULL) {
            temp = temp -> next;
            }
            temp -> next = ptr;
            ptr -> prev = temp;
            ptr -> next = NULL;
        }
    }
    printf("Node inserted.\n");
}
void insertion_intermediate() {
    struct node * ptr, * temp;
    int item, loc, i;
    ptr = (struct node * ) malloc(sizeof(struct node));
    if (ptr == NULL) 
        printf("OVERFLOW\n");
    else {
        temp = head;
        printf("Enter the location:");
        scanf("%d", &loc);
        for (i = 0; i < loc; i++) {
            temp = temp -> next;
            if (temp == NULL) {
                printf("There are less than %d elements.\n", loc);
                return;
            }
        }
        printf("Enter value:");
        scanf("%d", &item);
        ptr -> data = item;
        ptr -> next = temp -> next;
        ptr -> prev = temp;
        temp -> next = ptr;
        temp -> next -> prev = ptr;
        printf("Node inserted.\n");
    }
}
void deletion_beginning() {
    struct node * ptr;
    if (head == NULL) 
        printf("UNDERFLOW\n");
    else if (head -> next == NULL) {
        head = NULL;
        free(head);
        printf("Node deleted.\n");
    } 
    else {
        ptr = head;
        head = head -> next;
        head -> prev = NULL;
        free(ptr);
        printf("Node deleted.\n");
    }
}
void deletion_last() {
        struct node * ptr;
        if (head == NULL) {
        printf("UNDERFLOW.\n");
    } 
    else if (head -> next == NULL){
        head = NULL;
        free(head);
        printf("Node deleted.\n");
    } 
    else {
        ptr = head;
        if (ptr -> next != NULL) 
            ptr = ptr -> next;
        ptr -> prev -> next = NULL;
        free(ptr);
        printf("Node deleted.\n");
    }
}
void deletion_intermediate() {
    struct node * ptr, * temp;
    int val;
    printf("Enter the data after which the node is to be deleted:");
    scanf("%d", &val);
    ptr = head;
    while (ptr -> data != val)
        ptr = ptr -> next;
    if (ptr -> next == NULL)
        printf("Can't delete.\n");
    else if (ptr -> next -> next == NULL)
        ptr -> next = NULL;
    else {
        temp = ptr -> next;
        ptr -> next = temp -> next;
        temp -> next -> prev = ptr;
        free(temp);
        printf("Node deleted.\n");
    }
}
void display() {
    struct node * ptr;
    printf("The Doubly Linked List:\n");
    ptr = head;
    while (ptr != NULL) {
        printf("%d  ", ptr -> data);
        ptr = ptr -> next;
    }
    printf("\n");
}