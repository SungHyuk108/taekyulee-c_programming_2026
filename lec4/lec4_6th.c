    # include <stdio.h>

    int sumOfArray1(int arr[], int size){
        int sum = 0;
        for (int i = 0; i < size; i++) {
            sum += arr[i];
        }
        return sum;
    }

    int sumOfArray2(int *arr){ //포인터 변수로, 사실 arr[] 자체를 넣어도 동일하게 동작하기에 딱히 문제는 없음!
        int sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += arr[i]; //포인터 변수를 넣었는데 어떻게 배열을 사용할 수 있냐..? 라고 하면, 사실 배열이라는 거 자체도 어찌보면 그냥 프로그래머들이 편하게 쓰기 위한 툴의 일종으로, 내부적으로는 그냥 모든게 주소로 작용함! arr[i] == *(arr + i)와 동일함 이때, arr은 배열의 가장 첫번째 요소의 주소임.
        }
        return sum;
    }