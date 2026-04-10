# include <stdio.h>

int factorial_recursive(int n);

int main() {
    int n = 5;
    printf("Factorial of %d is %d\n", n, factorial_recursive(n));
}

int factorial (int n){
    int result = 1;
    for(int i = 1; i <= n; i++){
        result *= i; //평범하게 재귀적으로 안하면 그냥 1부터 인자값 까지 계속 곱해지면 됨!
    }
    return result;
}

int factorial_recursive(int n){
    if (n == 0 || n == 1) {
        return 1; // 0!과 1!은 모두 1이므로, 이 경우에는 1을 반환, 그리고 이 이후 아래쪽 부터 역으로 거슬러 올라감!
        // 재귀함수에서는 무조건 종료 조건이 필수적임! 없다면, 무한루프임!
    }
    return n * factorial_recursive(n - 1); // n! = n * (n-1)!
}