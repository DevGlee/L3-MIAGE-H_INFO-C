#include <stdio.h>
 
void inverse(char *p, int debut, int fin)
{
   char ch;
   if (debut >= fin)
      return;
 
   ch = *(p+debut);
   *(p+debut) = *(p+fin);
   *(p+fin) = ch;
   inverse(p, ++debut, --fin);
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