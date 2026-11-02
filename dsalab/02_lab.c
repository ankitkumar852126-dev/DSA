#include <stdio.h>
#define max 5
int cq[max];
int front = -1, rear = -1;
void enqueue()
{
    int x;
    if ((rear + 1) % max == front)
    {
        printf("queue full\n");
        return;
    }
    printf("enter element : \n");
    scanf("%d", &x);
    if (front == -1)
        front = rear = 0;
    else
        rear = (rear + 1) % max;
    cq[rear] = x;
}
void dequeue()
{
    if (front == -1)
    {
        printf("queue empty\n");
        return;
    }
    printf("delete element = %d\n", cq[front]);

    if (front == rear)
        front = rear = -1;
    else
        front = (front + 1) % max;
}
void display()
{
    int i;
    if (front == -1)
    {
        printf("queue empty\n");
        return;
    }
    i = front;
    while (1)
    { 
        printf("%d ", cq[i]);
        if (i == rear)
            break;
        i = (i + 1) % max;
    }
    printf("\n");
}
int main(){
    int ch;
    while(1){
        printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
        printf("enter your choice:\n ");
        scanf("%d",&ch);
        switch(ch){
            case 1: enqueue();break;
            case 2: dequeue();break;
            case 3: display();break;
            case 4:
            default:
            printf("invilid choice\n");
        }
    }
}  