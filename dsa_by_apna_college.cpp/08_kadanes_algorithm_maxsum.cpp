#include<iostream>
#include<climits>
using namespace std;
void maxsumsubarray(int *arr,int n){
    int sum=0;
    int maxsum = INT_MIN;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        maxsum=max(sum,maxsum);
        if(sum<0){
            sum=0;
        }
    }
    cout<<maxsum;
}

int main(){
    int arr[5]={1,2,3,4,-5};
    maxsumsubarray(arr,5);
}