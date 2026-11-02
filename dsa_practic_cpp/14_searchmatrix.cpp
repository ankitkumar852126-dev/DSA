#include<iostream>
using namespace std;
void search(int matrix[][4],int m,int n,int key){
    int i=0;
    while(i<m&&n-1>0)
    if(matrix[i][n-1]==key){
        cout<<"number found";
        return;
    }
    else if(key>matrix[i][n-1]){
        i++;
    }
    else {
        n--;
    }
    cout<<"not found";
}
int main(){
    int matrix[4][4]={{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                     {13,14,15,16}};
    search(matrix,4,4,0);
}