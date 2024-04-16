#include<iostream>
using namespace std;
int main ()
{   //integer 14;
    int a,b,c,d;
    cout<<" a = ";
    cin>>a;
    b=(a%10)*100;
    c=(a/100)*10;
    d=a/10%10;
    cout<<" natija "<<b+c+d;
}
