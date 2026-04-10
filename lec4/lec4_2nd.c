# include <stdio.h>

/// @brief 두 개의 실수의 평균을 계산하는 함수
/// @param a 첫 번째 실수
/// @param b 두 번째 실수
/// @return a와 b의 평균값

// 또한, 함수는 무조건 main 함수보다 먼저 정의되어야 한다. main 함수보다 뒤에 정의된 함수를 사용하려면, 함수의 원형(prototype)을 미리 선언해야 한다. 함수의 원형은 함수의 이름, 반환 타입, 매개변수 타입을 포함하는 선언문으로, 컴파일러에게 해당 함수가 존재한다는 것을 알려준다.
// 변수에 비유하면, int a는 선언, a = 10은 대입이라고 볼 수 있다. 이와 같이 double get_average(double a, double b)는 함수를 사전적으로 먼저 정의하는거고 후에 해당 함수의 구조를 작성해주면 됨!

double get_average(double a, double b) {
    return (a + b) / 2.0;
}

int main(void) {
    double avg = get_average(5.0, 10.0);
    printf("Average: %.2f\n", avg);
    return 0;


}