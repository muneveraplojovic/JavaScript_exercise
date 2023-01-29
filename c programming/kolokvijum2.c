// #include <stdio.h>

// int max(int a, int b){
//     if(a==b) return 0;
//     else if(a>b) return a;
//     else return b;
// }

// int main()
// {
//     int a,b,c,d,najveci;
//     printf("Unesite 4 broja: \n");
//     scanf("%d %d %d %d", &a, &b, &c, &d);
//     najveci = max(max(a,b), max(c,d));
//     if(najveci==0) printf("Brojevi su isti.\n");
//     else printf("\nNajveci je: %d\n", najveci);


//     return 0;
// }


//#include <stdio.h>


int ZbirKvadrata(int a, int b){
    int i, suma=0;
    for(i=a;i<=b;i++){
        suma+=i*i;
        
    return suma;    
    }
}

int ZbirKvadrataParnih(int a, int b){
    int i, suma = 0;
    for(i=a;i<=b;i++){
        if(i%2==0){
            suma+=i*i;
        }
    return suma;
    }
}

int ZbirKvadrataNeparnih(int a, int b){
    int i, suma = 0;
    for(i=a;i<=b;i++){
        if(i%2==1){
            suma+=i*i;
        }
    return suma;
    }
}

int main(){
    int a,b;
     printf("Donja granica: ");
    scanf("%d", &a);
    printf("Gornja granica: ");
    scanf("%d", &b);
    printf("\nZbirKvadrata: %d", ZbirKvadrata(a,b));
    printf("\nZbirKvadrataParnih: %d", ZbirKvadrataParnih(a,b));
    printf("\nZbirKvadrataNeparnih: %d", ZbirKvadrataNeparnih(a,b));
    return 0;
}