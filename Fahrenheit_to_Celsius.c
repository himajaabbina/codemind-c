#include<stdio.h>
int main() {
    float Fahrenheit,Celsius;
    scanf("%f",&Fahrenheit);
    Celsius = (Fahrenheit-32)/1.8;
    printf("%.2f",Celsius);
}