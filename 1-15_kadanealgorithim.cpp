// kadane algorithim find maxsum of subarray
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

int currsum=0;
int maxsum=INT32_MIN;
for(int i=0;i<n;i++){
    currsum+=arr[i];
    if(currsum<0){
        currsum=0;
    }
maxsum=max(maxsum,currsum);
}
cout<<maxsum;
return 0;
}

// logic
// make a var currsum which stores the sum of subarray till that given index 
// if encounters negative value which makes the currsum neagtive so currsum==0