#include <stdio.h>
#include <math.h>

int main() {
    double X;

    printf("Enter a number: ");
    scanf("%lf", &X);

    printf("square root = %.2lf\n", sqrt(X));
    printf("Absoulte value = %.2lf\n", fabs(X));

    return 0;
}
