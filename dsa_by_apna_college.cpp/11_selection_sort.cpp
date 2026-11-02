#include<iostream>
using namespace std;

void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minimum=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minimum]){
                minimum=j;
            }
        }
        swap(arr[i],arr[minimum]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={2,5,7,4,8,3,6,7,9,0,5,6};
    selectionsort(arr,11);

}