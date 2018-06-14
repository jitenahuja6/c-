#include<iostream>
#include<cstring>
using namespace std;

int counts(char [],char []);

int main()
{
    char str[100],key[3];
    int k;

    cout<<"\nENTER STRING: ";
    cin.getline(str,100);
    cout<<"\nENTER KEY: ";
    cin>>key;
    //k=counts(str,key);
    k=strcmp(str,key);
    if(k==0)
    cout<<"\nNUMBER OF OCCURENCES= "<<k+1;
    return (0);

}

int counts(char s[],char k[])
{
    int cnt=0,i=0;
    while(s[i]!='\0')
    {
        if(s[i]==k[0] && s[i+1]==k[1])
            cnt++;
        i++;
    }
    return cnt;

}
