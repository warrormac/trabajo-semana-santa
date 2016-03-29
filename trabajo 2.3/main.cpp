#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
   int prm;
   int seg;
   int trc;
   cin>> prm;
   cin>> seg;
   cin>> trc;
   if (prm>seg)
   {
       if(prm>trc)
       {
           cout<<prm;
           cout<<" , ";
        if (seg>trc)
        {
            cout<<seg;
            cout<<" , ";
            cout<<trc;
            }
        if (seg<trc)
        {
            cout<<trc;
            cout<<" , ";
            cout<<seg;
            }
        }

    if(prm<trc)
    {
        cout<<trc;
        cout<<" , ";
        cout<<prm;
        cout<<" , ";
        cout<<seg;
    }
   }
    if (seg>prm)
        {
       if(seg>trc)
       {
           cout<<seg;
           cout<<" , ";
        if (prm>trc)
        {
            cout<<prm;
            cout<<" , ";
            cout<<trc;
        if(prm<trc)
        {
            cout<<trc;
            cout<<" , ";
            cout<<prm;
        }
        }
    }
    if (seg<trc)
    {
        cout<<trc;
        cout<<" , ";
        cout<<seg;
        cout<<" , ";
        cout<<prm;
    }
    }
   return 0;
}

