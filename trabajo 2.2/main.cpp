#include <iostream>

using namespace std;

int main()
{
    int x;
    int a=0;
    int c=x;
    int r;
    r=x-1;
    int b=0;
    while (c!=0)
    {
         if (x==0)
            cout<<"0";
        if (x==1)
            cout<<"1";
        a=x-r;
        b=b+a;
        c=c-1;
        r=r-1;
        x=x-1;

    }
    cout<<b;
}


