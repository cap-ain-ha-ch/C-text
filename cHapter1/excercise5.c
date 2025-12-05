#include<stdio.h>

int main(){
    int i;
    printf("Fahrenheit to Celsius\n");
    for(i=300; i>=0; i-=20){
        printf("%3d %6.1f\n", i, (5.0/9.0)*(i-32));
    }
}