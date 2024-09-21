#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int t,m,s,a;

    scanf("%d %d %d %d", &t,&m,&s,&a);

    s += a;

    
        
    //시계 계산 나머지 몫 이용

    if (s > 59) {

        m += s /60;
        s = s % 60;

        
        
    }

    if (m > 59) {

        t += m /60;
        m = m % 60;
        
    }

    if (t > 23) {
        
        t = t % 24;
    }



printf("%d %d %d", t,m,s);

return 0;
}