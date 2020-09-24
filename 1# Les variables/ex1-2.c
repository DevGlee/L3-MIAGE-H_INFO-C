#include <stdio.h>
#include <stdlib.h>

 int main() {

int e ; 
float c;

printf("Entrer votre argent en euros\n");

scanf("%d", &e);

printf("Conversion !\n");

c= e*0.92;



printf("Vous avez %f dollars\n", c);




    return 0;
}