// 다중배열

# include <stdio.h>

# define N 5
# define M 9

// define 말고 int N = 3 뭐 이렇게 따로 변수로 설정하여서 대입하는 거는 좀 문법적으로 문제가 있기 때문에 그냥 교수님이 define으로 하거나 실질 숫자를 박아 넣는 방법으로 진행하는게 가장 좋다고 하심! (변수 넣지 말것!)

int main() {
    int arr[N][M];

    for (int i=0; i<N; i++){
        for (int j=0; j<M; j++){
            arr[i][j] = i*M + j;
            printf("%d ", arr[i][j]); // 중첩 for문으로 모든 element 출력!
        }
        printf("\n");
    }

    printf("Element at arr[4][8]: %d\n", arr[4][8]); // arr[4][8]의 값 출력
    printf("Element at &arr[4][7]: %d\n", &arr[4][7]); // arr[4][7]의 주소 출력
    printf("Element at &arr[4][8]: %d\n", &arr[4][8]); // arr[4][8]의 주소 출력 주소의 경우는 정수 형태로 저장되긴 하는데, 다만, 전부 양수로 저장되기에, 10진수보단 16진수 형태로 도출되는 것이 일반적임. 10진수로 출력하면 overflow가 발생할 수도 있음.
    

    return 0;
}