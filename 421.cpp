#include <stdio.h>

int main() {
    int side1, side2, hypotenuse;

    for (side1 = 1; side1 <= 500; side1++) 
        for (side2 = side1; side2 <= 500; side2++) 
            for (hypotenuse = side2; hypotenuse <= 500; hypotenuse++) 
                // 是否滿足畢氏定理 
                if (side1 * side1 + side2 * side2 == hypotenuse * hypotenuse) 
                    printf("Pythagorean triple: %d\t, %d\t, %d\t\n", side1, side2, hypotenuse);

    return 0;
}


