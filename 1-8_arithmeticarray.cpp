// An arithmetic array is an array that contains at least two integers and the
// differences between consecutive integers are equal. For example, [9, 10], [3, 3, 3],
// and [9, 7, 5, 3] are arithmetic arrays, while [1, 3, 3, 7], [2, 1, 2], and [1, 2, 4] are
// not arithmetic arrays.
// Sarasvati has an array of N non-negative integers. The i-th integer of the array is
// Ai
// . She wants to choose a contiguous arithmetic subarray from her array that has
// the maximum length. Please help her to determine the length of the longest
// contiguous arithmetic subarray.

#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n];
for (int i=0;i<n;i++){
    cin>>arr[i];
}

int maxlength=2;// 2 because every size of 2 subarray is arthemetic subarray
int diff=arr[1]-arr[0]; // taking first diff as assumption
int curlength=2;// cureent length


for(int j=2;j<n;j++){ // we will start from 2 as 0,1 and we have already taken in diff
if(diff==arr[j]-arr[j-1]){
    curlength++;
}else{
 curlength=2;
 diff=arr[j]-arr[j-1];
}
maxlength=max(maxlength,curlength);
   
}
cout<<maxlength<<endl;
return 0;
}