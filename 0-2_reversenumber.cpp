// reverse a number 1234 to 4321

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    int rem=0,finalnum=0;

    while(n>0){
        rem=n%10;
        finalnum=finalnum*10+rem;
        n=n/10;

    }
    cout<<finalnum;

return 0;
}
// logic
// take input store it
// to take last digit of number  make variable rem and to store final number=num
// run loop until n>0;
// now multiply number with then as places inceases by *10 so 4 becomes 40
//  now number showed to divide by 10 to remove the number already used;
