#include<iostream>
using namespace std;
int lastoccerence(int arr[],int n,int target,int i){
    if(i==-1){
        return -1;
    }
    if(arr[i]==target){
        return i;
    }
    return lastoccerence(arr,n,target,i-1);
}
int main(){
    int arr[]={1,2,2,3,4,5};
    cout<<lastoccerence(arr,6,5,5);
}