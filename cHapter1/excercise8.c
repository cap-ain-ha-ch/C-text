#include<stdio.h>

int main(){
    int blnk = 0, tb = 0, ln = 0;
    int c;
    while((c = getchar()) != EOF){
        if(c == ' ')
            ++blnk;
        else if(c == '\t')
            ++tb;
        else if(c == '\n')
            ++ln;
    }

    printf("blanks, tabs, lines %d %d %d", blnk, tb, ln);
    
}