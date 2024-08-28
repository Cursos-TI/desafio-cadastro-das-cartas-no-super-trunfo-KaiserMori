#include <stdio.h>

int main() {
    char cidade[20]; 
    int população=0;
    float PIB=0.00;
    int turisticos= 0;
    float area;
    char codigo[5];

        printf ("cadastre sua carta:\n");

        printf ("qual o codigo da carta?\n");
        scanf  ("%s", &codigo);
 
        printf ("qual é a sua cidade?\n");
        scanf  ("%s", &cidade);

        printf ("qual a area de sua cidade?\n");
        scanf  ("%f", &area);

        printf ("quantos pontos turisticos sua cidade tem?\n");
        scanf  ("%i", &turisticos);

        printf ("qual a população de sua cidade?\n");
        scanf  ("%i", &população);

        printf ("qual o PIB de sua cidade?\n");
        scanf  ("%f", &PIB);

         printf ("\ncodigo:%s\n", codigo);   
         printf ("cidade: %s\n", cidade);
         printf ("Area: %f\n", area);
         printf ("Pontos turisticos: %i\n", turisticos);
         printf ("População: %i\n", população);
         printf ("PIB: %0.2f\n", PIB);


}

