#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[256];
    const char vowels[] = "aeiouAEIOU";
    int count;

    while (1) {
        // 문자열 입력 받기
        fgets(str, sizeof(str), stdin);

        // 개행 문자 제거
        str[strcspn(str, "\n")] = '\0';

        // 종료 조건: 문자열이 '#'일 때 종료
        if (strcmp(str, "#") == 0) {
            break;
        }

        count = 0;  // 모음 개수 초기화

        // 문자열에서 모음 개수 세기
        for (int i = 0; i < strlen(str); i++) {
            if (strchr(vowels, str[i])) {  // 현재 문자가 모음인지 확인
                count++;
            }
        }

        // 모음 개수 출력
        printf("%d\n", count);
    }

    return 0;
}