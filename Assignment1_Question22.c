#include<stdio.h>
int main(){
    int a;
    printf("Enter the number of elements:");
    scanf("%d",&a);
    int fact=1;
    for(int i=1;i<=a;i++){
        fact=fact*i;// Add code to read and process each element
    }
    printf("Factorial of %d is %d",a,fact);
}
