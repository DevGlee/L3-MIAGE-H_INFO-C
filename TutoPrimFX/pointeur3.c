int main()
{
    //Declaration de la variable a

    int a = 21;
    //Declaration du pointeur pa
    int *pa = &a; // Ainsi le pointeur hérite de l'adresse de a

    printf(" a = %d(adresse : %p\n", a, &a); // On affiche la valeur et l'adresse de a
    printf("=> %p\n", pa);                   // on affiche l'adresse du pointeur
    a = 20;
    *pa = 40;                                                   // On change la valeur du pointeur a
    printf("La valeur stockee a l'adresse %p est %d", pa, *pa); // On affiche la valeur stockée à l'adresse du pointeur
    return 0;
}