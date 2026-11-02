// #include <stdio.h>

// int main()
// {
//     int p1[10] = {0}, p2[10] = {0}, sum[10] = {0};
//     int n1, n2, n, i;

//     printf("Enter degree of first polynomial: ");
//     scanf("%d", &n1);

//     printf("Enter coefficients of first polynomial:\n");
//     for(i = n1; i >= 0; i--)
//         scanf("%d", &p1[i]);

//     printf("Enter degree of second polynomial: ");
//     scanf("%d", &n2);

//     printf("Enter coefficients of second polynomial:\n");
//     for(i = n2; i >= 0; i--)
//         scanf("%d", &p2[i]);

//     n = (n1 > n2) ? n1 : n2;

//     for(i = 0; i <= n; i++)
//         sum[i] = p1[i] + p2[i];

//     printf("Sum = ");

//     for(i = n; i >= 0; i--)
//     {
//         if(sum[i] != 0)
//         {
//             if(i == 0)
//                 printf("%d", sum[i]);
//             else if(i == 1)
//                 printf("%dx", sum[i]);
//             else
//                 printf("%dx^%d", sum[i], i);

//             if(i > 0)
//                 printf(" + ");
//         }
//     }

//     return 0;
// }

#include <stdio.h>

#define MAX 20  // maximum number of terms a polynomial can have

int main() {
    int poly1[MAX], poly2[MAX], result[MAX];
    int n1, n2, i;

    printf("Enter degree of first polynomial: ");
    scanf("%d", &n1);

    printf("Enter degree of second polynomial: ");
    scanf("%d", &n2);

    printf("Enter %d coefficients for polynomial 1 (x^0 to x^%d):\n", n1 + 1, n1);
    for (i = 0; i <= n1; i++)
        scanf("%d", &poly1[i]);

    printf("Enter %d coefficients for polynomial 2 (x^0 to x^%d):\n", n2 + 1, n2);
    for (i = 0; i <= n2; i++)
        scanf("%d", &poly2[i]);

    int maxDeg = (n1 > n2) ? n1 : n2;

    for (i = 0; i <= maxDeg; i++) {
        int a = (i <= n1) ? poly1[i] : 0;
        int b = (i <= n2) ? poly2[i] : 0;
        result[i] = a + b;
    }

    printf("\nSum polynomial: ");
    for (i = maxDeg; i >= 0; i--) {
        printf("%d", result[i]);
        if (i != 0)
            printf("x^%d + ", i);
    }
    printf("\n");

    return 0;
}