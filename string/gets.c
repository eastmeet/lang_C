//
// Created by 이동우 on 9/16/24.
//

#include <stdio.h>

int main() {

    char szBuffer[8] = {0};

    // 설정한 배열의 길이 8자리를 초과한 값까지 입력 받는다.
    // 즉, 메모리 경게를 벗어난 쓰기를 수행 -> 쓰지말자! fgets.c 참고
    gets(szBuffer);
    puts(szBuffer);

    return 0;
};
