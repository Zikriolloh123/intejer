#include<iostream>
using namespace std;
int main ()
{   //integer 12;
    int a,b,c,d;
    cout<<" a = ";
    cin>>a;
    b=(a%10)*100;
    c=(a/10%10)*10;
    d=a/100;
    cout<<" chappai adad "<<b+c+d;
}
