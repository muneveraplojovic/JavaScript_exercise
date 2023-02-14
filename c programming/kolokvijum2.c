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

// #include <stdio.h>

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

// matrix

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

// string - char

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

// FILE

// FILE *fptr;

// Open a file in writing mode
// fptr = fopen("filename.txt", "w");

// Write some text to the file
// fprintf(fptr, "Some text");

// Close the file
// fclose(fptr);

////////////////////////////////////////////////
// FILE *fptr;

// Open a file in append mode
// fptr = fopen("filename.txt", "a");

// Append some text to the file
// fprintf(fptr, "\nHi everybody!");

// Close the file
// fclose(fptr);

////////////////////////////////////////////////

// Struktureee

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
// #include <stdio.h>
// #include <stdlib.h>

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

    while (fscanf(fp1, "%d%d%d%d", &sifra, &plasticna, &drvo, &staklo) != EOF)
    {
        cena = plasticna * cenaPlastike + drvo * cenaDrveta + staklo * cenaStakla;
        if (drvo == 100)
        {
            brDrvenihVrata++;
        }
        if (cena < minCena)
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

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

void remove_comments(char *str)
{
    int i, j, in_comment = 0;
    int len = strlen(str);
    char *result = malloc(len + 1);

    for (i = 0, j = 0; i < len; i++)
    {
        if (str[i] == '/' && str[i + 1] == '*')
        {
            in_comment = 1;
            i++;
        }
        else if (str[i] == '*' && str[i + 1] == '/')
        {
            in_comment = 0;
            i++;
        }
        else if (!in_comment)
        {
            result[j++] = str[i];
        }
    }

    result[j] = '\0';
    strcpy(str, result);
    free(result);
}

int main(void)
{
    char str[100];
    printf("Unesite string: ");
    fgets(str, 100, stdin);
    remove_comments(str);
    printf("String bez komentara: %s", str);

    return 0;
}

// #include <stdio.h>

int main(void)
{
    int c, prev = 0;
    while ((c = getchar()) != EOF)
    {
        if (prev == '/' && c == '*')
        {
            while (c != '/' || prev != '*')
            {
                prev = c;
                c = getchar();
            }
        }
        else if (prev != '/' || c != '*')
        {
            putchar(prev);
        }
        prev = c;
    }

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////

// PRVA ZBRIKA

// FUNKCIJE

// 9.10.

// #include <stdio.h>

long Faktorijal(int n)
{

    long i, f = 1;
    for (i = 1; i <= n; i++)
        f *= i;

    return f;
}

int main()
{

    int n, k, c;

    printf("n = ");
    scanf("%d", &n);
    printf("k = ");
    scanf("%d", &k);

    c = Faktorijal(n) / (Faktorijal(k) * Faktorijal(n - k));

    printf("c = %d\n", c);

    return 0;
}

// 9.11

// #include <stdio.h>

long Faktorijal(int n)
{
    long i, f = 1;
    for (i = 1; i <= n; i++)
        f *= i;

    return f;
}

int main()
{

    int n, s = 0, i;

    printf("n= ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        s += Faktorijal(i);
    printf("S = %d", s);

    return 0;
}

// 9.12.

// #include <stdio.h>

long Faktorijal(int n)
{
    long i, f = 1;
    for (i = 1; i <= n; i++)
        f *= i;

    return f;
}

int main()
{
    int a, b, c;
    for (a = 1; a <= 9; a++)
        for (b = 0; b <= 9; b++)
            for (c = 0; c <= 9; c++)
            {
                if ((a * 100 + b * 10 + c) == (Faktorijal(a) + Faktorijal(b) + Faktorijal(c)))
                    printf("%d", a * 100 + b * 10 + c);
            }
    return 0;
}

// 9.21 !!! ISPITNI ZADATAK

// #include <stdio.h>
// #include <math.h>

float a, b;

float f(float x)
{
    return (a * x * fabs(sin(b * x)));
}

int main()
{
    int n;
    float x, x1, x2, dx, S, P;

    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("n = ");
    scanf("%d", &n);
    printf("pocetak = ");
    scanf("%f", &x1);
    printf("kraj = ");
    scanf("%f", &x2);

    dx = (x2 - x1) / n;

    S = (f(x1) + f(x2)) / 2;

    for (x = x1 + dx; x <= x2 - dx; x += dx)
        S += f(x);

    P = S * dx;

    printf("povrsina = %.4f ", P);

    return 0;
}

// 9.33 REKURZIVNA FUNKCIJA

// #include <stdio.h>

int nzd(int n, int m)
{
    if (n % m == 0)
        return m;
    return nzd(m, n % m);
}

int main()
{

    int n, m, p;
    printf("Unesite dva cela broja: ");
    scanf("%d %d", &n, &m);

    if (n < m)
    {

        p = n;
        n = m;
        m = p;
    }
    printf("nzd za %d i %d je %d ", n, m, nzd(n, m));

    return 0;
}

// 9.35 REKURZIVNA FUNKCIJA + FIBONACI

// #include <stdio.h>

int fib(int n)
{
    if ((n == 0) || (n == 1))
        return 1;
    else
        return (fib(n - 1) + fib(n - 2));
}

int main()
{

    int n;
    printf("n= ");
    scanf("%d", &n);
    printf("Fibonaci [%d] = %d", n, fib(n - 1));

    return 0;
}

//////////////////

// NIZOVI

// 10.23 OCENE STUDENATA

// #include <stdio.h>
// #define MAX 100

float Prosek(int x[], int n)
{
    int i;
    float suma = 0;
    for (i = 0; i < n; i++)
        suma += x[i];
    return (suma / n);
}

float ProsekPolozenih(int x[], int n)
{
    int i, j = 0;
    float suma = 0;
    for (i = 0; i < n; i++)
        if (x[i] > 5)
        {
            suma += x[i];
            j++;
        }
    return (suma / j);
}

int BrojPolozenih(int x[], int n)
{
    int i, broj = 0;
    for (i = 0; i < n; i++)
        if (x[i] > 5)
            broj++;
    return broj;
}

int BrojNepolozenih(int x[], int n)
{
    int i, broj = 0;
    for (i = 0; i < n; i++)
        if (x[i] == 5)
            broj++;
    return broj;
}

int BrojNadprosecnih(int x[], int y[], int n, float m)
{
    int i, j = 0;
    for (i = 0; i < n; i++)
    {
        if (x[i] > m)
        {
            y[j] = i;
            j++;
        }
    }
    return j;
}

int main()
{

    int student[MAX], ocena[MAX];
    int i, n;

    printf("Broj studenata: ");
    scanf("%d", &n);
    printf("\nOcene studenata od 5 do 10: \n");
    for (i = 0; i < n; i++)
    {
        printf("Ocena studenta %d je: ", i);
        scanf("%d", &ocena[i]);
    }
    printf("\nUkupno polozenih ispita: %d\n", BrojPolozenih(ocena, n));
    printf("Ukupno nepolozenih ispita: %d\n", BrojNepolozenih(ocena, n));
    printf("Prosek ocena na ispitu: %.2f\n", Prosek(ocena, n));
    printf("Prosek polozenih ispita: %.2f\n", ProsekPolozenih(ocena, n));
    printf("Iznad proseka: %d\n", BrojNadprosecnih(ocena, student, n, Prosek(ocena, n)));

    return 0;
}

// 10.24 NIZOVI + FIBONACI

// #include <stdio.h>
// #define MAX 100

void Fibonaci(int niz[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        if (i < 2)
            niz[i] = 1;
        else
            niz[i] = niz[i - 1] + niz[i - 2];
}

void PrikazFibonacija(int niz[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d  ", niz[i]);
    }
}

int main()
{
    int niz[MAX], n;
    printf("Broj fibonacijevih brojeva: ");
    scanf("%d", &n);
    printf("\n");
    Fibonaci(niz, n);
    PrikazFibonacija(niz, n);

    return 0;
}

////////////////////////

// MATRICE

// 11.5

// #include <stdio.h>
// #define MAX 100

int main()
{
    int n, j, mat[MAX][MAX], i, ssd = 0, sgd = 0;
    printf("n= ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            printf("[%d][%d] element matrice: ", i, j);


    printf("Uneta matrica je:");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            printf("%d ", mat[i][j])


    printf("Elementi glavne dijagonale su: ");
    for (i = 0; i < n; i++)
        printf("%d", mat[i][i]);
        sgd+=mat[i][i];
    printf("Suma glavne dijagonale: %d", sgd);


    printf("Elementi sporedne dijagonale su: ");
    for (i = 0; i < n; i++)
        printf("%d", mat[i][n-i-1]);
        ssd+=mat[i][n-i-1];
    printf("Suma sporedne dijagonale: %d", ssd);



    return 0;
}


/////////////////////////

#include <stdio.h>
// zeko jede kupus ispit
int main()
{
    int i,j,mat[100][100],m,kupus=0,br=0;
    char a;


printf("unesi m");
scanf("%d",&m);

for(i=0;i<m;i++)
for(j=0;j<m;j++){
    scanf("%d",&mat[i][j]);
}
 
for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    
i=0;
j=0;
while(a!='k'){
    a=getchar();
    
    if(a=='l'){
        if(j==0)continue;
        else{
            j++;
            br++;
        if(mat[i][j]==1){
        kupus++;
        }
    }
    }
    if(a=='d'){
        if(j==m-1)continue;
        else{
        j++;
        br++;
        if(mat[i][j]==1){
        kupus++;
        }
    }
    }
    if(a=='g'){
        if(i==0)continue;
        else{
        i--;
        br++;
        if(mat[i][j]==1){
        kupus++;
        }    
    }
    }
    if(a=='n'){
        if(i==m-1)continue;
        else{
        i++;
        br++;
        if(mat[i][j]==1){
        kupus++;
        }
    }
    }
    

}
printf("\nbroj kupusa je %d i broj skokova je %d",kupus,br);
return 0;
}


///////////////////////////////////////////////////

#include <stdio.h>
#define MAX 100
typedef struct studenti
{
 char ime[15];
 char prezime[20];
 int ocena;
} STUDENTI;
main() 
{
 STUDENTI Student[MAX], pom;
 int n, i, j;
 printf("\n Unesite broj studenata: ");
 scanf("%d", &n);
 for(i=0; i<n; i++)
 {
 printf("\n Unesite podatke studenta br.%d:\n", i+1);
 printf(" Ime: ");
 scanf("%s", &Student[i].ime);
 printf(" Prezime: ");
 scanf("%s", &Student[i].prezime);
 while(getchar()!='\n');
 printf(" Ocena: ");
 scanf("%d", &Student[i].ocena);
 }
 for(i=0; i<n-1; i++)
 for(j=i; j<n; j++)
 if(Student[i].ocena < Student[j].ocena)
 {
 pom=Student[i];
 Student[i]=Student[j];
 Student[j]=pom;
 }
 printf("\n Sortiran niz:\n");
 for(i=0; i<n; i++)
 printf(" %s %s\t%d\n",
 Student[i].ime, Student[i].prezime, Student[i].ocena);
 getche();
 return 0;
}


/////////////////////////////////////////////////////////////

#include <stdio.h>
#define MAX 100
typedef struct artikli
{
 int barKod;
 char ime[30];
 float cena;
} ARTIKLI;
main()
{
 ARTIKLI artikal[MAX];
 int i=0;
 FILE *dato;
 if((dato=fopen("proizvodi.txt", "r"))==NULL)
 {
 printf("\n Greska pri otvaranju datoteke!");
 exit(1);
 }
 printf("\n Proizvodi sa cenom nizom od 500 din:\n");
 while(1)
 {
 fscanf(dato, "%d%s%f",
 &artikal[i].barKod, &artikal[i].ime, &artikal[i].cena);
 if(feof(dato)) break;
 if(artikal[i].cena<500)
 {
 printf ("%6d %-15s %4.2f\n",
 artikal[i].barKod, artikal[i].ime, artikal[i].cena);
 i++;
 }
 }
 fclose(dato);
 getche();
 return 0;
}

/////////////////////////////////////////////////////

#include <stdio.h>
#define MAX 100
typedef struct artikli
{
 int barKod;
 char ime[30];
 float cena;
 float PDV;
} ARTIKLI;
main()
{
 ARTIKLI artikal[MAX];
 int i=0;
 FILE *dato1, *dato2;
 if((dato1=fopen("proizvodiPDV.txt", "r"))==NULL)
 {
 printf("\n Greska pri otvaranju datoteke!");
 exit(1);
 }
 if((dato2=fopen("proizvodiPDVNovo.txt", "w"))==NULL)
 {
 printf("\n Greska pri otvaranju datoteke!");
 exit(1);
 }
 while(1)
 {
 fscanf(dato1, "%d %s %f %f", &artikal[i].barKod, &artikal[i].ime,
 &artikal[i].cena, &artikal[i].PDV);
 if(feof(dato1)) break;
 artikal[i].cena*=(1+artikal[i].PDV);
 fprintf(dato2, "%5d %-15s %4.2f\n",
 artikal[i].barKod, artikal[i].ime, artikal[i].cena);
 i++;
 }
 fclose(dato1); fclose(dato2);
 printf("\n Datoteka je formirana!\n");
 getche(); return 0;
}

////////////////////////////////////////////////////


typedef struct ucenci
{
 char ime[15];
 char prezime[15];
 char adresa[15];
 int razred;
 int odeljenje;
} UCENICI;
main()
{
 UCENICI ucenik[MAX];
 int i, n, x;
 FILE *dato; 
if((dato=fopen("ucenik.txt","w"))==NULL)
 {
 printf("\n Greska pri otvaranju datoteke!");
 exit(1);
 }
 printf("\n Broj ucenika: ");
 scanf("%d",&n);
 for(i=0; i<n; i++)
 {
 printf("\n -UCENIK %d-\n",i+1);
 printf(" Ime: ");
 scanf("%s", &ucenik[i].ime);
 printf(" Prezime: ");
 while(getchar()!='\n');
 scanf("%s", &ucenik[i].prezime);
 printf(" Adresa: ");
 scanf("%s", &ucenik[i].adresa);
 printf(" Razred: ");
 scanf("%d",&ucenik[i].razred);
 printf(" Odeljenje: ");
 scanf("%d",&ucenik[i].odeljenje);
 fprintf(dato,"%-15s%-15s%-15s%2d%2d\n",ucenik[i].ime,
 ucenik[i].prezime, ucenik[i].adresa,
 ucenik[i].razred, ucenik[i].odeljenje);
 }
 fclose(dato);
 printf("\n\n Datoteka je kreirana.\n");
 printf("\n Rezred za pretragu: ");
 scanf("%d",&x);
 if((dato=fopen("ucenik.txt","r"))==NULL)
 {
 printf("\n Greska pri otvaranju datoteke!");
 exit(1);
 }
 printf("\n -Ucenici %d-og razreda-\n", x);
 for(i=0; i<n; i++)
 {
 fscanf(dato, "%s%s%s%d%d",&ucenik[i].ime, &ucenik[i].prezime,
 &ucenik[i].adresa,&ucenik[i].razred,&ucenik[i].odeljenje);
 if(ucenik[i].razred==x)
 printf(" %-10s%-10s%-15s%2d%2d\n",ucenik[i].ime, ucenik[i].prezime,
 ucenik[i].adresa, ucenik[i].razred, ucenik[i].odeljenje);
 }
 fclose(dato);
 getche();
 return 0;
}


/////////////////////////////////////////////////////////

#include <stdio.h>
typedef struct temperature
{
 int datum;
 int m7;
 int m13;
 int m19;
} TEMPERATURE;
main()
{
 TEMPERATURE temp[10];
 int i, j, uk7=0, uk13=0, uk19=0, pomd;
 float pr7, pr13, pr19, prdnevna[10], pom;
 FILE *ulaz, *izlaz;
 char ime1[20], ime2[20];
 printf("\n Ime datoteke sa podacima: ");
 scanf("%s",&ime1);
 printf(" Ime datoteke za kreiranje: ");
 scanf("%s",&ime2);
 if((ulaz=fopen(ime1, "r"))== NULL)
 {
 printf("Greska prilikom otvaranja datoteke!\n");
 return 1;
 }
if((izlaz=fopen(ime2, "w"))== NULL)
 {
 printf("Greska prilikom otvaranja datoteke!\n");
 return 1;
 }
 /*Citanje podataka iz datoteke*/
 /*Racunanje ukupnih temperatura u 7h, 13h i 19h i dnevne prosecne temperature*/
 for(i=0; i<10; i++)
 {
 fscanf(ulaz, "%d%d%d%d", &temp[i].datum, &temp[i].m7,
 &temp[i].m13, &temp[i].m19);
 uk7+=temp[i].m7;
 uk13+=temp[i].m13;
 uk19+=temp[i].m19;
 prdnevna[i]=(float)(temp[i].m7 + temp[i].m13 + temp[i].m19)/3;
 }
 /*Racunjane prosecnih temperatura u 7h, 13h i 19h*/
 pr7=(float)uk7/10;
 pr13=(float)uk13/10;
 pr19=(float)uk19/10;
 /*Sortiranje prosecnih temperatura od najvise ka najnize*/
 for(i=0; i<9; i++)
 for(j=i+1; j<10; j++)
 if(prdnevna[i] < prdnevna[j])
 {
 pom=prdnevna[i];
 pomd=temp[i].datum;
 prdnevna[i]=prdnevna[j];
 temp[i].datum=temp[j].datum;
 prdnevna[j]=pom;
 temp[j].datum=pomd;
 }
 /*Upis podataka u novokreiranu datoteku*/
 for(i=0; i<10; i++)
 fprintf(izlaz, " %02d %.2f\n", temp[i].datum, prdnevna[i]);
 fclose(ulaz);
 fclose(izlaz);
 printf("\n Datoteka je kreirana!\n\n");
 /*Ispis podataka na ekran*/
 printf(" Najtopliji dan %02d.avgust sa temperaturom od %.2f stepeni.\n",
 temp[0].datum, prdnevna[0]);
 printf(" Najhladniji dan %02d.avgust sa temperaturom od %.2f stepeni.\n",
 temp[9].datum, prdnevna[9]);
 printf(" Prosecna temperatura u 07h: %.2f\n", pr7);
 printf(" Prosecna temperatura u 13h: %.2f\n", pr13);
 printf(" Prosecna temperatura u 19h: %.2f\n", pr19);
 getche();
 return 0;
}

/////////////////////////////////////////////////////////


 //ispit 2019 jul (presek dva niza)
    #include <stdio.h>
#define MAX 100
int main()
{
   int j,i,nadjen=0,niz1[MAX],niz2[MAX],p,n;
   printf("unesi prvi niz");
   scanf("%d",&n);
   for(i=0;i<n;i++){
       scanf("%d",&niz1[i]);
   }
    printf("unesi drugi niz");
   scanf("%d",&p);
   for(i=0;i<p;i++){
       scanf("%d",&niz2[i]);
   }
   for(i=0;i<n;i++){
       nadjen=0;
       for(j=0;j<n;j++)
       if(niz1[i]==niz2[j]){
           nadjen=1;
           break;
       }
       if(nadjen==1){
           printf("\t%d",niz1[i]);
       }
   }
   return 0;
}

//////////////////////////////////////
//april 2020

#include <stdio.h>

#define MAX 100
int funkcija(int niz[],int n,int budzet){
        float suma=0;
        int brojac=0;
        int i,j,k;
        int pom;
        
        
        for(i=0; i<n-1; i++)
 for(j=i+1; j<n; j++)
 if(niz[i] > niz[j])
 {
 pom=niz[i];
 niz[i]=niz[j];
 niz[j]=pom;
 } 
 for(i=0;i<n;i++){
     suma+=niz[i];
     if(suma>budzet){
  break;  }
     brojac++;
     
 
 }
        return brojac;
    }
    int main(){
        int n,i,niz[MAX],budzet;
        printf("unesi broj cena:");
        scanf("%d",&n);
       printf("Unesi niz");
       for(i=0;i<n;i++){
           scanf("%d",&niz[i]);
       }
       printf("unesi budzet");
       scanf("%d",&budzet);
       printf("najveci broj automobila za taj budzet je %d",funkcija(niz,n,budzet));
       return 0;
    }

    /////////////////////////////////

//drugi najveci br

    #include <stdio.h>

#define MAX 100
int funkcija(int niz[],int n,int budzet){
        float suma=0;
        int brojac=0;
        int i,j,k;
        int pom;
        
        
        for(i=0; i<n-1; i++)
 for(j=i+1; j<n; j++)
 if(niz[i] > niz[j])
 {
 pom=niz[i];
 niz[i]=niz[j];
 niz[j]=pom;
 } 
 for(i=0;i<n;i++){
     suma+=niz[i];
     if(suma>budzet){
  break;  }
     brojac++;
     
 
 }
        return brojac;
    }
    int main(){
        int n,i,niz[MAX],budzet;
        printf("unesi broj cena:");
        scanf("%d",&n);
       printf("Unesi niz");
       for(i=0;i<n;i++){
           scanf("%d",&niz[i]);
       }
       printf("unesi budzet");
       scanf("%d",&budzet);
       printf("najveci broj automobila za taj budzet je %d",funkcija(niz,n,budzet));
       return 0;
    }

    ////////////////////////////////////


    // ispit jul 2021
{
int sn=0,sp=0,cifre,n,i,k=0;
printf("unesi broj");
scanf("%d",&n);
while(n>0){
    cifre=n%10;
    n/=10;
    k++;
    if(k%2==0){
        sp+=cifre;
    }
    else if(k%2!=0){sn+=cifre;}
}
if(sp!=sn){
    printf("broj nije savrsen");
}
else if(sp=sn){
    printf("broj je savrsen");
}

return 0;
}

//////////////////////////////////////////////

// ispit jul 2020 
{
long sn=0,sp=0,cifre,n,i,k=0,p,proizvod,zbir,zadnjacifra,kraj;
printf("unesi broj");
scanf("%ld",&n);
p=n;
while(n>0){
    cifre=n%10;
    n/=10;
    k++;
    if(k%2==0){
        sp+=cifre;
    }
    else if(k%2!=0){sn+=cifre;}
}
proizvod=3*sn;
zbir=proizvod+sp;
for(i=zbir;i<=zbir+10;i++){
    if(i%10==0){
        kraj=i;
    }
}
zadnjacifra=kraj-zbir;
printf("ceo broj je %ld%ld",p,zadnjacifra);
return 0;
}

/////////////////////////////////

// april 2020 ispit
{
    int m,n,i,pomocna;
    float suma=0,koren;
   while(m<1 || n<1)
 {
 printf("\n Unesite m i n: ");
 scanf("%d%d",&m,&n);
 }
 if(n<m){
     pomocna=n;
     n=m;
     m=pomocna;
 }
 for(i=m;i<=n;i++){
     if(i%2!=0){
         koren=sqrt(i);
         suma+=koren;
     }
 }
 printf("suma je %f",suma);
 
 return 0;
}

//////////////////////////////////////////////////////

//ispit dunp niz
int main()
{
int n,i,p;
float suma1=0,suma2=0;
printf("unesi n:");
scanf("%d",&n);
printf("unesi p:");
scanf("%d",&p);
for(i=0;i<n;i++){
    scanf("%d",&niz[i]);
}
for(i=0;i<p;i++){
    suma1+=niz[i];
}
for(i=p+1;i<n;i++){
    suma2+=niz[i];
}
if(suma1==suma2){
    printf("niz je savrsen");
}
else {
    printf("niz nije savrsen");
}
return 0;
}

/////////////////////////////////////////////

