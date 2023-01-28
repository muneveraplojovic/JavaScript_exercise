#include <stdio.h>

int max(int a, int b){
    if(a==b) return 0;
    else if(a>b) return a;
    else return b;
}

int main()
{
    int a,b,c,d,najveci;
    printf("Unesite 4 broja: \n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    najveci = max(max(a,b), max(c,d));
    if(najveci==0) printf("Brojevi su isti.\n");
    else printf("\nNajveci je: %d\n", najveci);


    return 0;
}
