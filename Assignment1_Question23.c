#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    float power;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    power=pow(a,b);
    printf("%d raised to the power of %d is %.2f",a,b,power);
    return 0;
}