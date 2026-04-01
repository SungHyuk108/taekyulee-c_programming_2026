# include <stdio.h>

int main() {

    int num;
    int sum = 0;
    while(1){
        printf("Input number: ");
        scanf("%d", &num);
        sum += num;
        if (num ==0){
            break;
        }

    }
    printf("summation results: %d\n", sum);


}