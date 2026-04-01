# include <stdio.h>

float average(float input[], int size);

int main() {
    float a[5] = {100.0, 90.0, 80.0, 70.0, 60.0};
    float b[7] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0};
    float avg = average(a, 5);
    float avg_b = average(b, 7);
    printf("Average: %.2f\n", avg);
    printf("Average: %.2f\n", avg_b); 
    return 0;
}

float average(float input[], int size){ //사실 배열이 함수의 인자값으로 들어가면, 배열의 첫번째 요소의 주소값만 전달됨. 즉, 배열 전체가 전달되는 것은 아님! 이에 따라서 sizeof(input)을 했을 때는 오류가 나올 수 밖에 없는게, 첫번째 요소의 주소만 가지고는 전체의 크기를 알 수 없기 때문! 그래서 average 함수에서 배열의 크기도 같이 전달해줘야 함!
    // 배열의 첫번재 요소의 주소만 있는데 왜 다른 요소들을 불러올 수 있는가? 배열의 첫번째 주소가 있기에 거기서 +1, +2, ... 해서 다른 요소들의 주소도 도출가능해서 불러오기가 가능하기 때문이다.
    
    float sum = 0.0;
    //int num = (int) sizeof(input) / sizeof(input[0]);
    for (int i = 0; i < size; i++){
        sum += input[i];
    }
    return sum / size;
}