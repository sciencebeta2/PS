#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int h, m;
    scanf("%d:%d", &h, &m);
    printf("%d:%d", h, m);
    return 0;
}

// 60분 단위로 쪼개는 그런거 아니라 그냥 입력한거 출력하는 문제다. (사실 시간문제가 아니다. h, m 변수선언이 끝이다.)
