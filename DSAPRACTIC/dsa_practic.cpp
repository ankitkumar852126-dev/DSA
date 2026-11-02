/*#include<iostream>
using namespace std;
int main(){
   int x=1;
   for(int i=1;i<5;i++){
    for(int j=1;j<5;j++){
        cout<<j;
       // cout<<x;
       // x++;
    }
   // x=1;
    cout<<endl;
   }
}*/
/*#include<iostream>
using namespace std;
int main(){
   char x='A';
   int b=x;
    for(int i=1;i<5;i++){
        for(int j=1;j<5;j++){
            cout<<x;
            x=x+1;
        }
        x='A';
        cout<<endl;
    }
}*/
// #include<iostream>
// using namespace std;
// int main(){
//    int x=1;
//    for(int i=1;i<4;i++){
//     for(int j=1;j<4;j++){
//         cout<<x;
//         x++;
//     }
//     cout<<endl;
//    }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char x='A';
//     for(int i=1;i<4;i++){
//         for(int j=1;j<4;j++){
//             cout<<x;
//             x=x+1;
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<5;i++){
//         int n=1;
//         for(int j=0;j<i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int x=1;
//     for(int i=1;i<5;i++){
//         int n=1;
//         for(int j=0;j<i;j++){
//             cout<<x;
//         }
//         x++;
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//    char x='A';
//     for(int i=1;i<6;i++){
//         int n=1;
//         for(int j=0;j<i;j++){
//             cout<<x;
//         }
//         x++;
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace  std;
// int main(){
//     for(int i=1;i<5;i++){
//         for(int j=i;j>0;j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// } 

// #include<iostream>
// using namespace std;
// int main(){
//     int x=1;
//     for(int i=1;i<5;i++){
//         for(int j=0;j<i;j++){
//             cout<<x;
//             x++;
//         }
//         cout<<endl;
//     }
    
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char ch='A';
//     for(int i=0;i<4;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<ch;
//             ch++;

//         }
//         cout<<endl;
//     }

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x=1;
//     for(int i=1;i<5;i++){
//         for(int k=1;k<i;k++){
//             cout<<" ";
//         }
//            for(int j=i;j<5;j++){
//             cout<<x;
//         }
//         x++;
//         cout<<endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     char ch='A';
//     for(int i=1;i<5;i++){
//         for(int j=1;j<i;j++){
//             cout<<" ";
//         }
//         for(int k=i;k<5;k++){
//             cout<<ch;
//         }
//         cout<<endl;
//         ch++;

//     }
//  }
// #include<iostream>
// using namespace std;
// int main(){
//     int n=7;
//     for(int i=1;i<n;i++){
//         for(int j=1;j<n-i;j++){
//             cout<<" ";
//         }
//             for(int k=1;k<i+1;k++){
//                 cout<<k;
//             }
//             for(int l=i-1;l>=1;l--){
//                 cout<<l;
//             }
// cout<<endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int add(int a,int b){
// return a+b;
// }

// int main(){
//   cout<<  add(2,4);

// }
// #include<iostream>
// using namespace std;
// int  min(int a,int b){
//     if(a>b){
//        // cout<<b<<" is smaller";
//        return b;
//     }
//         else{
//            return a;   
//     }
// }
// int main(){
// cout<<"min="<<min(8,4);
// }

// #include<iostream>
// using namespace std;
// int sumofn(int n){
//     // cout<<"enter a number";
//     // cin>>n;
//    int  sum=0;
   
//    for(int i=1;i<=n;i++){
//     sum=sum+i;
//    }
//    return sum;
// }
// int main(){
// cout<<sumofn(5);
// }

// #include<iostream>
// using namespace std;
// int fact(int n){
//    int  factorial=1;
//    for(int i=1;i<=n;i++){
//     factorial=factorial*i;
//    }
//    return factorial;
// }
// int main(){
// cout<<"factorial="<<fact(5);
// }

// #include<iostream>
// using namespace std;
// int binary(int x){
//     int ans=0;
//     int  power=1;
//     while(x>0){
//        int rem= x%2;
//        x=x/2;
//        ans=ans+(rem*power);
//        power = power*10;
//     }
//     return ans;
// }
// int main(){
//     for(int i=1;i<=10;i++)
// cout<<binary(i)<<endl;
// }

// #include<iostream>
// using namespace std;
// int decimal(int x){
//     int ans=0;
//     int power=1;
//     while(x>0){
//        int rem =x%10;
//        ans=ans+(rem*power);
//         x=x/10;
//        power=power*2;
//     }
//     return ans;
// }
// int main(){
//  cout<<   decimal(1010);

// }

//BITWISE OPERATOR.

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<(6&10)<<endl;
//     cout<<(6|10)<<endl;
//     cout<<(6^10)<<endl;
//     cout<<(10<<2)<<endl;
//     cout<<(10>>1);
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// class stack{
//     vector<int> v;
// public:
// void push(int val){
//     v.push_back(val);
// }
// void pop(){
//     v.pop_back();
// }
// int top(){
//     return v[v.size()-1];

// }
// bool empty(){
//     return v.size()==0;
// }

// };
// int main(){
//     stack s;

//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.pop();
//     s.pop();
    
//     while(!s.empty()){
//         cout<<s.top()<<endl;
//         s.pop();
//     }

// }

// #include<iostream>
// using namespace std;
// int main(){
    
//     int mark[]={21,21,13,76,65};
//     int sz=sizeof(mark)/sizeof(int);
//     for(int i=0;i<sz;i++){
//         cout<<mark[i]<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
   
//     int arr[]={34,1,46,78,55,87};
//      int x=arr[0],y=0;
//      int min=arr[0],max=arr[0];
//       for(int i=0;i<5;i++){
//          if(arr[i]<arr[0]){
//             min=arr[i];
//             y=i;
//          }
//       }
//       for(int i=0;i<5;i++){
//       if(arr[i]>arr[0]){
//             max=arr[i];
//             x=i;
            
            
//       }
//     }
//       cout<<"min="<<min<<endl;
//       cout<<y<<endl;
//       cout<<"max="<<max<<endl;
//       cout<<x;
// }
// linear search.

// #include<iostream>
// using namespace std;
// int main(){
//    int arr[]={34,45,56,7,76,65};
//    int find=76;
//    int size=sizeof(arr)/sizeof(int);
//    for(int i=0;i<size;i++){
//       if(arr[i]==find){
//          cout<<"index is:"<<i<<endl;
//          return 0;
//       }
//    }
//   cout<<"element is not exit";
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//    int arr[]={34,65,67,22,38};            //reverse of an array  wrong code
//    int start=0;
//    int end=5;
//    while(start<end){
//       swap(arr[start],arr[end])
//         start++;end--;
//       }
   
//    for(int i=0;i<6;i++){
//       cout<<i;
// }
// }

// #include<iostream>
// using namespace std;
// #include<string>
// int main(){
// string str="ankit";
//  string str1="kumar";
// char ch='a';
// string str2=(str+" "+str1);
// cout<<str2;

// }
#include<iostream>
using namespace std;
int main(){
    int arr[]={9,4,3,6,6,7,5,4,6};
    int target=8;
    for(int i=0;i<=9;i++){
        for(int j=0;j<=9;j++){

            if(arr[i]+arr[j]==target){
                cout<<"target="<<i<<","<<j;
                cout<<endl;
                 
            }
        }
        if(target==8){
            break;
        }
    }
    cout<<sizeof(arr)/4;
}


