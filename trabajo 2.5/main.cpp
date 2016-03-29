#include <iostream>

using namespace std;

int main()
{
    cout<<"ingrese la cantidad de numeros que palnea usar ";
    int a;
    cin>>a;
    int b;
    while (a!=0)
    {
        cin>>b;
        cout<<b*b;
        cout<<" ";
        a=a-1;
    }
}
