#include <iostream>

using namespace std;
//eje n 4
int main()
{
    int exp,n,cont;
    int var;
    int c;
    exp=0;
    cout<<"ingrese el numero n\n";
    cin>>n;
    cont=n;
    while (n!=0)
    {
        var=n*n;
        exp=exp+var;

        n=n-1;

    }
    cout<<exp;
}
