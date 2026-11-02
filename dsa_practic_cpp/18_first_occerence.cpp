#include<iostream>
using namespace std;
int occerence(int arr[],int n,int i,int target){
    if(arr[i]==n){
        return -1;
    }
    if(arr[i]==target){
        return i;
    }
    return occerence( arr, n, i+1, target);

}
int main(){
    int arr[]={1,2,3,4,5};
    cout<<occerence( arr, 5, 0, 3);


}