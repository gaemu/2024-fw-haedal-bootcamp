#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int M = 0;

    int c = 0;

    int in, out;


    for(int i = 0; i < 4; i++) {


        scanf("%d %d", &out, &in);

        c -= out;
        c += in;
            //최댓값 갱신
        if (c > M) {

            M = c;
        }

    }
        printf("%d", M);

        return 0;

    




}

   

