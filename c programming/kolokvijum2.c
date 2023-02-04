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

// main(){
//     int i;
//     char myName[]= "Munevera";
//     printf("Moje ime je: %s\n", myName);
//     for(i=0; i<8; i++) printf("%d\n", myName[i]);
//     return 0;
// }