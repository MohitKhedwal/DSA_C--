#include <bits/stdc++.h>
using namespace std;

int linearsearch(int arr[],int s,int key){
    for(int i=0;i<s;i++){
        if(arr[i]==key){
            // cout<<i;
            return i;
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
cout<<"desired Num";
cin>>num;
int ans=linearsearch(array,n,num);
if(ans==-1){
    cout<<"not there";
}else{
   
     cout<<"there"<<ans;
}

return 0;
}