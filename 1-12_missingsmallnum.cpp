// Given an unsorted integer array nums. Return the smallest positive integer that is not present in nums.
// You must implement an algorithm that runs in O(n) time and uses O(1) auxiliary space.
// Input: nums = [1,2,0]
// Output: 3
// Explanation: The numbers in the range [1,2] are all in the array.
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
int N=1e6+1;
int idxarr[N]; // index array
for(int i=0;i<N;i++){
    idxarr[i]=0;
}

for(int i=0;i<n;i++){ // loop to iterate the array
if(arr[i]>=0){
    if(idxarr[arr[i]]==0){ // this is the cond which sees the element present in given arr and uses them as index in indexarray
    idxarr[arr[i]]=1;
}
}
}
int ans=-1;
for(int i=0;i<N;i++){
    if(idxarr[i]==0){
        ans=i;
        cout<<"smallest missing num ="<<ans<<endl;
 break;
    }
}
cout<<ans;
return 0;
}
