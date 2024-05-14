// Given an array a[] of size n. Output sum of each subarray of the given array.
#include <bits/stdc++.h>
using namespace std;
int main()
{

int n;
cin>>n;
int arrr[n];
for(int i=0;i<n;i++){
    cin>>arrr[i];
}
int s=0;
int h=1;
for(int i=0;i<n;i++){ //loop 1 iterate over the array
 s=0; // makes sum=0 after subarray possible from an element
for(int j=i;j<n;j++){// loop 2 makes the subarray from i to last element
 s+=arrr[j];
 cout<<"subarray "<<h++<<"="<<s<<endl;
} 


}
return 0;
}