#include<stdio.h>
#include<stdlib.h>
struct node {
  int info;
  struct node * next;
}* start = NULL;
int item;
void create();
void display();
void ins_beg();
void ins_pos(int);
void ins_end();
void del_beg();
void del_pos(int);
void del_end();
int main() {
  int i, n, ch, flag = 1, pos;
  while (flag) {
    printf("\n1.To create\n2.INsert at beginning\n3.Insert at intermediate position\n4.Insert at end\n5.Delete from beginning\n6.Delete from intermediate position\n7.Delete from end\n8.Display\nEnter your choice:");
    scanf("%d", & ch);
    switch (ch) {
    case 1:
      printf("Enter the number of elements:");
      scanf("%d", & n);
      for (i = 1; i <= n; i++)
        create();
      break;
    case 2:
      ins_beg();
      break;
    case 3:
      printf("Enter the position:");
      scanf("%d", & pos);
      ins_pos(pos);
      break;
    case 4:
      ins_end();
      break;
    case 5:
      del_beg();
      break;
    case 6:
      printf("Enter the position number to delete:");
      scanf("%d", & pos);
      del_pos(pos);
      break;
    case 7:
      del_end();
      break;
    case 8:
      printf("\nThe linked list is :\n");
      display();
      break;
    default:
      printf("Exited");
      flag = 0;
    }
  }
}
void create() {
  struct node * temp, * ptr;
  temp = (struct node * ) malloc(sizeof(struct node));
  printf("Enter the item:");
  scanf("%d", & item);
  temp -> info = item;
  temp -> next = NULL;
  if (start == NULL)
    start = temp;
  else {
    ptr = start;
    while (ptr -> next != NULL)
      ptr = ptr -> next;
    ptr -> next = temp;
  }
}
void display() {
  struct node * ptr;
  if (start == NULL)
    printf("\nLinked list is empty\n");
  else {
    ptr = start;
    while (ptr != NULL) {
      printf("%3d", ptr -> info);
      ptr = ptr -> next;
    }
  }
}
void ins_beg() {
  struct node * temp;
  temp = (struct node * ) malloc(sizeof(struct node));
  printf("Enter the item to insert:");
  scanf("%d", & item);
  temp -> info = item;
  temp -> next = NULL;
  if (start == NULL)
    start = temp;
  else {
    temp -> next = start;
    start = temp;
  }
}
void ins_pos(int pos) {
  struct node * temp, * ptr;
  int i;
  temp = (struct node * ) malloc(sizeof(struct node));
  printf("Enter the item to insert at %d position:", pos);
  scanf("%d", & item);
  temp -> info = item;
  temp -> next = NULL;
  if (start == NULL)
    start = temp;
  else {
    ptr = start;
    for (i = 1; i < pos - 1; i++)
      ptr = ptr -> next;
    temp -> next = ptr -> next;
    ptr -> next = temp;
  }
}
void ins_end() {
  struct node * temp, * ptr;
  temp = (struct node * ) malloc(sizeof(struct node));
  printf("Enterr the element:");
  scanf("%d", & item);
  temp -> info = item;
  temp -> next = NULL;
  if (start == NULL)
    start = temp;
  else {
    ptr = start;
    while (ptr -> next != NULL)
      ptr = ptr -> next;
    ptr -> next = temp;
  }
}
void del_beg() {
  struct node * ptr;
  if (start == NULL)
    printf("List is empty");
  else {
    ptr = start;
    start = ptr -> next;
    printf("The deleted item is : %d", ptr -> info);
    free(ptr);
  }
}
void del_pos(int pos) {
  struct node * ptr, * temp;
  int i;
  if (start == NULL)
    printf("List is empty");
  else {
    ptr = start;
    for (i = 1; i < pos; i++) {
      temp = ptr;
      ptr = ptr -> next;
    }
    temp -> next = ptr -> next;
    printf("The deleted item : %d", ptr -> info);
    free(ptr);
  }
}
void del_end() {
  struct node * ptr, * temp;
  if (start == NULL)
    printf("List is empty");
  else {
    ptr = start;
    while (ptr -> next != NULL) {
      temp = ptr;
      ptr = ptr -> next;
    }
    temp -> next = NULL;
    printf("The deleted item : %d", ptr -> info);
    free(ptr);
  }
}
