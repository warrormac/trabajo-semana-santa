#include <stdio.h>

//este es el eje 2
int main()
{
printf("Ingrese su texto\n");
int c;
int tab= 0;
int esp = 0;
int sdl = 0;

printf("\nEOF para ver el resultado \n ");

while( (c = getchar()) != EOF )
{
    if (' ' == c)
        esp+=1;
    if ('\t' == c)
        tab+=1;
    if ('\n' == c)
        sdl+=1;
}

printf("Espacios=       %d\n" , esp);
printf("Tabuladores=     %d\n", tab);
printf("Saltos de linea= %d\n", sdl);

}
