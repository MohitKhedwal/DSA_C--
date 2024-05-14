// Given two 2-Dimensional arrays of sizes n1Xn2 and n2Xn3. Your task is to
// multiply these matrices and output the multiplied matrix.
// important for matrix multiplication => number of row= number of col; ansmat=n1Xn3
#include <bits/stdc++.h>
using namespace std;
int main()
{
int n1,n2,n3;
cin >> n1 >> n2 >> n3;
int m1[n1][n2]; int m2[n2][n3]; int ans[n1][n3];
for(int i=0; i<n1; i++) {
for(int j=0; j<n2; j++)
cin >> m1[i][j];
}
for(int i=0; i<n2; i++) {
for(int j=0; j<n3; j++)
cin >> m2[i][j];
}
for(int i=0; i<n1; i++) {
for(int j=0; j<n3; j++)
ans[i][j] = 0;
}
for(int i=0; i<n1; i++) {
for(int j=0; j<n3; j++)
{
for(int k=0; k<n2; k++) {
ans[i][j] += m1[i][k]*m2[k][j];
}
}
}
for(int i=0; i<n1; i++) {
for(int j=0; j<n3; j++)
cout << ans[i][j] <<" ";
cout << endl;
}

return 0;
}

// int n,m,q;
// cin>>n>>m>>q;
// int mat1[n][m],mat2[m][q];
// for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         cin>>mat1[i][j];
//     }
// }
// cout<<"Mat 2"<<endl;
// for(int i=0;i<m;i++){
//     for(int j=0;j<q;j++){
//         cin>>mat2[i][j];
//     }
// }
// int answermat[n][q];

// for(int i=0;i<n;i++){
//     for(int j=0;j<q;j++){
//         for(int k=0;k<m;k++){
//           answermat[i][j]+=mat1[i][k]*mat2[k][j];
//         }
        
//     }
    
// }
// for(int i=0;i<n;i++){
//     for(int j=0;j<q;j++){
//         cout<<answermat[i][j]<<" ";
//     }
//     cout<<endl;