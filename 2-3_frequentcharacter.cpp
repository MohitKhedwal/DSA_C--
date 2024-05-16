// find most frequent character in string
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s="aaaaaaaaabbbbccccddddeeeffff";
    int freq[26];

    // initializing with zero
    for(int i=0;i<26;i++){
        freq[i]=0;
    }

    for(int i=0;i<s.size();i++){
        freq[s[i]-'a']++;
    }
    char ans='a';
    int maxfreq=0;
    for(int i=0;i<26;i++){
        if(freq[i]>maxfreq){
            maxfreq=freq[i];
            ans=i+'a';
        }
    }

cout<<ans<<maxfreq;

return 0;
}