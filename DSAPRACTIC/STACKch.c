// #include<stdio.h>
// #define size 5
// int stack[size];
// int top=-1;
// void push(){
//     int value;
//     if(top==size-1){
//         printf("stack is overflow\n");
//     }
//     else{
//         printf("enter a value");
//         scanf("%d",&value);
//         top++;
//         stack[top]=value;
//     }
// }
// void pop(){
//     if(top==-1){
//         printf("stack underflow\n");
//     }
//     else{
//         printf("%d element are popped\n",stack[top]);
//         top--;
//     }
// }
// void peek(){
//     if(top==-1)
//     printf("stack is empty\n");
//     else 
//     printf("%d element on top",stack[top]);
// }
// void display(){
//     if(top==-1){
//         printf("stack is empty\n");
//     }
//     else{
//         for(int i=top;i>=0;i--){
//             printf("%d\n",stack[i]);
//         }

//     }
// }

// int main(){
//     int choice;
//     printf("1: push\n");
//     printf("2: pop\n" );
//     printf("3: peek\n");
//     printf("4: display\n");
//     printf("5: exit");


//     do{
//         printf("\nenetr your choice: ");
//         scanf("%d",&choice);
        
//         switch(choice){
//             case 1:
//             push();
//             break;
//             case 2:
//             pop();
//             break;
//             case 3:
//             peek();
//             break;
//             case 4:
//             display();
//             break;
//             case 5:
//             printf("program ended");
//             break;
//             default:
//             printf("invalid choice");

//         }
//     }while(choice!=5);
//     return 0;
// }


// #include<stdio.h>
// #define size 5
// int stack[size];
// int top=-1;
// void push(){
//     int value;
//     if(top==size-1){
        
//         printf("stack overflow");
//     }
//     else{
//         printf("enetr a value");
//         scanf("%d",&value);
//         top++;
//         stack[top]=value;
//     }
// }

// void pop(){
//     if(top==-1){
//         printf("sstack is underflow");
//     }
//     else{
//         printf("%d element deleted",stack[top]);
//         top--;
//     }
// }

// void peek(){
// if(top==-1)
//     printf("stack is empty");
//     else
//     printf("%d element on the top",stack[top]);

// }

// void display(){
//     if(top==-1){
//     printf("stack is empty");
//     }
//     else{
//       for(int i=top;i>=0;i--)
//       printf("%d\n",stack[i]);
//     }
// }

// int main(){
//     int choice;
//     printf("1. push\n");
//     printf("2. pop\n");
//     printf("3. peek\n");
//     printf("4. display\n");
//     printf("5. exit");
    
//     do {
//         printf("enter your choice");
//         scanf("%d",&choice);   
//         switch(choice){

//             case 1:
//             push();
//             break;

//             case 2:
//             pop();
//             break;
//             case 3:
//             peek();
//             break;
//             case 4:
//             display();
//             break;
//             case 5:
//             printf("code ended");
//             break;
//             default:
//             printf("invalid choice");
//         }
//     }while(choice!=5);

// }


// #include<stdio.h>
// #define size 5
// int stack [size];
// int top=-1;
// void push(){
//     if(top==size-1){
//         printf("stack overflow");
//     }
//     else{
//         int value;
//         printf("enetr a value");
//         scanf("%d",&value);
//         top++;
//         stack[top]=value;
//         }
// }

// void pop(){
//     if(top==-1){
//     printf("stack is underflow");
//     }
//     else{
//         printf("%d element is popped",stack[top]);
//         top--;
//     }
// }
// void peek(){
//     if(top==-1)
//         printf("stack is empty");
//         else
//         printf("%d elemrnt on top",stack[top]);
// }

// void display(){
//     if(top==-1){
//         printf("stack is empty");
//     }
//     else{
//         for(int i=top;i>=0;i--){
//             printf("%d\n",stack[i]);
//         }
//     }
// }

// int main(){
//     int choice;
//     printf("1. push\n");
//     printf("2. pop\n");
//     printf("3. peek\n");
//     printf("4. display\n");
//     printf("5. exit");
    
//     do {
//         printf("enter your choice");
//         scanf("%d",&choice);   
//         switch(choice){

//             case 1:
//             push();
//             break;

//             case 2:
//             pop();
//             break;
//             case 3:
//             peek();
//             break;
//             case 4:
//             display();
//             break;
//             case 5:
//             printf("code ended");
//             break;
//             default:
//             printf("invalid choice");
//         }
//     }while(choice!=5);

// }


/*#include<stdio.h>
#include<conio.h>
#define maxsize 10
int stack[maxsize],top=-1;
int  main()
{
    int choice;
    while(1)
    {
        printf("\n1.push\n2.pop\n3.display\n4.exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: push(10);
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
            default: printf("\nInvalid choice");
        }
    }
}*/

//linear search
// #include<stdio.h>
// int main(){
//     int i,a[10];
//     printf("enter 10 number: ");
//     scanf("%d",a[i]);

//     return 0;
// }   

// #include<stdio.h>
// #define size 5

// int stack[size];
// int top=-1;
// void push(){
//     int value;
//     if(top==size-1){
//         printf("stack overflow");
//     }
//     else{
//         printf("enter a value");
//         scanf("%d",&value);
//         top++;
//         stack[top]=value;
//     }
// }

// void pop(){
//     if(top==-1){
//         printf("stack underflow");
//     }
//     else{
//         printf("%d element is popped\n",stack[top]);
//         top--;
//     }
// }

// void peek(){
//     if(top==-1)
//         printf("stack is empty\n");
//         else
//         printf("top element=%d\n",stack[top]);
//     }

// void display(){
//     if(top==-1){
//         printf("stack is empty");
//     }
//     else{
//         for(int i=top;i>=0;i--){
//             printf("%d\n",stack[i]);
//         }
//     }
// }
// int main(){
//     int choice;
//     do{
//     printf("stack menu \n");
//     printf("1. push\n");
//     printf("2. pop\n");
//     printf("3. peek\n");
//     printf("4. display\n");
//     printf("5. exit\n");

//     printf("enter your choice");
//     scanf("%d",&choice);

//     switch(choice)
//     {
//         case 1:
//         push();
//         break;

//         case 2:
//         pop();
//         break;

//         case 3:
//         peek();
//         break;

//         case 4:
//         display();
//         break;

//         case 5:
//         printf("program ended");
//         break;

//         default:
//         printf("invalid choice \n");
//     }
// }while (choice!=5);
// return 0; 
// }

#include<stdio.h>
#define size 5
int stack[size];
int top=-1;

void push(){
    int value;
    if(top==size-1){
        printf("stack is overflow");
    }
    else{
        printf("enter a value");
        scanf("%d",&value);
         top++;
        stack[top]=value;
    }
}
void pop(){
    if(top==-1){
        printf("stack is underflow");
    }
    else{
        printf("%delement are popped\n",stack[top]);
        top--;
    }
}
void peek(){
    if(top==-1)
        printf("stack is empty");
        else
        printf("%d element on the top",stack[top]);
    }
void display(){
    if(top==-1){
        printf("stack id empty");
    }
    else {
        for(int i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
}

int main(){
    int choice;
    printf("1. push\n");
    printf("2 .pop\n");
    printf("3. peek\n");
    printf("4. display\n");
    printf("5. exit\n");

    
    do{
        printf("enter your choice");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            push();
            break;

            case 2:
            pop();
            break;

            case 3:
            peek();
            break;

            case 4:
            display();
            break;

            case 5:
            printf("program ended");
            break;

            default:
            printf("invalide choice");

        }
    }while(choice!=5);
    return 0;

}