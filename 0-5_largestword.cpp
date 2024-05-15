#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cout<<"n";
cin>>n;
cin.ignore();
char arr[n+1];
cin.getline(arr,n); // takes whole line as an input even if space occurs
// cin.ignore(); // used to clean buffer 

int i=0;
int currlen=0,maxlen=0;
while(1){ // always true
if(arr[i]==' ' || arr[i]=='\0'){
    
    if(currlen>maxlen){
        maxlen=currlen;
    }
    currlen=0;
    }else{
        currlen++;
    }
    if(arr[i]=='\0'){
        break;
    }
    i++;

}
cout<<maxlen;
return 0;
}
// logic
// take array as input
// use get line to  to take whole line as input
// check cond
// if space or null occur current len=0
// max currlen or maxlength