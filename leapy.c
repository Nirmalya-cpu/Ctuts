# include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
     ("%s",year % 4 == 0 && year % 100 != 0 || year % 400 == 0)?printf("Leapyear"):printf("Not a leap year");
    return 0;
}