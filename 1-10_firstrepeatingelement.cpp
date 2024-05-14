// Given an array arr[] of size N. The task is to find the first repeating element in an array of integers, i.e., an element that occurs more than once and whose index of first occurrence is smallest

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
const int N=1e6+2;
int indexarr[N];
int miniindex=INT32_MAX;
for(int i=0;i<N;i++){
    indexarr[i]=-1;
}


for(int i=0;i<n;i++){ // for travelling in array
// now assigning value to index array
if(indexarr[arr[i]]!=-1){// checking if the value at indexarr is not equal -1 if not then assiging it miniindex as it has previously occured
miniindex=min(miniindex,indexarr[arr[i]]);
}else{ // agar previously occur nhi hua haoi toh indexarray ke index pe value assign kar de ge
indexarr[arr[i]]=i;
}

}
if(miniindex==INT32_MAX){
    cout<<-1;
}else{
    cout<<miniindex;
}

return 0;
}
// logic
// dusri array bano let idx jiske index ke value equal to arr[index] of actual array
// and actual array ki index ki value idx[index] pe store karna