#include<iostream>
using namespace std;

void calculate(float );

int main()
{
    float r,a;
    cout<<"ENTER RADIUS: ";
    cin>>r;
    calculate(r);


}

void calculate(float r)
{
    cout<<"\nAREA OF CIRCLE WITH RADIUS= "<<r<<" = "<<(3.14*r*r)<<'\n';

}
