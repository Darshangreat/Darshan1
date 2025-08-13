#include <stdio.h>
#include <stdlib.h>

int area(int side) {
     return side * side;
}

int main() {
    int side;

    printf("ENTER THE SIDE OF THE SQUARE: ");
    scanf("%d", &side);

    printf("Area of square = %d", area(side));

    return 0;
}
