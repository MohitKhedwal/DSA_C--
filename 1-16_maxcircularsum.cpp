// find maxmimum subarray sum
#include <bits/stdc++.h>
using namespace std;\
int kadane(int arr[],int n){
    int maxsum=INT16_MIN;
    int currsum=0;
    for(int i=0;i<n;i++){
          currsum+=arr[i];
          if(currsum<0){
            currsum=0;
          }
    maxsum=max(currsum,maxsum);
    }
    return maxsum;
}
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
// now there are two cases 1st where we have to connect 1st and last element 2nd not want to connec
int wrapsum=0;
int nonwrapsum=0; 
nonwrapsum=kadane(arr,n);
cout<<nonwrapsum<<"Non wrap";

// now for nonwrap
// maxsum=sum of given array-sum of non contributing elements
// sum off non contributing= revrse sign of all elements and finds sum apply kadane
int totalsum=0;
int noncontributingsum=0;
for(int i=0;i<n;i++){
    totalsum+=arr[i];
    arr[i]=-arr[i];
}
noncontributingsum=kadane(arr,n); 
wrapsum=totalsum+noncontributingsum;// now here wrap sum=totalsum--noncontributind as kadne of non contributing element is of negative sign
cout<<wrapsum<<"Wrap sum"<<endl;
cout<<"maxsum"<<max(wrapsum,nonwrapsum);
return 0;
}