#include <stdio.h>

float Fahrenheit;
float Celsius;

int main(){

for (Fahrenheit=0; Fahrenheit<=300; Fahrenheit+=10){
    Celsius = (5.0*(Fahrenheit-32))/9.0;
    printf (" %.f °F fond %.2f °C \n", Fahrenheit, Celsius);
    }
}