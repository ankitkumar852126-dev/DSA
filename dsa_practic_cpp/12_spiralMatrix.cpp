#include<iostream>
using namespace std ;

void spiralmatrix(int matrix[][4],int n,int m){
    
    int srow=0;
    int scol=0;
    int erow=n-1;
    int ecol=m-1;
    while(srow<=erow&&scol<=ecol){
    for(int j=scol;j<=ecol;j++){
        cout<<matrix[srow][j]<<" " ;
    }
    for(int i=srow+1;i<=erow;i++){
        cout<<matrix[i][ecol]<<" ";
    }
    for(int j=ecol-1;j>=scol;j--){
        if (srow==erow)
        {
           break;
        }
        cout<<matrix[erow][j]<<" ";
    }
    for(int i=erow-1;i>srow;i--){
        if(scol==ecol){
            break;
        }
        cout<<matrix[i][scol]<<" ";
    }
    srow++;
    scol++;
    erow--;
    ecol--;
    }
}
int main(){
    int matrix[4][4]={{1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12},
                    {13,14,15,16}};
    spiralmatrix(matrix,4,4);

    return 0;

}