#include <iostream>
using namespace std;
int main()
{
    int i, n=0, sum=0;     
    cout<<"enter a number : "<< n <<endl;
    cin>> n;
    i=1;
    while (i<=n)
    {
        sum+=i; 
        i++;
    }
    cout<<"sum of "<<n<<" natural numbers is = "<<sum;
    return 0;
}