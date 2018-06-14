#include<iostream>
using namespace std;

void si(double,float,int);

int main()
{
    double p;
    float r;
    int t;
    cout<<"\nENTER PRINCIPAL: ";
    cin>>p;
    cout<<"\nENTER RATE: ";
    cin>>r;
    cout<<"\nENTER TIME: ";
    cin>>t;
    si(p,r,t);
}

void si(double p,float r,int t)
{
    cout<<"SI= "<<(p*r*t)/100;
}
