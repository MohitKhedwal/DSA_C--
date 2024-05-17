// here we only have to check is array is sorted or not

#include <bits/stdc++.h>
using namespace std;
int check(int arr[],int n){
    if(n==1){ // base check
        return 1; 
    }
    int recurrcheck= check(arr+1,n-1);
        // cout<<arr+1<<endl;
     return (arr[0]<arr[1] && recurrcheck);
        
    
}
int main()
{
int arr[4]={1,4,3,2};
// int n=sizeof(arr)/4;
// cout<<n;
cout<<check(arr,4);
return 0;
}
// logic 
// base case => if array size is 1 then true
// check if 0th element is small then arr[1]
// rest will be done by recurrsion as it will  send the array from 1 to n then 2 to n