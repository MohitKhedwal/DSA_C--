#include <bits/stdc++.h>
using namespace std;
int power(int n,int p){
    if(p==0){
        return 1;
    }
    int prevnum=power(n,p-1);
    return n*prevnum;
}
int main()
{
int n,p;
cin>>n>>p;
int ans=power(n,p);
cout<<ans;
return 0;
}