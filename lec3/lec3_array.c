# include <stdio.h>

int main() {
    char string[10] = "10elements";
    printf("string: %s\n", string);

    for (int i = 0; i < 10; i++){
        printf("%c ", string[i]); //위와 동일한 결과가 나옴! 왜냐하면 string은 사실 문자열이 아니라 char 배열이기 때문! 그래서 string[i]는 char 배열의 i번째 요소를 의미하는 것!
    }
    printf("\n");
    return 0;
}