// Given an array a[] of size n. For every i from 0 to n-1 output max(a[0], a[1],..., a[i]).

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

cout<< "till index you want to check";
int index;
cin>>index;
int maxelement=INT32_MIN;
for(int i=0;i<=index;i++){ // itrate the array
if(maxelement<arr[i]){
    maxelement=arr[i];

}   
cout<<maxelement<<endl; 
}
cout<<"max ="<<maxelement;
return 0;
}