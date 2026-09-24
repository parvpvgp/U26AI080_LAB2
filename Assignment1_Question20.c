#include<stdio.h>
int main(){
    int a,b;
    printf("Enter First number:");
    scanf("%d",&a);
    printf("Enter Second number:");
    scanf("%d",&b);
    int n;
    printf("Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division:");
    scanf("%d",&n);
    switch(n){
        case 1:
            printf("Addition of %d and %d is %d",a,b,a+b);
            break;
        case 2:
            printf("Subtraction of %d and %d is %d",a,b,a-b);
            break;
        case 3:
            printf("Multiplication of %d and %d is %d",a,b,a*b);
            break;
        case 4:
            if(b==0){//try of if in switch case
                printf("Division by zero is not allowed");
            }
            else{
                printf("Division of %d and %d is %f",a,b,(float)a/b);
            }
            break;
        default:
            printf("Invalid input");
    }

}