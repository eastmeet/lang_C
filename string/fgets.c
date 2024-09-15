#include <stdio.h>
#include <string.h>

int main() {
    char szName[32] = {0};
    printf("이름을 입력하세요.\n");

    // char	*fgets(char * __restrict, int, FILE *);
    fgets(szName, sizeof(szName), stdin);

    szName[strcspn(szName, "\n")] = 0;

    printf("당신의 이름은 ");
    puts(szName); // puts는 자동으로 개행
    puts("입니다.");
    return 0;
}