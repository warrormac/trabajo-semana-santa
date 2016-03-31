#include <stdio.h>

int main()
{
    float f,c;
    int l,u,a;

    l=0;
    u=300;
    a=20;

    f=u;
    while (f>=0)
    {
        c=(5.0/9)*(f-32.0);
        printf("%3.0f %6.1\n",f,c);
        f=f-a;
    }
}
