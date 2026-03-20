# include <stdio.h>
int main(void){

    int a = 2;
    if (a<0){
        printf("a is negative.\n");

    } else if (a < 10){
        printf("a is less than 10.\n");
    } else if (a < 3){
        printf("a is less than 3.\n"); //위에 걸려서 아래 else까지는 안감!
    }else {
        printf("a is greater than or equal to 10.\n");
    }
}