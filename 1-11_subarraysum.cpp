// Given an array arr[] of non-negative integers and an integer sum, find a subarray that adds to a given sum.
// Input: arr[] = {1, 4, 20, 3, 10, 5}, sum = 33
// Output: Sum found between indexes 2 and 4

#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,sum;
cin>>n>>sum;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int s=0;// 1st pointer
int e=0;// 2nd pointer
int currsum=0;
int finalS=-1;
int finalE=-1;

// cond 1 checking sum till  s to e ===sum if yes returing the answer
while(e<n && currsum+arr[e]<=sum){
    currsum+=arr[e];
    e++;
}
if(currsum==sum){ // if it stasfy the cond then return answer
    cout<<s<<e;
    return 0;
}
// cond 2 if currsum>s and we have increment the s
currsum=0;
while(e<n){ 
currsum+=arr[e];
while(currsum>sum){
currsum-=arr[s];
s++;
}
if(currsum==sum){
    finalS=s;
    finalE=e;
    break;
}
e++;
}
cout<<"Start="<<finalS<<" End="<<finalE;
return 0;
}