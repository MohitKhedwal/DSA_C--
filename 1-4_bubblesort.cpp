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
int counter=1;
// while(counter<n){
    for(int j=1;j<n;j++){ // checks number of iterations should be less than n
    for(int i=0;i<n-counter;i++){ // as if sloves  last so it should run till counter only
     if(array[i]>array[i+1]){
        int temp=array[i+1];
        array[i+1]=array[i];
        array[i]=temp;
            }
   }
    }
  
//    counter++;
// }

for(int i=0;i<n;i++){
    cout<<array[i];
}

return 0;
}
// logic
// now checks that if adjacent element is in right order if not swap
// swap until we get last element sorted 
// repeat unitl we get right array
// now to sort array with n element we take n-1 iterations 
// loop n
