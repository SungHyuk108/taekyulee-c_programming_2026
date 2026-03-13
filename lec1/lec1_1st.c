# include <stdio.h>

int main() {

    char a = 'A';
    printf("a %%d: %d\n", a);
    printf("a %%i: %i\n", a);
    printf("a %%c: %c\n", a); //char는 int와 호환이 가능하며, 특정 숫자를 기반으로 char범위 내에만 있으면, %c는 문자로, %d는 정수로 정수input를 output함!
    printf("a %%f: %f\n", a);
    printf("-----\n");
    return 0;

}