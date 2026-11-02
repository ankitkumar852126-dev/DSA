#include<iostream>
#include<climits>
using namespace std;
void maxprofit(int *price,int n){
    int bestbuy[100000];
    bestbuy[0]=INT_MAX;
    for(int i=1;i<n;i++){
        bestbuy[i]=min(bestbuy[i-1],price[i-1]);
    }
    int maxprofit=0;
    for(int i=0;i<n;i++){
        int currprofit=price[i]-bestbuy[i];
        maxprofit=max(maxprofit,currprofit);
    }
    cout<<"max profit= "<<maxprofit<<endl;
}
int main(){
int price[6]={7,1,5,3,6,4};
int n=sizeof(price)/4;
maxprofit(price,n);
}
