#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, D, root1, root2;
    float realPart, imagPart;


    printf("Enter coefficients of quadratic equation [a]: ");
    if (scanf("%f", &a) != 1) {
        printf("Invalid input for coefficients.\n");
        return 1;
    }

    printf("Enter coefficients of quadratic equation [b]: ");
    if (scanf("%f", &b) !=1)
    {
        printf("Invalid input for coefficients.\n");
        return 1;
    }
    
    printf("Enter coefficients of quadratic equation [c]: ");
    if (scanf("%f", &c) != 1)
    {
        printf("Invalid input for coefficients.\n");
        return 1;
    }
    
    if (a == 0) {
        printf("This is not a quadratic equation (a cannot be 0).\n");
        return 1;
    }

    D = (b * b) - (4 * a * c);


    if (D > 0) {
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);
        printf("Roots are real and distinct.\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    } 
    else if (D == 0) {
        root1 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    } 
    else {

        realPart = -b / (2 * a);
        imagPart = sqrt(-D) / (2 * a); // -D isliye kiya kyunki D negative hai, square root positive ka hota hai
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
    }

    return 0;
}
