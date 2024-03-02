//Write a program to add two matrices and save the result in one of the given matrices.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cout<<"Row:";
    cin>>m;
    cout<<"Column:";
    cin>>n;
    int a[m][n],b[m][n];
    //matrix 1
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
     cout<<endl;
    //matrix 2
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
        }
    }
    //adding
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           a[i][j]+=b[i][j];
        }
    }
    cout<<endl;
    //display
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


}