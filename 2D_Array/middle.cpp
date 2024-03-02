//Write a function which accepts a 2D array of integers and its size as arguments and displays the elements of middle row and the elements of middle column.

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

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==m/2 or j==n/2)
             cout<<a[i][j]<<" ";
            else 
             cout<<" "<<" ";
        }
        cout<<endl;
    }
}