// #include<stdio.h>
// #define max 50

// void input(int a[max][3])
// {
//     int r,c,n,i;
//     printf("enter row,column and number of non zero element");
//     scanf("%d%d%d",&r,&c,&n);
//     a[0][0]=r;
//     a[0][1]=c;
//     a[0][2]=n;
//     printf("enetr row ,coloum and value: \n");
//     for(i=1;i<=n;i++){
//         scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);
//     }
// }
// //display sparse matrix
// void displat(int a[max][3]){
//     int i;
//     printf("\nrow\tcolumn\tvalue\n");
//     for(i=0;i<-a[0][2];i++){
//         printf("%\td%\td%d\n",a[i][0],a[i][1],a[i][2]);
//     }
// }
// //add two sparse matrices
// void add(int a[max][3],int b[max][3],int sum[max][3]){
//     int i=1,j=1,k=1;
//     if(a[0][0]!=b[0][0]||a[0][1]!=b[0][1])
//     {
//         printf("\nAddition not possible");
//         return;
//     }
// }
// sum[0][0]= a[0][0];
// sum[0][1]= a[0][1];
// while (i <= a[0][2]&& j<= b[0][2]){
//     if(a[i][0]==b[j][0]&&a[i][1]==b[j][1])
//     {
//      sum[k][0]=a[i][0];
//      sum[k][1]=a[i][1];
//      sum[k][2]=a[i][2]+b[j][2];
//      i++;
//      j++;
//      k++;

//     }
//     else if(a[i][0]<b[j][0]||(a[i][0]))
// }



#include <stdio.h>

#define MAX 100

// Function to take input for a sparse matrix in 3-tuple representation
void input(int a[MAX][3]) {
    int r, c, n, i;
    printf("Enter total rows, columns, and number of non-zero elements: ");
    scanf("%d%d%d", &r, &c, &n);

    a[0][0] = r;
    a[0][1] = c;
    a[0][2] = n;

    printf("Enter the row, column and value:\n");
    for (i = 1; i <= n; i++) {
        scanf("%d%d%d", &a[i][0], &a[i][1], &a[i][2]);
    }
}

// Function to display the 3-tuple representation of the sparse matrix
void display(int a[MAX][3]) {
    int i;
    printf("\nRow\tColumn\tValue\n");
    for (i = 0; i <= a[0][2]; i++) {
        printf("%d\t%d\t%d\n", a[i][0], a[i][1], a[i][2]);
    }
}

// Function to add two sparse matrices
void add(int a[MAX][3], int b[MAX][3], int sum[MAX][3]) {
    int i = 1, j = 1, k = 1;

    // Check if matrix dimensions match
    if (a[0][0] != b[0][0] || a[0][1] != b[0][1]) {
        printf("\nAddition not possible\n");
        return;
    }

    sum[0][0] = a[0][0];
    sum[0][1] = a[0][1];

    while (i <= a[0][2] && j <= b[0][2]) {
        if (a[i][0] == b[j][0] && a[i][1] == b[j][1]) {
            int value = a[i][2] + b[j][2];
            if (value != 0) {
                sum[k][0] = a[i][0];
                sum[k][1] = a[i][1];
                sum[k][2] = value;
                k++;
            }
            i++;
            j++;
        } else if (a[i][0] < b[j][0] || (a[i][0] == b[j][0] && a[i][1] < b[j][1])) {
            sum[k][0] = a[i][0];
            sum[k][1] = a[i][1];
            sum[k][2] = a[i][2];
            i++;
            k++;
        } else {
            sum[k][0] = b[j][0];
            sum[k][1] = b[j][1];
            sum[k][2] = b[j][2];
            j++;
            k++;
        }
    }

    // Copy remaining elements of matrix a
    while (i <= a[0][2]) {
        sum[k][0] = a[i][0];
        sum[k][1] = a[i][1];
        sum[k][2] = a[i][2];
        i++;
        k++;
    }

    // Copy remaining elements of matrix b
    while (j <= b[0][2]) {
        sum[k][0] = b[j][0];
        sum[k][1] = b[j][1];
        sum[k][2] = b[j][2];
        j++;
        k++;
    }

    sum[0][2] = k - 1;
}

// Function to find the transpose of a sparse matrix
void transpose(int a[MAX][3], int t[MAX][3]) {
    int i, j, k = 1;

    t[0][0] = a[0][1];
    t[0][1] = a[0][0];
    t[0][2] = a[0][2];

    for (j = 0; j < a[0][1]; j++) {
        for (i = 1; i <= a[0][2]; i++) {
            if (a[i][1] == j) {
                t[k][0] = a[i][1];
                t[k][1] = a[i][0];
                t[k][2] = a[i][2];
                k++;
            }
        }
    }
}

int main() {
    int a[MAX][3], b[MAX][3];
    int sum[MAX][3], t[MAX][3];

    printf("Enter first sparse matrix:\n");
    input(a);

    printf("\nEnter second sparse matrix:\n");
    input(b);

    printf("\nFirst matrix:");
    display(a);

    printf("\nSecond matrix:");
    display(b);

    add(a, b, sum);
    printf("\nAddition:");
    display(sum);

    transpose(a, t);
    printf("\nTranspose of first matrix:");
    display(t);

    return 0;
}

