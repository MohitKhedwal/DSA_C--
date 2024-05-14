// Problem
// Given a square matrix A & its number of rows (or columns) N, return the
// transpose of A.
// The transpose of a matrix is the matrix flipped over it's main diagonal,
// switching the row and column indices of the matrix.
// Constraints
// 1 <= N <= 1000
// Sample Input1
// A = [
// [1,2,3],
// [4,5,6],
// [7,8,9]
// ]
// N = 3

#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int matrix[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>matrix[i][j];
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<matrix[i][j]<<" ";
    }
    cout <<endl;
}
cout <<"TRANSPOSE \n";


for(int i=0;i<(n);i++){
    for(int j=0;j<n;j++){
        cout<<matrix[j][i]<<" ";
    }
cout<<endl;
}


return 0;
}