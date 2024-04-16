#include<iostream>
using namespace std;
int main ()
{   //integer 16;
    int a,b,c,d;
    cout<<" a = ";
    cin>>a;
    b=(a/100)*100;
    c=(a%10)*10;
    d=a/10%10;
    cout<<" natija "<<b+c+d;
}
