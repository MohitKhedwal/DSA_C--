#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int array[n];
for(int i=0;i<n;i++){
    cin>>array[i];
}
// first loop 
for(int i=0;i<n-1;i++){ // ye loop element place kare ga toh ye 0 to n-1 tak chalega
for(int j=i+1;j<n;j++){ // ye loop find karega values to swap
    if(array[j]<array[i]){
        int temp=array[j];
        array[j]=array[i];
        array[i]=temp;
    }

}

}
for (int i=0;i<n;i++){
    cout<<array[i];
}
return 0;
}

// logic
// take smalest element and swap it with 1st element
// repeat for all
// use 2 loop
// loop 1=> places the element from 1 st to n-1
// loop 2=> finds the element finds the number to swap