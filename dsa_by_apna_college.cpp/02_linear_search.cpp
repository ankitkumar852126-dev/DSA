// #include<iostream>
// using namespace std;
// string linerasearch(int ptr[],int key, int n){
//     for(int i=0;i<n;i++){
//         if(ptr[i]==key){
//             return  to_string(i);
//         }
//     }
//     string m="number not exit";
//     return m;
// }
// int main(){
//     int arr[]={2,43,2,44,566,4,56};
//     int n=sizeof(arr)/4;
//     cout<<linerasearch(arr,44,n);
// }

#include<iostream>
using namespace std;
int linerasearch(int ptr[],int key, int n){
    for(int i=0;i<n;i++){
        if(ptr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={2,43,2,44,566,4,56};
    int n=sizeof(arr)/4;
    cout<<linerasearch(arr,44,n);
}