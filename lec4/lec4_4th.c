# include <stdio.h>

void countdown(int n);

int main() {
    countdown(10);
    printf("------\n");

    countdown(5);

}

void countdown(int n){
    if (n <= 0) {
        printf("Countdown finished!\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        printf("%d\n", n - i);
    }
}
// 10이면 10부터 0까지! 내려감!