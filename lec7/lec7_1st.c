# include <stdio.h>

int a[10] = {1,2,3,4,5,6,7,8,9,10};

// void print_array(){
//     for(int i =0; i < 10; i++){
//         printf("%d ", a[i]);
//     }
//     printf("\n");
// }

// int main(void){
//     print_array();
//     return 0;
// }

// 위의 코드는 일반적 ver.

// 여기부터 포인터 ver.

 void print_array(){
    for(int *p = a; p<a+10; p++){
        printf("a[%d] = %d\n", p-a, *p);
    }
 }
