#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int liczba, odp, ok;

int main()
{
    int t = 10;
    srand(time(NULL));
    for(int i=0;i<t;i++)
    {
       int a=rand()%90+10;
       int b=rand()%90+10;
       cout<<a<<" * "<<b<<" = ";
       cin>>odp;
       if(odp==a*b)
       {
           cout<<"Dobrze!"<<endl;
           ok++;
       }

       else cout<<"Zle!"<<endl<<"Odp: "<<a*b<<endl;
    }
    cout<<"Zrobiles "<<ok/10.0*100<<" procent dzialan poprawnie"<<endl;

    return 0;
}
