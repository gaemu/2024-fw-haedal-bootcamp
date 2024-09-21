#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
    
    int main() {

    while (1) {
    
    char name[10];

    scanf("%s", name);
    
   

     //문자열 비교 함수 name이 #이면
    if (strcmp(name,"#") == 0) {
        
        break;
        
    }
    printf("%s ", name);
          
    int a,b;   
        
        scanf("%d %d",&a,&b);


        if (a > 17 || b >=80) {
            printf("Senior\n");

      }
        
        else { 
            printf("Junior\n");
        }
   

    }
    return 0;
    }
        






    












