// Max sum of sub array
#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int max_sum=INT16_MIN;
int curr_sum=0;
for(int i=0;i<n;i++){// loop 1 iterate over the array

for(int j=i;j<n;j++){// loop 2 finds the subarray
curr_sum=0;
for(int k=i;k<=j;k++){// prints the subarray
// cout<<arr[k]<<" ";
curr_sum+=arr[k];
}
cout<<endl;
max_sum=max(curr_sum,max_sum);
}}
cout<<max_sum;
return 0;
}