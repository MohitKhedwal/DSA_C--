// Find whether there exist 2 numbers that sum to K.
// The Array should be sorted for two pointer approach.
#include <bits/stdc++.h>
using namespace std;
bool pairsum(int arr[],int n,int k){
    int low=0;
    int high=n-1;
    while(low<high){
        if(arr[low]+arr[high]==k){
            cout<<low<<" "<<high<<endl;
            return true;
        }else if(arr[low]+arr[high]>k){
            high--;
        }else{
            low++;
        }
    }
return false;
}
int main()
{
int n,sum;
cin>>n;
cout<<"Sum";
cin>>sum;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

// using 2 pointer
// int s=0;
// int e=1;
// int currsum=0;
// while(e<n && s>=0){
//     currsum=arr[s]+arr[e];
//     if(currsum==sum){
//         cout<<"YES"<<"S="<<s<<"E="<<e<<arr[s]+arr[e];
//         return 0;
//     }
    
//     if(currsum>sum){
//         s++;
//     }else{
//         e++;
//     }
// }
// cout<<"NO";

bool ans=pairsum(arr,n,sum);
cout<<ans;
return 0;
}