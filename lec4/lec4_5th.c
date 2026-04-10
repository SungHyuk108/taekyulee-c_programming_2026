# include <stdio.h>

int isPrime(int number);

int main() {
    int number = 29;
    if (isPrime(number)){
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }
}

int isPrime(int number){
    if (number <= 1) {
        return 0; // 1 이하의 수는 소수가 아님
    }
    for (int i = 2; i <= number / 2; i++) { //number / 2를 하는 이유는 가장 큰 약수는 number / 2이기 때문! (예시로 10의 경우, 5까지만 나누어 보면 됨!)
        if (number % i == 0) {
            return 0; // 나누어 떨어지는 수가 있으면 소수가 아님, 즉 0인 false 리턴.
        }
    }
    return 1; // 소수임
}