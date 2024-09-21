#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
    
    int main() {

    while (1) {
    
    char name[255];

    scanf("%s", name);
    
    printf("%s", name);

     
    if (strcmp(name,"#") == 0) {
        printf("0 0");
        break;
        
    }
          

        int a,b;   
        
        scanf("%d %d",&a,&b);


        if (a > 17 || b > 80) {
            printf("Senior\n");

      }
        
        else { 
            printf("Junior\n");
        }


   

    }
    return 0;
    }
        






    












