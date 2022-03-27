#include<iostream>
using namespace std;
int main ()
{
    float h, a, p;
    char ans;
     cout<<"enter the no. of classes held : ";
     cin>> h;
     cout<<"enter the no. of classes attended : ";
     cin>> a;
     p=(a*100)/h;
     cout<<"percentage of class attended : "<<(a*100)/h<<endl;
     if (p<75)
    {
        cout<<"your attendance is less. Do you have a medical cause ?(Y/N) : ";
        cin>> ans;
        if (ans=='N' || ans=='n')
       cout<<"you are not allowed to sit in exam";
        else if (ans=='Y' || ans=='y')
       cout<<"you are allowed to sit in exam.";
        else
       cout<<"invalid input";
    }
     else
       cout<<"you are allowed to sit in the exam";
   return 0;
}
