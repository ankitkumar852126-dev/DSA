#include<iostream>
using namespace std;
int binarysearch(int arr[],int target,int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(target>arr[mid]){
            start=mid+1;
        }else if(target<arr[mid]){
            end=mid-1;
        }else
        {
            return mid;
        }
    }
    return -1;
}
int main(){
   int arr[]={1,2,3,4,5,6,7,8};
   int n=sizeof(arr)/4;
   cout<<binarysearch(arr,7,n);
}