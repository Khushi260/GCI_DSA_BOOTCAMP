#include <iostream>
using namespace std;
int main()
{
    int i, n=0, sum=0;        
    cout<<"enter a number : "<< n <<endl;
    cin>> n;
    i=0;
    while (i<=n)
    {
        sum+=i; 
        i=i+2;
    }
    cout<<"sum of "<<n<<" even numbers is = "<<sum;
    return 0;
}