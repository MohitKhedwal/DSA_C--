#include <bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]>key){
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
    return -1;
}
int main()
{
int n;
cin>>n;
int array[n];
for(int i=0;i<n;i++){
    cin>>array[i];
}
int num;
cout<<"desired num";
cin>>num;

int ans=binarysearch(array,n,num);
if(ans==-1){
    cout<<"not there";
}else{
    cout<<ans<<"there";
}
return 0;
}