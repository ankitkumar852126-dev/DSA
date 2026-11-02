#include<stdio.h>
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}

void bubble(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
    print(arr,n);

}
int main(){
    int arr[]={1,3,2,4,5};
    bubble(arr,5);

}