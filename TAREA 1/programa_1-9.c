# include <stdio.h>

/* Estancia
*/

void main(void)
{
    float ECA;

    printf("Ingrese la extension de la estancia: ");

    scanf("%f", &ECA);

    ECA = ECA * 4047 / 1000;

    printf("\nExtension de la estancia en hectareas: %5.2f", ECA);
}
