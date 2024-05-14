// Isyana is given the number of visitors at her local theme park on N consecutive
// days. The number of visitors on the i-th day is Vi
// . A day is record breaking if it
// satisfies both of the following conditions:
// ● The number of visitors on the day is strictly larger than the number of
// visitors on each of the previous days.
// ● Either it is the last day, or the number of visitors on the day is strictly larger
// than the number of visitors on the following day.
// Note that the very first day could be a record breaking day!
// Please help Isyana find out the number of record breaking days.

#include <bits/stdc++.h>
using namespace std;
int main()
{

int n;
cin>>n;
int arr[n];
arr[n]=-1; // now here we also hav to check n+1 so now we will set that as -1 so cond is true
for(int i=0;i<n;i++){
    cin>>arr[i];
}
// array ==1
if(n==1){
    cout<<1;
    return 0;
}

int recordbreaker=0;
int highestvalue=0;
int mx=-1;
for(int i=1;i<n;i++){
    highestvalue=arr[0];
    if(arr[i-1]>highestvalue){
        highestvalue=arr[i-1];
    }
    if(arr[i]>highestvalue && arr[i]>arr[i+1]){
        recordbreaker++;
    }
    // mx=max(mx,arr[i]);
}
cout<<"Recordbreaker="<<recordbreaker;
return 0;
}
// logic
//variables highest Record breaker, number of record breaker
// loop 1 to n 
// checks cond 1&2 then recored breaker++
// cond 1=bigger then all previous
//cond 2= bigger then next