# include <stdio.h>

int main() {
    int a = 2;
    float a2 = 2.0;
    int b = 3;
    float c = 3.0;

    // float나 double은 % 연산이 불가능하다! (정수형에서만 % 연산이 가능함!) 그래서 a2와 b2는 float이기에 % 연산이 불가능함!

    printf("a %% b = %d\n", a%b);
    printf("a %% c (c cast to int): %d\n", a%(int)c);
    printf("a2 %% b (a2 cast to int): %d\n", (int)a2 % b);

}