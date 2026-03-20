# include <stdio.h>

int main(void){
    int from, to, baesu;
    printf("Enter the range (from to): ");
    scanf("%d %d", &from, &to);
    printf("Enter the multiplier(baesu): ");
    scanf("%d", &baesu);

    int min = 0;

    for (int i = from; i<=to; i++){
        if (i % baesu == 0){
            min = i;
            break; // 가장 작은 배수를 찾았으므로 반복문을 종료
        }
    }
    if (min ==0){
        printf("There is no multiple of %d in the range [%d, %d].\n", baesu, from, to);
    }
    else{
        printf("The minimum multiple of %d in the range [%d, %d] is: %d\n", baesu, from, to, min);

    }

}