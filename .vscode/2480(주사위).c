#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {


    int a, b, c, d;
    
    scanf("%d %d %d", &a, &b, &c);

    if (a == b  && b ==c) { 
        
        d = 10000+ 1000*a;


    }


    else if (a==b) {

        d = 1000+100*a;
    }

    else if (b==c) {

        d = 1000+ 100*b;
    }
     
     else if (c ==a) {

        d = 1000+ 100*c;
     }
// a b c 비교
     else  { 

            if(a> b && a>c) {
                d = a;
            }


            else if (b > c && b > a) {
                d =b;
            }

            else if (c > a && c >b) {

            d = c;}
        

    d = d*100;


     }

        

    printf("%d", d);


     }