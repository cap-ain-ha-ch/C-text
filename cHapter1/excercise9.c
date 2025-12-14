#include<stdio.h>

int main(){
    int c, n;
    n = 0;
    while((c = getchar()) != EOF){
        if(c == ' '){
            if(n == 0){
                printf("%c", c);
                n = 1;
            }
        }
        else {
            n = 0;
            printf("%c", c);
        }
    }
    return 0;

}