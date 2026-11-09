#include<stdio.h>

int main() {


    int num;
    int i;

    printf("Enter an number:- ");

    if(scanf("%d", &num) != 1) {
        printf("Invalid input:-- %d",num);
        return 1;
    }

    for (i = 1; i <=num; i++)
    {
        printf("%d\n", i);
    }
    
    return 0;
}
