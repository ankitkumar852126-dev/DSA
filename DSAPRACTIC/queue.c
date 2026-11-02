// #include <stdio.h>

// #define SIZE 5

// int queue[SIZE];
// int front = -1, rear = -1;

// void enqueue() {
//     int value;

//     if (rear == SIZE - 1) {
//         printf("Queue is Overflow\n");
//     } else {
//         printf("Enter value: ");
//         scanf("%d", &value);

//         if (front == -1)
//             front = 0;

//         rear++;
//         queue[rear] = value;

//         printf("%d inserted\n", value);
//     }
// }

// void dequeue() {
//     if (front == -1) {
//         printf("Queue is Underflow\n");
//     } else {
//         printf("%d deleted\n", queue[front]);
//         front++;

//         if (front > rear) {
//             front = -1;
//             rear = -1;
//         }
//     }
// }

// void display() {
//     if (front == -1) {
//         printf("Queue is Empty\n");
//     } else {
//         printf("Queue: ");

//         for (int i = front; i <= rear; i++) {
//             printf("%d ", queue[i]);
//         }

//         printf("\n");
//     }
// }

// int main() {
//     int choice;

//     do {
//         printf("\n--- QUEUE MENU ---\n");
//         printf("1. Enqueue\n");
//         printf("2. Dequeue\n");
//         printf("3. Display\n");
//         printf("4. Exit\n");

//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 enqueue();
//                 break;

//             case 2:
//                 dequeue();
//                 break;

//             case 3:
//                 display();
//                 break;

//             case 4:
//                 printf("Program Ended\n");
//                 break;

//             default:
//                 printf("Invalid Choice\n");
//         }

//     } while (choice != 4);

//     return 0;
// }


// #include <stdio.h>
// #define SIZE 5

// int queue[SIZE];
// int front = -1;
// int rear = -1;

// // Enqueue
// void enqueue() {
//     int value;

//     if (rear == SIZE - 1) {
//         printf("Queue is Overflow\n");
//     }
//     else {
//         printf("Enter value: ");
//         scanf("%d", &value);

//         if (front == -1)
//             front = 0;

//         rear++;
//         queue[rear] = value;

//         printf("%d inserted into queue\n", value);
//     }
// }

// // Dequeue
// void dequeue() {

//     if (front == -1 || front > rear) {
//         printf("Queue is Underflow\n");
//     }
//     else {
//         printf("%d deleted from queue\n", queue[front]);
//         front++;

//         if (front > rear) {
//             front = -1;
//             rear = -1;
//         }
//     }
// }

// // Display
// void display() {

//     if (front == -1) {
//         printf("Queue is Empty\n");
//     }
//     else {
//         printf("Queue: ");

//         for (int i = front; i <= rear; i++) {
//             printf("%d ", queue[i]);
//         }

//         printf("\n");
//     }
// }

// int main() {
//     int choice;

//     while (1) {
//         printf("\n--- QUEUE MENU ---\n");
//         printf("1. Enqueue\n");
//         printf("2. Dequeue\n");
//         printf("3. Display\n");
//         printf("4. Exit\n");

//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 enqueue();
//                 break;

//             case 2:
//                 dequeue();
//                 break;

//             case 3:
//                 display();
//                 break;

//             case 4:
//                 return 0;

//             default:
//                 printf("Invalid choice\n");
//         }
//     }
    

//     return 0;
// }


#include<stdio.h>
#define size 5
int queue[size];
int rear=-1, front=-1;

void enqueue(){
    int value;
    if(rear==size-1){
        printf("queue is overflow");
    }
    else{
        printf("enetr a value");
        scanf("%d",&value);
        if(front==-1)
        front=0;
        rear++;
        queue[rear]=value;
    }
}

void dequeue(){
    if(front==-1){
        printf("queue is underflow");
    }
    else{
        printf("%d element deleted",queue[front]);
        front++;
        if(front>rear){
            front=-1;
            rear=-1;
        }
    }
}

void display(){
    if(front==-1){
        printf("queue is empty");
    }
    else{
        printf("queue\n");
        for(int i=front;i<=rear;i++){
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}
int main(){
    int choice;

    do {
        printf("\n--- QUEUE MENU ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Program Ended\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while (choice != 4);

    return 0;
}