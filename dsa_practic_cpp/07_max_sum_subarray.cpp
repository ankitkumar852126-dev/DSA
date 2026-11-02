#include<iostream>
#include<climits>
using namespace std;

    void maxsumsubarray(int *arr,int n){
        int maxsum=INT_MIN;
        for(int start=0;start<n;start++){
            for(int end=start;end<n;end++){
                int sum=0;
                for(int i=start;i<=end;i++){
                    sum=sum+arr[i];
                }
                cout<<sum;
                cout<<",";
                maxsum=max(maxsum,sum);
            } 
            cout<<endl;
        }
          cout<<maxsum;
    }
int main(){
    int arr[5]={1,2,3,4,-5};
    maxsumsubarray(arr,5);
}

// #include<iostream>
// #include<climits>
// using namespace std;

//     void maxsumsubarray(int *arr,int n){
//         int maxsum=INT_MIN;
//         for(int start=0;start<n;start++){
//             int sum=0;
//             for(int end=start;end<n;end++){
//                     sum=sum+arr[end];
//                 maxsum=max(maxsum,sum);
//             } 
//         }
//           cout<<maxsum;
//     }
// int main(){
//     int arr[5]={1,2,3,4,-5};
//     maxsumsubarray(arr,5);
// }