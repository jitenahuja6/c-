#include<iostream>
using namespace std;

int alph(char);
int num(char);

int main()
{

    num('0');
    cout<<"\n\n";
    alph('a');
}


int num(char m)
{
    int l;
    cout<<"ASCII of "<<m<<" is "<<(l=m)<<"\n";
    if(m=='9')
         return (0);
    else
    {
        m++;
        num(m);
    }
}

int alph(char n)
{
    int p;
    cout<<"ASCII of "<<n<<" is "<<(p=n)<<"\n";
    if(n=='z')
         return (0);
    else
    {
        n++;
        alph(n);
    }
}




    /*for(j=1;j<=26;j++)
        {
            cout<<"ASCII of "<<c<<" is "<<(k=c)<<'\n';
            c++;

        }
    cout<<"\n\n";

    for(m=0;m<10;m++)
    {
        cout<<"ASCII of "<<i<<" is "<<(l=i)<<'\n';
        i++;

    }*/


 /*int alph(int a,char b)
  {
      char;
      if(temp>=10)
         return (0);
     else
     {
            cout<<"ASCII of"<<b<<" is "<<a;
            alph(++a,++b);
      }
 }*/



