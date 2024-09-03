#include <stdio.h>
#include <stdlib.h>

int main (){
    float raio;
    float pi=3.14;
    float area;

    printf("Digite o raio :");
    scanf("%f",&raio);

    area=raio*raio*pi;

    printf("A area do circulo eh : %f",area);

    return 0;
}
