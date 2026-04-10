# include <stdio.h>

int main() {
    int value = 50;
    int* p = &value;
    printf("p = %p\n", p); //이거는 value의 주소를 출력!
    printf("&p = %p\n", &p); //이거는 value의 값이 저장된 p의 주소를 출력! 사실상 이중포인터! (실질적으로 사용하고 싶다면 ** 필요!)
    printf("*p = %d\n", *p); //이거는 포인터 변수 p가 가리키는 값을 찍어라! 즉 value의 값이 출력됨.
    printf("*&value: %d\n", *&value); //이거는 value의 주소가 가리키는 값을 찍어야하므로 value 값이 출력됨
    printf("*&p: %p\n", *&p); //이거는 p의 주소가 가리키는 값을 찍어야하므로 p가 가리키는 값이 출력됨! 즉 value의 주소가 출력됨!
    printf("&*&p: %p\n", &*&p); //이거는 p의 주소가 가리키는 값의 주소를 말하기에 p의 주소가 출력됨!





}