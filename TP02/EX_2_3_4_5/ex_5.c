#include "header.h"

float f(float x)
{
    return x - sqrt(2);
}
float g(float x)
{
    return 1;
}
int main()
{
    float racine2 = Dichtomie(f, 0, 3, 3);
    printf("Avec dichotomie \n");
    printf("%lf\n", racine2);
    racine2 = Dichtomie(f, 0, 3, 10);
    printf("%lf\n", racine2);
    racine2 = Dichtomie(f, 0, 3, 30);
    printf("%lf\n", racine2);
    printf("Avec newton \n");
    racine2 = newton(f, g, 3, 3);
    printf("%lf\n", racine2);
    racine2 = newton(f, g, 3, 10);
    printf("%lf\n", racine2);
    racine2 = newton(f, g, 3, 10);
    printf("%lf\n", racine2);
    printf("Avec dicho2 \n");
    racine2 = dichotomie2(f, 0, 3, 0.0000000001);
    printf("%lf\n", racine2);
    return 0;
}
