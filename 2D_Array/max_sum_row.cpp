//Write a program to print the row number having the maximum sum in a given matrix.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cout<<"Row:";
    cin>>m;
    cout<<"Column:";
    cin>>n;
    int a[m][n];
    //matrix 1
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int max_sum=0;
    int maxrow=-1;
    for(int i=0;i<m;i++){
        int sum=0;
        for(int k=0;k<n;k++){
            sum+=a[i][k];
        }
        //max_sum=max(max_sum,sum);
        if(sum>max_sum){
            max_sum=sum;
            maxrow=i;
        }
    }
    cout<<"Max Sum:"<<max_sum<<" Max row:"<<maxrow;
}