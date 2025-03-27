#include<stdio.h>
int main(){
    int year;
    printf("enter a year");
    scanf("%d", &year);
    leap=(year%4==0)?"leap year":"not leap year";
    return 0;
}