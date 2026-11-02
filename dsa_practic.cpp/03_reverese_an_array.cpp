// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={15,55,8,1,8,45,74,6,5,68,44};
//     int n=sizeof(arr)/4;
//     int copyarr[n];
//     for(int i=0;i<n;i++){
//        int j=n-i-1;
//        copyarr[i]=arr[j];
//     }
//     for(int i=0;i<n;i++){
//         arr[i]=copyarr[i];
//     }
//      for(int i=0;i<n;i++){
//         cout<<arr[i]<<",";
// }
// }

#include<iostream>
using namespace std;
int print(int ptr[],int n){
    for(int i=0;i<n;i++){
        cout<<ptr[i]<<",";
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int start=0;
    int n=sizeof(arr)/4;
    int end=n-1;
    int temp;

   while (start<end)
   {
     temp=arr[start];
   arr[start]=arr[end];
   arr[end]=temp;
   start++;
   end--;
   }
   print(arr,n);
   return 0;
   
}