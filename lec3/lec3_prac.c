# include <stdio.h>

#define MAX_SIZE 100
#define RANGE 100

int main() {
    int n, i, number;
    int frequency[RANGE] = {0}; //frequency 배열을 0으로 초기화
    int arr[MAX_SIZE];

    printf("Enter the number of elements: (max %d) ", MAX_SIZE);
    scanf("%d", &n);

    for (i = 0; i<n; i++){
        printf("Input %dth number: ", i+1);
        scanf("%d", &arr[i]);
        if (arr[i] >= 0 && arr[i] < RANGE){ //입력된 숫자가 0 이상이고 RANGE 미만인 경우에만 frequency 배열의 해당 인덱스 값을 증가시킴
            frequency[arr[i]]++;
        }


    }

    printf("Number\tFrequency\n");
    for(i=0; i<RANGE; i++){
        if (frequency[i] > 0){ //frequency 배열의 값이 0보다 큰 경우에만 해당 숫자와 빈도수를 출력함
            printf("%d\t%d\n", i, frequency[i]);
        }
    }

}