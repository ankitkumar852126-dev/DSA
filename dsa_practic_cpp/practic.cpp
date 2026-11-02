// #include<iostream>
// using namespace std;
// int main(){
//     bool value=true;
//     int n=5;
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//           cout<<value<<" ";
//           value=!value;
//         }
//         cout<<"\n";
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=n-i;j>=1;j--){
//             cout<<" ";
//         }
//         for(int j=1;j<=5;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=1;i<=5;i++){
//         for(int j=n-i;j>=1;j--){
//             cout<<" ";
//         }
//         for(int k=i;k>=1;k--){
            
//             cout<<k;
            
//         }
//         for(int l=2;l<=i;l++){
//             cout<<l;
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x=10;
//     int *ptr=&x;
//     int **pttr=&ptr;
//     cout<<ptr<<endl;
//     cout<<*ptr<<endl;
//     cout<<*&x<<endl;
//     cout<<pttr;

// }
// #include<iostream>
// using namespace std;
// int add(int a,int &b){
//     a=7;
//     b=4;
// //    cout<<a<< b<<endl;
// cout<<a+b;
// cout<<endl;
    
// }
// int main(){
//     int x=3,y=1;
// add(x,y);
// cout<<x<<y;      

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={2,4,3,8,9,8};
//     int max=arr[0];
//     for(int i=1;i<6;i++){
//         if(max<arr[i]){
//             max=arr[i];
//         }
//     }
//     cout<<max;
// }

// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n==0){
//         return ;
//     }
//     print(n-1);
//     cout<<n<<" ";
// }
// int main(){
//     print(5);

// }
// #include<iostream>
// using namespace std;
// int factorial(int n){
//     if(n==1||n==0){
//         return 1;
//     }
//     return (n*factorial(n-1));
    
// }
// int main(){
//     cout<<factorial(5);
//     return 0;

// }


// #include<iostream>
// using namespace std;
// int count(int n){
//     if(n==0){
//         return 0;
//     }
//     cout<<n<<",";
//     count(n-1);
// }
// int main(){
//     count(5);

// }

// #include<iostream>
// using namespace std;
// int sum(int n){
//     if(n==0){
//         return 0;
//     }
//     return n+sum(n-1);
// }
// int main(){
//     cout<<sum(5);

// }

#include<iostream>
using namespace std;
int fibonacci(int n){
if(n==1||n==0){
    return n;
}
 
return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    cout<<fibonacci(2);

}



#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0||n==1){
        return 1;
    }
    return n*(factorial(n-1));
}
int main(){

}