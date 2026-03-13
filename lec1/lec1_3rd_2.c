# include <stdio.h>

int main() {
    int a = 2;
    float a2 = 2.0;
    int b = 3;
    float b2 = 3.0;

    // float나 double은 % 연산이 불가능하다! (정수형에서만 % 연산이 가능함!) 그래서 a2와 b2는 float이기에 % 연산이 불가능함!

    printf("a + a2 = %f", a+a2);
    printf("b + b2 = %f", b+b2);

}