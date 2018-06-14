#include<iostream>
#include<cstring>
using namespace std;

int counts(char *[],char *[]);

int main()
{
    char str[100],key[3];
    int k;

    cout<<"\nENTER STRING: ";
    cin.getline(str,100);
    cout<<"\nENTER KEY: ";
    cin>>key;
    k=counts(&str,&key);
    cout<<"\nNUMBER OF OCCURENCES= "<<k;
    return (0);

}

int counts(char *s[],char *k[])
{
    int cnt=0,x=strlen(s),y=strlen(k),i,j,z,a;
    char target[10];
    char temp[10];
    while(s!='\0')
    {
        while(k!='\0')
        {
            if(*k==*s)
            {
                temp=k;
                *k++;
            }
            else
                break;

        }
        a=strcmp(temp,k);
        if(a==0)
        cnt++;
        *s++;
    }

    return cnt;

}
