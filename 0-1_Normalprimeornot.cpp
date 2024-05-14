// Find a number is prime or Not]

#include <iostream>
#include<cmath>
using namespace std;
int main()
{
int n;
cout<<"Enter the Number";
cin>>n;
bool flag =true;
for(int i=2;i<=sqrt(n);i++){
    if(n%i==0){
        // cout<<n<<" is not Prime Number ";
        flag=false;
        break;
    }
}
if(flag){
    cout<<n<<" is prime number";
}else{
    cout<<n<<"is not prime number";
}
return 0;
}
// logic
// prime no =no only divisible by 1 and itself
// so loop checks if number is divisible from 2 to before square root of number if divisible it is not prime if not it is prime because square root sedivisible nhi hai toh usse kya divisible hoga
//so how we know that we came out of loop write or break 
// so we use bool is loop runs full=prime else not prime