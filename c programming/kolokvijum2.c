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


// int ZbirKvadrata(int a, int b){
//     int i, suma=0;
//     for(i=a;i<=b;i++){
//         suma+=i*i;
        
//     return suma;    
//     }
// }

// int ZbirKvadrataParnih(int a, int b){
//     int i, suma = 0;
//     for(i=a;i<=b;i++){
//         if(i%2==0){
//             suma+=i*i;
//         }
//     return suma;
//     }
// }

// int ZbirKvadrataNeparnih(int a, int b){
//     int i, suma = 0;
//     for(i=a;i<=b;i++){
//         if(i%2==1){
//             suma+=i*i;
//         }
//     return suma;
//     }
// }

// int main(){
//     int a,b;
//      printf("Donja granica: ");
//     scanf("%d", &a);
//     printf("Gornja granica: ");
//     scanf("%d", &b);
//     printf("\nZbirKvadrata: %d", ZbirKvadrata(a,b));
//     printf("\nZbirKvadrataParnih: %d", ZbirKvadrataParnih(a,b));
//     printf("\nZbirKvadrataNeparnih: %d", ZbirKvadrataNeparnih(a,b));
//     return 0;
// }


// #include <stdio.h>
// #include <math.h>

// double Stranica(double x1, double x2, double y1, double y2){
//     return(sqrt(pow(x1-x2, 2) + pow(y1-y2,2 )));
// }


//  main(){
//     double xa, xb, xc,ya,yb,yc,a,b,c,s,p;
    
//     printf("xa, ya koordinate: \n"); 
//     scanf("%lf%lf", &xa,&ya);
    
//     printf("xb, yb koordinate: \n");
//     scanf("%lf%lf", &xb,&yb);
    
//     printf("xc, yc koordinate: \n");
//     scanf("%lf%lf", &xc,&yc);
    
//     a=Stranica(xb,xc,yb,yc);
//     b=Stranica(xc,xa,yc,ya);
//     c=Stranica(xa,xb,ya,yb);
//     s=(a+b+c)/2;
//     p=sqrt(s*(s-a)*(s-b)*(s-c));
//     printf("\nPovrsina trougla iznosi: %.2f\n", p);
//     return 0;
// }

///////////////


/******************************************************************************

Learning the theory of the Programming language C...

*******************************************************************************/
// #include <stdio.h>

// int main()
// {
//     int myNumbers[] = {1,2,3,4};
//     myNumbers[1] = 666;
//     int i;
//     for(i=0;i<4;i++) printf("%d\n", myNumbers[i]);
//     printf("%d", myNumbers[1]);
//     return 0;
// }

//matrix

// #include <stdio.h>

// int main() {
//   int matrix[3][3] = { {1, 4, 2}, {3, 6, 8}, {8, 9, 4} };

//   int i, j;
//   for (i = 0; i < 3; i++) {
//     for (j = 0; j < 3; j++) {
//       printf("%d\n", matrix[i][j]);
//     }
//   }
  
//   printf("\n%d", matrix[2][1]);
//   return 0;
// }



//string - char

// #include <stdio.h>
// #include <string.h>

// main(){
//     int i;
//     char myName[]= "Munevera";
    
//     printf("Moje ime je: %s\n", myName);
//     printf("------------\n");
    
//     for(i=0; i<8; i++) 
//         printf("%c\n", myName[i]);
//     printf("\n-----------------\n");
    
//     char alfabet[] = "ABVGDEZIJKLMNOPRSTCUFH";
//     printf("%d", strlen(alfabet));
    
//     printf("\n-------------------\n");
    
//     ///////////////////////////////////////////
    
//     char fullName[30];

//     printf("Type your full name: \n");
//     fgets(fullName, sizeof(fullName), stdin);

//     printf("Hello %s", fullName);
//     return 0;
// }

//FILE

//FILE *fptr;

// Open a file in writing mode
//fptr = fopen("filename.txt", "w");

// Write some text to the file
//fprintf(fptr, "Some text");

// Close the file
//fclose(fptr);

////////////////////////////////////////////////
//FILE *fptr;

// Open a file in append mode
//fptr = fopen("filename.txt", "a");

// Append some text to the file
//fprintf(fptr, "\nHi everybody!");

// Close the file
//fclose(fptr);

////////////////////////////////////////////////

//Struktureee

// #include <stdio.h>
// #include <string.h>

// struct myStructure {
//   int myNum;
//   char myLetter;
//   char myString[30]; // String
// };

// int main() {
//   struct myStructure s1;

//   // Assign a value to the string using the strcpy function
//   strcpy(s1.myString, "Some text more more");

//   // Print the value
//   printf("My string: %s", s1.myString);

//   return 0;
// }


///////////////////////////////////////

/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//#include <stdio.h>
//#include <stdlib.h>

int main()
{
    FILE *fp1, *fp2;
    int sifra, plasticna, drvo, staklo, cenaPlastike, cenaDrveta, cenaStakla;
    int brDrvenihVrata = 0;
    float cena;
    float minCena = 999999999;

    fp1 = fopen("VRATA.DAT", "r");
    fp2 = fopen("CENE.DAT", "w");

    printf("Unesite cenu kvadratnog metra plastike: ");
    scanf("%d", &cenaPlastike);
    printf("Unesite cenu kvadratnog metra drveta: ");
    scanf("%d", &cenaDrveta);
    printf("Unesite cenu kvadratnog metra stakla: ");
    scanf("%d", &cenaStakla);

    while(fscanf(fp1, "%d%d%d%d", &sifra, &plasticna, &drvo, &staklo) != EOF)
    {
        cena = plasticna * cenaPlastike + drvo * cenaDrveta + staklo * cenaStakla;
        if(drvo == 100)
        {
            brDrvenihVrata++;
        }
        if(cena < minCena)
        {
            minCena = cena;
        }
        fprintf(fp2, "%d %.2f\n", sifra, cena);
    }

    printf("Ukupan broj vrata od 100%% drveta: %d\n", brDrvenihVrata);
    printf("Cena najjeftinijih vrata: %.2f\n", minCena);

    fclose(fp1);
    fclose(fp2);
    return 0;
}

////////////////////////////////////////


// #include <stdio.h>
// #include <stdlib.h>

// int max_cars(int cene[], int n, int budzet) {
//     int i, broj_automobila = 0;
//     for (i = 0; i < n; i++) {
//         if (cene[i] <= budzet) {
//             broj_automobila++;
//             budzet -= cene[i];
//         }
//     }
//     return broj_automobila;
// }

// int main() {
//     int n, budzet, i;
//     printf("Unesite broj automobila: ");
//     scanf("%d", &n);
//     int cene[n];
//     printf("Unesite cene svih automobila: ");
//     for (i = 0; i < n; i++) {
//         scanf("%d", &cene[i]);
//     }
//     printf("Unesite budzet: ");
//     scanf("%d", &budzet);
//     int rezultat = max_cars(cene, n, budzet);
//     printf("Korisnik moze da kupi najvise %d automobila sa unetim budzetom.\n", rezultat);
//     return 0;
// }


// #include <stdio.h>

// #define MAX_SIZE 100

// void intersection(int A[], int B[], int n, int C[], int *len_C) {
//     int i, j, k = 0;

//     for (i = 0; i < n; i++) {
//         for (j = 0; j < n; j++) {
//             if (A[i] == B[j]) {
//                 int duplicate = 0;
//                 for (int l = 0; l < k; l++) {
//                     if (C[l] == A[i]) {
//                         duplicate = 1;
//                         break;
//                     }
//                 }
//                 if (!duplicate) {
//                     C[k] = A[i];
//                     k++;
//                 }
//                 break;
//             }
//         }
//     }
//     *len_C = k;
// }

// int main() {
//     int A[MAX_SIZE], B[MAX_SIZE], C[MAX_SIZE];
//     int n, len_C;

//     printf("Unesite duzinu niza: ");
//     scanf("%d", &n);

//     printf("Unesite niz A: ");
//     for (int i = 0; i < n; i++) {  
//         scanf("%d", &A[i]);
//     }

//     printf("Unesite niz B: ");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &B[i]);
//     }

//     intersection(A, B, n, C, &len_C);

//     printf("Niz preseka je: ");
//     for (int i = 0; i < len_C; i++) {
//         printf("%d ", C[i]);
//     }
//     printf("\n");

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int najvise_automobila(int *niz, int duzina, int budzet) {
//     int br_automobila = 0;
//     for (int i = 0; i < duzina; i++) {
//         if (budzet >= niz[i]) {
//             br_automobila++;
//             budzet -= niz[i];
//         } else {
//             break;
//         }
//     }
//     return br_automobila;
// }

// int main() {
//     int n, budzet;
//     int cene[100];

//     printf("Unesite broj automobila: ");
//     scanf("%d", &n);

//     printf("Unesite cene automobila: ");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &cene[i]);
//     }

//     printf("Unesite budzet: ");
//     scanf("%d", &budzet);

//     int br_automobila = najvise_automobila(cene, n, budzet);
//     printf("Moguce je kupiti najvise %d automobila.\n", br_automobila);

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// void ispisi_kombinacije(int niz[], int n, int trenutni_indeks, int zbir, int polovina)
// {
//     if (zbir > polovina)
//         return;

//     if (trenutni_indeks == n) {
//         if (zbir == polovina) {
//             printf("Uravnotezeni niz: {");
//             for (int i = 0; i < n; i++)
//                 printf("%d, ", niz[i]);
//             printf("\b\b}\n");
//         }
//         return;
//     }

//     ispisi_kombinacije(niz, n, trenutni_indeks + 1, zbir, polovina);
//     ispisi_kombinacije(niz, n, trenutni_indeks + 1, zbir + niz[trenutni_indeks], polovina);
// }

// int main(void)
// {
//     int n;
//     printf("Unesite broj elemenata niza: ");
//     scanf("%d", &n);

//     int niz[n];
//     int zbir = 0;
//     printf("Unesite elemente niza: ");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &niz[i]);
//         zbir += niz[i];
//     }

//     // if (zbir % 2 != 0) {
//     //     printf("Nije moguce pronaci uravnotezeni niz.\n");
//     //     return 1;
//     // }

//     int polovina = zbir / 2;
//     ispisi_kombinacije(niz, n, 0, 0, polovina);

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// void ispisi_kombinacije(int niz[], int n, int trenutni_indeks, int zbir_lijevo)
// {
//     int zbir_desno = 0;
//     for (int i = trenutni_indeks + 1; i < n; i++)
//         zbir_desno += niz[i];

//     if (zbir_lijevo == zbir_desno) {
//         printf("Uravnotezeni niz: {");
//         for (int i = 0; i <= trenutni_indeks; i++)
//             printf("%d, ", niz[i]);
//         printf("\b\b}\n");
//     }

//     if (trenutni_indeks >= n - 1)
//         return;

//     ispisi_kombinacije(niz, n, trenutni_indeks + 1, zbir_lijevo + niz[trenutni_indeks + 1]);
// }

// int main(void)
// {
//     int n;
//     printf("Unesite broj elemenata niza: ");
//     scanf("%d", &n);

//     int niz[n];
//     printf("Unesite elemente niza: ");
//     for (int i = 0; i < n; i++)
//         scanf("%d", &niz[i]);

//     ispisi_kombinacije(niz, n, -1, 0);

//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>

// int ravnoteza(int niz[], int n, int trenutni_indeks)
// {
//     int zbir_lijevo = 0;
//     for (int i = 0; i <= trenutni_indeks; i++)
//         zbir_lijevo += niz[i];

//     int zbir_desno = 0;
//     for (int i = trenutni_indeks + 1; i < n; i++)
//         zbir_desno += niz[i];

//     if (zbir_lijevo == zbir_desno)
//         return 1;
//     else
//         return 0;
// }

// void ispisi_kombinacije(int niz[], int n, int trenutni_indeks)
// {
//     if (trenutni_indeks >= n - 1)
//         return;

//     if (ravnoteza(niz, n, trenutni_indeks)) {
//         printf("Uravnotezeni niz: {");
//         for (int i = 0; i <= trenutni_indeks; i++)
//             printf("%d, ", niz[i]);
//         printf("\b\b}\n");
//     }

//     ispisi_kombinacije(niz, n, trenutni_indeks + 1);
// }

// int main(void)
// {
//     int n;
//     printf("Unesite broj elemenata niza: ");
//     scanf("%d", &n);

//     int *niz = malloc(n * sizeof(int));
//     if (niz == NULL) {
//         printf("Greska pri alociranju memorije.\n");
//         return 1;
//     }

//     printf("Unesite elemente niza: ");
//     for (int i = 0; i < n; i++)
//         scanf("%d", &niz[i]);

//     ispisi_kombinacije(niz, n, 0);

//     free(niz);
//     return 0;
// }

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

void remove_comments(char *str) {
    int i, j, in_comment = 0;
    int len = strlen(str);
    char *result = malloc(len + 1);

    for (i = 0, j = 0; i < len; i++) {
        if (str[i] == '/' && str[i + 1] == '*') {
            in_comment = 1;
            i++;
        } else if (str[i] == '*' && str[i + 1] == '/') {
            in_comment = 0;
            i++;
        } else if (!in_comment) {
            result[j++] = str[i];
        }
    }

    result[j] = '\0';
    strcpy(str, result);
    free(result);
}

int main(void) {
    char str[100];
    printf("Unesite string: ");
    fgets(str, 100, stdin);
    remove_comments(str);
    printf("String bez komentara: %s", str);

    return 0;
    
    
    
}


//#include <stdio.h>

int main(void) {
    int c, prev = 0;
    while ((c = getchar()) != EOF) {
        if (prev == '/' && c == '*') {
            while (c != '/' || prev != '*') {
                prev = c;
                c = getchar();
            }
        } else if (prev != '/' || c != '*') {
            putchar(prev);
        }
        prev = c;
    }

    return 0;
}


///////////////////////////////////////////////////////////////////////////////////////

//PRVA ZBRIKA

//FUNKCIJE



//9.10.

// #include <stdio.h>

long Faktorijal(int n){
    
    long i, f=1;
    for(i=1; i<=n; i++)
        f*=i;
        
    return f;
}

int main(){
    
    int n, k, c;
    
    printf("n = "); scanf("%d", &n);
    printf("k = "); scanf("%d", &k);
    
    c = Faktorijal(n)/(Faktorijal(k)*Faktorijal(n-k));
    
    printf("c = %d\n", c); 
    
    return 0;
}


//9.11

// #include <stdio.h>

long Faktorijal(int n){
    long i, f=1;
    for(i=1; i<=n; i++)
        f*=i;
        
    return f;
}

int main(){
    
    int n, s=0, i;
    
    printf("n= "); scanf("%d", &n);
    for(i=1;i<=n;i++)
        s+=Faktorijal(i);
    printf("S = %d", s);   
    
    
    
    return 0;
}


//9.12.

// #include <stdio.h>

long Faktorijal(int n){
    long i, f=1;
    for(i=1; i<=n; i++)
        f*=i;
        
    return f;
}

int main(){
    int a, b,  c;
    for(a=1;a<=9;a++)
        for(b=0;b<=9;b++)
            for(c=0;c<=9;c++){
                if((a*100+b*10+c)==(Faktorijal(a)+Faktorijal(b)+Faktorijal(c)))
                    printf("%d", a*100+b*10+c);
            }
    return 0; 
    
}


//9.21 !!! ISPITNI ZADATAK

// #include <stdio.h>
// #include <math.h>

float a, b;

float f(float x){
    return(a*x*fabs(sin(b*x)));
}

int main(){
    int n;
    float x, x1, x2, dx, S, P;
    
    printf("a = "); scanf("%f", &a);
    printf("b = "); scanf("%f", &b);
    printf("n = "); scanf("%d", &n);
    printf("pocetak = "); scanf("%f", &x1);
    printf("kraj = "); scanf("%f", &x2);
    
    dx=(x2-x1)/n;
    
    S=(f(x1)+f(x2))/2;
    
    for(x=x1+dx; x<=x2-dx; x+=dx)
        S+=f(x);
        
    P=S*dx;
    
    printf("povrsina = %.4f ", P );
    
    return 0;
    
}


//9.33 REKURZIVNA FUNKCIJA

//#include <stdio.h>


int nzd(int n, int m){
    if(n%m==0) return m;
    return nzd(m, n%m);
}

int main(){
    
    int n, m, p;
    printf("Unesite dva cela broja: "); scanf("%d %d", &n, &m);
    
    if(n<m){
        
    p=n;
    n=m;
    m=p;
    
    }
    printf("nzd za %d i %d je %d ", n,m,nzd(n,m));
    
    
    return 0;
}



//9.35 REKURZIVNA FUNKCIJA + FIBONACI

//#include <stdio.h>


int fib(int n){
    if((n==0)||(n==1))
        return 1;
    else
        return(fib(n-1)+fib(n-2));
}

int main(){
    
    int n;
    printf("n= "); scanf("%d", &n);
    printf("Fibonaci [%d] = %d", n, fib(n-1));
    
    return 0;
}

//////////////////

//NIZOVI
