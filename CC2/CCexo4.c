#include <stdio.h>
 
void inverse(char *pointeur, int debut, int fin)
{
   char ch;
   if (debut >= fin)
      return;
 
   ch = *(pointeur+debut);
   *(pointeur+debut) = *(pointeur+fin);
   *(pointeur+fin) = ch;
   inverse(pointeur, ++debut, --fin);
}
 
int main()
{
   char phrase[100];
   printf(" Entrez la phrase ");
  scanf("%s\n",phrase);
   printf("Votre phrase est %s\n",phrase);
   inverse(phrase, 0, strlen(phrase)-1);
   printf(" L'inverse de votre phrase est %s", phrase);
   return 0;
}