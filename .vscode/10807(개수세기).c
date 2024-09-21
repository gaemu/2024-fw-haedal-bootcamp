#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int N, V, rst;
int char[255];

int main() {
   scanf("%d", &N);

   for (int i = 0; i < N; i++) {
      scanf("%d ", &arr[i]);
   }

   scanf("%d", &V);

   for (int i = 0; i < N; i++) {
      if (arr[i] == V)
         rst++;
   }

   printf("%d", rst);

   return 0;
}