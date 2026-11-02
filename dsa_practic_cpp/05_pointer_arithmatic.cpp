#include<iostream>
using namespace std;
int main(){
    int a=10;
    // int *ptr=&a;
    // cout<<*ptr<<endl;;
    // cout<<ptr<<endl;
    // ptr+3;
    // cout<<ptr+3;
    int arr[]={1,2,3,4,5,6,7,8,9};
    int *ptr1=arr;
    int *ptr2=ptr1+3;
    // cout<<*ptr1<<endl;
    // cout<<*ptr2<<endl;
    // cout<<ptr2-*ptr1;
    cout<<(ptr1==arr);
}
