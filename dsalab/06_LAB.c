#include <stdio.h>
#include <stdlib.h>
struct Node
{
int data;
struct Node *next;
};
struct Node *front = NULL;
struct Node *rear = NULL;
void enqueue()
{
int value;
struct Node *newNode;
newNode = (struct Node *)malloc(sizeof(struct Node));
printf("Enter value: ");
scanf("%d", &value);
newNode->data = value;
if (front == NULL)
{
front = rear = newNode;
rear->next = front;
}
else
{
newNode->next = front;
rear->next = newNode;
rear = newNode;
}
printf("%d inserted into circular queue.\n", value);
}
void dequeue()
{
struct Node *temp;
if (front == NULL)
{
printf("Circular Queue Underflow\n");
return;
}
if (front == rear)
{
printf("Deleted = %d\n", front->data);
free(front);
front = rear = NULL;
}
else
{
    temp = front;
printf("Deleted = %d\n", front->data);
front = front->next;
rear->next = front;
free(temp);
}
}
void display()
{
struct Node *temp;
if (front == NULL)
{
printf("Circular Queue is Empty\n");
return;
}
temp = front;
printf("Circular Queue: ");
do
{
printf("%d ", temp->data);
temp = temp->next;
}
while (temp != front);
printf("\n");
}
int main()
{
int choice;
while (1)
{
printf("\n--- Circular Queue using Linked List ---\n");
printf("1. Enqueue\n");
printf("2. Dequeue\n");
printf("3. Display\n");
printf("4. Exit\n");
printf("Enter choice: ");
scanf("%d", &choice);
switch (choice)
{
case 1: enqueue(); break;
case 2: dequeue(); break;
case 3: display(); break;
case 4: exit(0);
default: printf("Invalid choice\n");
}
}
return 0;
}