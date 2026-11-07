#include<stdio.h>
int main(){
    int num1,num2,temp;
    printf("Enter first swapping number: ");
    scanf("%d",&num1);
    printf("Enter second swapping number: ");
    scanf("%d",&num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("After swapping: First number = %d, Second number = %d\n",num1,num2);
    return 0;
}
