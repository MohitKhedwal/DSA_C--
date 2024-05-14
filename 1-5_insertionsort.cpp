#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int array[n];
for( int i=0;i<n;i++){
    cin>>array[i];
}

// loop 1 
for(int i=1;i<n;i++){ // as we assume 1st element to be sorted if runs from 1 to n
int  cur=array[i]; // store the current value  to check if it is right place
int j=i-1; // used in case we have to shift all the element to right by 1 to place a new element
while(j>=0 && cur<array[j]){ // now this looks if element is at right place if yes dont run if not then run and shifts element
array[j+1]=array[j];
array[j]=cur;
j--;
}

}
for (int i=0;i<n;i++){
    cout<<array[i];
}
return 0;
}