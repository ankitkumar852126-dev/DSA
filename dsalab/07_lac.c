// #include<stdio.h>
// #include<stdlib.h>
// struct Node
// {
//     int coeff;
//     int xpow;
//     int ypow;
//     struct Node*next;

// };
// struct Node* createNode(int c,int x,int y){
//     struct Node *newNode;
//     newNode=(struct Node*)malloc(sizeof(struct Node));
//     newNode->coeff=c;
//     newNode->xpow=x;
//     newNode->ypow=y;
//     newNode->next=NULL;
//     return newNode;
// }
// struct Node*addTerm(struct Node *head,int c,int x,int y){
//     struct Node *newNode;
//     struct Node *temp;
//     newNode=createNode(c,x,y);
//     if(head==NULL){
//         head=newNode;
//         return head;
//     }
//     temp=head;
//     while(temp->next){
//         temp->next=newNode;
//     }
//     temp->next=newNode;
//     return head;
// }
// void display(struct Node *head)
// {
//     struct Node *temp=head;
//     while(temp){
//         printf("%dx^%dy^%d",temp->coeff,temp->xpow,temp->ypow);
//         if(temp->next)
//         printf(" + ");
//         temp=temp->next;
//     }
//     printf("\n");
// }
// struct Node*addpolynomial(struct Node *p1, struct Node *p2){
//     struct Node*result=NULL;
//     struct Node*temp1=p1;
//     struct Node*temp2=p2;
//     while(temp1){
//         result=addTerm(result,temp1->coeff,temp1->)
//     }

// }


#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int coeff;
    int xpow;
    int ypow;
    struct Node *next;
};

struct Node* createNode(int c, int x, int y)
{
    struct Node *newNode;

    newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->coeff = c;
    newNode->xpow = x;
    newNode->ypow = y;
    newNode->next = NULL;

    return newNode;
}

struct Node* addTerm(struct Node *head, int c, int x, int y)
{
    struct Node *newNode;
    struct Node *temp;

    newNode = createNode(c, x, y);

    if (head == NULL)
    {
        head = newNode;
        return head;
    }

    temp = head;

    while (temp->next)
    {
        temp = temp->next;
    }

    temp->next = newNode;

    return head;
}

void display(struct Node *head)
{
    struct Node *temp = head;

    while (temp)
    {
        printf("%dx^%dy^%d", temp->coeff, temp->xpow, temp->ypow);

        if (temp->next)
        {
            printf(" + ");
        }

        temp = temp->next;
    }

    printf("\n");
}

struct Node* addPolynomial(struct Node *p1, struct Node *p2)
{
    struct Node *result = NULL;
    struct Node *temp1 = p1;
    struct Node *temp2 = p2;

    while (temp1)
    {
        result = addTerm(result, temp1->coeff,
                         temp1->xpow, temp1->ypow);

        temp1 = temp1->next;
    }

    while (temp2)
    {
        struct Node *temp = result;
        int found = 0;

        while (temp)
        {
            if (temp->xpow == temp2->xpow &&
                temp->ypow == temp2->ypow)
            {
                temp->coeff = temp->coeff + temp2->coeff;
                found = 1;
                break;
            }

            temp = temp->next;
        }

        if (found == 0)
        {
            result = addTerm(result, temp2->coeff,
                             temp2->xpow, temp2->ypow);
        }

        temp2 = temp2->next;
    }

    return result;
}

int main()
{
    struct Node *p1 = NULL;
    struct Node *p2 = NULL;
    struct Node *sum;

    p1 = addTerm(p1, 3, 2, 1);
    p1 = addTerm(p1, 5, 1, 2);
    p1 = addTerm(p1, 7, 0, 0);

    p2 = addTerm(p2, 4, 2, 1);
    p2 = addTerm(p2, 2, 1, 2);
    p2 = addTerm(p2, 6, 0, 0);

    printf("Polynomial 1:\n");
    display(p1);

    printf("Polynomial 2:\n");
    display(p2);

    sum = addPolynomial(p1, p2);

    printf("Addition:\n");
    display(sum);

    return 0;
}