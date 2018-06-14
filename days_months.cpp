#include<iostream>
using namespace std;

void days(int,int[]);
void months(int,char [12][10]);


struct month{
    char months[12];
    int days;

};

int main()
{
    int i,day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    char month[12][10]={"JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};


    struct month m[12]={{"JAN",31},{"FEB",28},{"MAR",31},{"APR",30},{"MAY",31},{"JUN",30},{"JUL",31},{"AUG",31},{"SEP",30},{"OCT",31},{"NOV",30},{"DEC",31}};

    cout<<"MONTHS"<<'\t'<<"DAYS"<<'\n';
    for(i=0;i<12;i++)
        cout<<m[i].months<<'\t'<<m[i].days<<'\n';

    cout<<"\n\n";
    cout<<"MONTHS"<<'\t'<<"DAYS"<<'\n';
     for(i=0;i<12;i++)
      {
          months(i,month);
          days(i,day);
    }

}

 void days(int a,int day[])
  {
      cout<<day[a]<<'\n';
  }

  void months(int b,char month[12][10])
  {
      cout<<month[b]<<'\t';
  }

