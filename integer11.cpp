#include<iostream>
using namespace std;
int main ()
{   //integer 11;
    int a,b,c,d;
    cout<<" a = ";
    cin>>a;
    b=a/100;
    c=a/10%10;
    d=a%10;
    cout<<" raqami avval "<<b<<endl;
    cout<<" raqami mobayn "<<c<<endl;
    cout<<" raqami oxiron "<<d<<endl;
    cout<<b<<" + "<<c<<" + "<<d<<" = "<<b+c+d<<endl;
    cout<<b<<" * "<<c<<" * "<<d<<" = "<<b*c*d<<endl;

}
