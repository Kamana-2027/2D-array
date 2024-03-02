//Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the rectangle from (l1,r1) to (l2, r2).

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
    int x1,y1,x2,y2;//limit x1,x2 for row and y1,y2 for column
    cout<<"Enter first coordinate:";
    cin>>x1>>y1;
    cout<<"Enter second coordinate:";
    cin>>x2>>y2;

    int sum=0;
    for(int k=x1;k<=x2;k++){//row
        for(int l=y1;l<=y2;l++){//column
            sum+=a[k][l];
        }
    }
    cout<<sum;
}

