#include <bits/stdc++.h>
using namespace std;
int main()
{
// form greaster number from numeric stream;
string s="1234567890";
sort(s.begin(),s.end(),greater<int>());
cout<<s<<endl;

return 0;
}