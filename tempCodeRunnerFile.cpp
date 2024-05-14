// Find whether there exist 2 numbers that sum to K.
// The Array should be sorted for two pointer approach.
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

// using 2 pointer
int s=0;
int e=1;
int currsum=0;
while(e<n){
    currsum=arr[s]+arr[e];
    if(currsum==sum){
        cout<<"YES"<<"S="<<s<<"E="<<e<<arr[s]+arr[e];
        return 0;
    }
    e++;
    if(currsum>sum){
        s++;
    }
}
cout<<"NO";
return 0;
}