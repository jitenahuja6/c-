#include<iostream>
using namespace std;

long fact(int );

int main()
{
    int n,i;
    long x;
    cout<<"ENTER n: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        x=fact(i);
        cout<<"\nFACTORIAL OF "<<i<<" is "<<x<<'\n';
    }
}

long fact(int n)
{
    if(n==0)
        return 1;
    else
        return(n*fact(n-1));
}
