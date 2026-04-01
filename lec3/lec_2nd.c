# include <stdio.h>

int main() {
    int a = 10;
    float b = 3.14;
    char c = 'k';

    if ('a' < 'b'){
        printf("b(%c-%d) is greater than a(%c-%d)\n", 'b', 'b', 'a', 'a');
    }
    printf("before c: %c\n", c);
    if ('a' <= c && c<= 'z'){
        c = c - 'a' + 'A'; //대문자 소문자 순서 바꾸면 소문자변환기가 됨! 참고로 아스키 코드에서 소문자의 아스키 숫자가 대문자의 아스키 숫자보다 큼!
    }
    printf("after c: %c\n", c);
    return 0;
}