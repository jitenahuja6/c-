#include<iostream>
#include<cstdlib>
using namespace std;

int calculate(int,char,int);

int main(int argc,char *argv[])
{
   int c=atoi(argv[1]),d=atoi(argv[3]),r;
   char o=argv[2][0];
   r=calculate(c,o,d);
   cout<<"RESULT OF "<<c<<" "<<o<<" "<<d<<" = "<<r<<'\n';
   return (0);

}

int calculate(int a,char op,int b)
{
    int res;
    switch(op)
    {
        case '+':   return (a+b);


        case '-':   return (a-b);


        case 'x':   res=(a*b);
                    return res;


        case '/':   return (a/b);

        default:    cout<<"\nWRONG CHOICE!\n";
                    return (-9999);
    }

}
