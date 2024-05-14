// to check if number is armstrong is not  as 153= 1cube 1 +5cube 125 + 3cube 27
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
// int n;
// cin>>n;
// int sum=0;
// int originaln=n;
// while(n>0){
// int lastdigit= n%10;
// sum+= pow(lastdigit,3);
// n=n/10;
// }
// if(sum==originaln){
// cout<<"Armstrong number"<<endl;
// }
// else{
// cout<<"not armstrong"<<endl;
// }

    
    int n;
    cout << "enter number";
    cin >> n;
    int realnum = n;

    int finalnum = 0;
    while (n > 0)
    {
        int r = n % 10; // taking unit digit
        
        finalnum += pow(r, 3); // adding it to
        n = n / 10;
    }
    if (finalnum == realnum)
    {
        cout << realnum <<finalnum<< " armstrong";
    }
    else
    {
        cout << realnum << " not armstrong";
    }
   

    return 0;
}
// logic
// take number as input
// take the unit digits of the number  cube it add to the final number if same then armstrong
// to take unit didgit modulus of number by 10 and to then remove that unit didgit divide by 10