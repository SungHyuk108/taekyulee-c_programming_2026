# include <stdio.h>

void swap(int* x, int* y);
int main() {
    int a = 5;
    int b = 3;

    printf("a: %d / %p\n", a, &a); //a의 값과 a의 주소를 출력!
    printf("b: %d / %p\n", b, &b); //b의 값과 b의 주소를 출력!

    swap(&a, &b); //swap 함수에 a와 b의 주소를 넘겨줌! (주소값을 넘겨주기 때문에 swap 함수에서 a와 b의 값을 바꿀 수 있음!)

    int c = 7;
    swap()
}

void swap(int* x, int* y) {
    int temp = *x; //temp에 x가 가리키는 값(즉 a의 값)을 저장!
    *x = *y; //x가 가리키는 값(즉 a의 값)을 y가 가리키는 값(즉 b의 값)으로 바꿈!
    *y = temp; //y가 가리키는 값(즉 b의 값)을 temp에 저장된 x가 가리키는 값(즉 a의 원래값)으로 바꿈!

    //여기서 이렇게 하는 이유는, swap이 void타입이기 때문인 것도 있고, swap 자체 내부에서 printf를 하면 상관이 없는데, swap이 끝난 이후에 a와 b의 값을 main에서 출력하려 하기에 주소에 관련하여서 다뤄야함!
    // 참고로 주소끼리 바꾸지는 못하고 주소값만 바꿀 수 있음! (x = y 이렇게 하면 안된다는 거임!)
}