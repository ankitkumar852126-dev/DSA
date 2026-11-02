#include<iostream>
#include<vector>
using namespace  std;
int main(){
    vector<int> v={2,11,15,7};
    int target=9;
    for(int i=0;i<v.size()-1;i++){
        for(int j=1;j<v.size();j++){
            if(v[i]+v[j]==target){
                cout<<"["<<i+1<<","<<j+1<< "]";
                return 0;
            }
        }
    }
    cout<<"pair not exist";
    return 0;
}