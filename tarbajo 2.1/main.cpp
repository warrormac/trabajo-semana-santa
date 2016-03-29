#include <iostream>

using namespace std;

int main()
{
    int x;
    int a=0;
    int c=0;
    cin>>x;
    cout<<"ingrese la potencia   ";
    int n;
    cin>>n;
    n=n-1;
    c=x;
    while (n!=0)
    {
        a=c*x;
        c=a;
        n=n-1;

    }
    cout<<a;
}
