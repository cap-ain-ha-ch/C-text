#include<stdio.h>

int main()
{
    float fahren, cels;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    cels = lower;
    printf("Celsius to fahrenheit table\n");
    while(cels <= upper)
    {
        fahren = ((9.0/5.0) * cels) + 32;
        printf("%3.0f %6.1f\n", cels, fahren); //print as float point, atleast 3 characters wide. print as float point, atleast 6characters and one after decimal
        cels = cels + step;
    }
}