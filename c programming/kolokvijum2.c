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


