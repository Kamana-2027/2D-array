//Write a C++ program to find the largest element of a given 2D array of integers.

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
    int max=0;
    //max element
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]>max) max=a[i][j];
        }
    }
    cout<<"Max element in the array:";
    cout<<max;
}