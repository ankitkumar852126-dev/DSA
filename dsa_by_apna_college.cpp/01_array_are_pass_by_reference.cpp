// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={2,9,4,2,5,6};
//     int a=5;
//     int *ptr=&a;
//     cout<<*ptr;
//     // cout<<*arr+1;


// }

#include<iostream>
using namespace std;

void printarr(int ptr[],int n){
    
    for(int i=0;i<n;i++){
        cout<<ptr[i]<<",";
    }
    cout<<endl;
}
int main(){
    int arr[]={2,9,4,2,5,6};
    int arr1[]={2,4,5,6,7,4,3,5,6};
    int n1=sizeof(arr1)/4;
    int n=sizeof(arr)/4;
    printarr(arr,n);
    printarr(arr1,n1);
}