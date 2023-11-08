#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c;
    printf("Zadaj prve cislo:");
    scanf("%lf", &a);
    printf("Zadaj druhe cislo:");
    scanf("%lf", &b);
    c= a+b;
    printf("Vysledok: %f", c);
    printf("\nStlac ENTER na ukoncenie :)\n");
    getch();
    return 0;

    //ahoj
}
