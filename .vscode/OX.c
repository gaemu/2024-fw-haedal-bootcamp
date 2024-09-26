#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
char arr[80];

int main() {


    int N;
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        
        scanf("%s",arr);


    
    int score = 0;
    int current = 0;

    for (int j = 0; j < strlen(arr); j++) {

        if (arr[j] == 'O') {

            current++;

            score +=current;

        }
        

        else

        current = 0;
    
        
    }


    printf("%d\n", score);
}  
}