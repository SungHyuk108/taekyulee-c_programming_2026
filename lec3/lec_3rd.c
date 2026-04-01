# include <stdio.h>

# define N 10

int main() {
    int a[N] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i;

    for (i = 0; i < N; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
// sizeof(a) = 40, sizeof(a[0]) = 4!!
int a_size = (int) sizeof(a) / sizeof(a[0]); //여기서 이렇게 하는 이유는 일단 (int) 캐스팅은 sizeof의 결과는 사실 size_t 타입이기 때문에 int로 바꿔주는 것. 그리고 sizeof(a)는 배열 전체의 크기를 바이트 단위로 반환하는데, sizeof(a[0])는 배열의 첫 번째 요소의 크기를 바이트 단위로 반환하므로, 이 둘을 나누면 배열의 요소 개수를 얻을 수 있다.
    printf("size of a: %d\n", a_size);

    return 0;
}