#include<stdio.h>
int main(){
    int m1,m2,m3,m4,m5,total;
    float avg;
    printf("Enter marks of First subject:");
    scanf("%d",&m1);
    printf("Enter marks of Second subject:");
    scanf("%d",&m2);
    printf("Enter marks of Third subject:");
    scanf("%d",&m3);
    printf("Enter marks of Fourth subject:");
    scanf("%d",&m4);
    printf("Enter marks of Fifth subject:");
    scanf("%d",&m5);
    total=m1+m2+m3+m4+m5;
    avg=total/5;
    if(avg>=80){
        printf("Division A");
    
    }
    else if(avg>=60&&avg<=79){
        printf("Division B");

    }
    else if(avg>=40&&avg<=59){
        printf("Division c");

    }
    else{
        printf("Fail");
    }
}