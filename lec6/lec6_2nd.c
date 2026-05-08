# include <stdio.h>

int findMax(int arr[], int size);

int main() {
    int arr[] = {3, 5, 2, 8, 1};
    int size = sizeof(arr) / sizeof(arr[0]); //배열의 전체 크기에서 해당 배열의 타입으로 나눠주면 배열의 요소 개수를 구할 수 있다!
    int max = findMax(arr, size);
    printf("Maximum elemnt in the array: %d\n", max);
    return 0;


}

int findMax(int* arr, int size){ //사실 int arr[]로 해도 되고 int* arr로 해도 되는데, 이유는 arr로 가든 arr[]로 가든 둘 다 첫번째 요소의 주소를 나타내기 때문이다! (배열 이름 자체가 배열의 첫 번째 요소의 주소를 나타내는 포인터이기 때문!)
    int max = arr[0];
    for (int i = 0; i<size; i++){
        if (max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}