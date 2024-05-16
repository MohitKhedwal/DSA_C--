#include <bits/stdc++.h>
using namespace std;
int main()
{
// for upper case
string str="qabcdefghijklmnopqrstuvwxyz";
// cout<<'a'-'A';
for(int i=0;i<str.length();i++){
   if(str[i]>='a' || str[i]<='z'){
    str[i]-=32;
    cout<<str[i];
   }
}
cout<<endl;

// for lower case
string str2="QWERTYUIOPLMNBVCXZASDFGHJK";
for(int i=0;i<str.length();i++){
   if(str[i]>='A' || str[i]<='Z'){
    str[i]+=32;
    cout<<str[i];
   }
}
cout<<endl;

transform(str.begin(),str.end(),str.begin(),::toupper);
// it converts lower case to upper case and vice versa takes(start iterator,end iterator,start index,::case)
cout<<str<<endl;
transform(str2.begin(),str2.end(),str2.begin(),::tolower);
cout<<str2;

return 0;
}
//logic 
// fo uppercase add 32
// for lowercase sub 32