#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {

    int a;
    scanf("%d", &a);


    for (int i = 0; i < a; i++) {
    
        
        for (int k = a-1 ; k > i; k--) { 
            
            printf(" ");

            
        }
        for (int j = 0; j <=i; j++) {    
        
            printf("*");


        }
    printf("\n");
    }


}