#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

      int arr[31] = {0};  // 0에서 30까지

        int num;

        for (int i = 0; i < 28; i ++) {

            scanf("%d", &num);

            arr[num] = 1;



            
        }


        for (int i = 1; i < 31; i++) {

            if(arr[i] == 0)

            printf("%d\n", i);
        }
   


}