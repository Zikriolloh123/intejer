#include<iostream>
using namespace std;
int main ()
{   //integer 13;
    int a,b,c,d;
    cout<<" a = ";
    cin>>a;
    c=(a/10%10)*100;
    b=(a%10)*10;
    d=a/100;
    cout<<" natija "<<b+c+d;
}
