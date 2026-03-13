# include <stdio.h>

int main(){


    char strc[5] = "abcd"; //항상 종료 문자 \0이 들어가야하기 때문에, 5칸이 필요함! (4글자 + 종료문자)
    printf("strc %%c: %c\n", strc); // strc는 배열의 첫 번째 요소의 주소 값을 나타내기에 %c로 출력하려고 하면, 주소값이 문자로 해석되어 이상한 문자로 출력됨!
    printf("strc %%d: %d\n", strc); // %d는 정수를 출력하는 것을 기대하기에 strc의 주소값이 정수로 해석되어 주소값이 출력됨!
    printf("strc %%s: %s\n", strc); //%s 문자열 받는 타입이라 괜찮음.
    return 0;
}