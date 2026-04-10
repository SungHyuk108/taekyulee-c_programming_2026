# include <stdio.h>

int main() {
    int abc = 1;
    int other = abc;
    printf("abc: %d\n", abc);
    printf("other: %d\n", other);
    abc++;
    printf("abc: %d\n", abc);
    printf("other: %d\n", other); //여기서 other는 abc의 값을 복사(진짜 단순하게 "복사"한 것임!!!)한 것이기 때문에 abc가 1 증가해도 other는 변하지 않음! 다른 변수이기 때문!
    other += 2;
    printf("abc: %d\n", abc); //abc는 other의 영향을 받지 않음!
    printf("other: %d\n", other); //other의 값이 여기선 3이다!


    // 만약 정말로 하나의 변수 값의 변화가 다른 변수에도 영향을 주게 하고 싶다면 포인터를 사용해야한다! (주소값을 공유하기 때문에)
    int* other2 = &abc;
    printf("abc: %d\n", abc);
    printf("*other2: %d\n", *other2); //other2는 abc의 주소값을 저장하고 있기 때문에 *other2는 abc의 값을 출력하게 된다!
    abc++;
    printf("abc: %d\n", abc);
    printf("*other2: %d\n", *other2); //abc가 1이 증가했고 *other2는 abc의 주소"값"을 저장하고 있기에 abc가 증가함에 따라 같이 증가하는 양상을 보여서 3으로 동일하게 출력함!

    //추가로 *other2++를 하면 other2가 가리키는 주소의 값을 증가시키는게 아니라 주소 자체를 한 칸 증가시키기에 원래 우리가 원했던 other2 + 1이 아니라 다른 주소를 가리키게 되기에 이상한 값이 출력된다.
    // 즉, 연산자 우선순위 표현할려면 (*other2)++로 해야한다!

}