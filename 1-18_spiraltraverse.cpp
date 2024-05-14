#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
int arr[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}

// for spiral traversal need 4 pointer
int row_start=0,row_end=n-1,col_start=0,col_end=m-1;
while(row_start<=row_end && col_start<=col_end){ // runs until start corosses end pointer
// for printing row we move col pointer and vice versa
// print from top
// for printing row

// for row using col pointer 1st row
for(int i=col_start;i<=col_end;i++){ 
   cout<<arr[row_start][i]<<" ";
}
row_start++;

//for col using row pointer last col
for(int i=row_start;i<=row_end;i++){ 
cout<<arr[i][col_end]<<" ";
}
col_end--;

// for row last using col pointer last to first
for(int i=col_end;i>=col_start;i-- ){
    cout<<arr[row_end][i]<<" ";
}
row_end--;

// for col 1st using row pointers last to first
for(int i=row_end;i>=row_start;i--){
    cout<<arr[i][col_start]<<" ";
}
col_start++;
}
return 0;
}