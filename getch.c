#include <stdio.h>
#include <termios.h>
#include <unistd.h>

int getch(void) {
    struct termios oldattr, newattr;
    int ch;
    tcgetattr(STDIN_FILENO, &oldattr);
    newattr = oldattr;
    newattr.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newattr);
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldattr);
    return ch;
}

int main() {
    printf("아무 키나 누르세요: ");
    int c = getch();
    printf("\n입력된 문자의 ASCII 코드: %d\n", c);
    return 0;
}