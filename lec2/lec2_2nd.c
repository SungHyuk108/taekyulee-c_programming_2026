# include <stdio.h>

int main(void){
    int a;
    if (0) printf("Print 0 run!!\n");
    if (1) printf("Print 1 run!!\n");
    if (-5) printf("Print -5 run!!\n"); //0이 아닌 모든 수는 참으로 간주됨! (음수도 포함!) 이게 가장 중요! 음수라고 그런것은 아님!
    if (a = 3) printf("Print a = 3 run!!\n"); // 꼭 조건식이 아니더라도, a=3이라는 대입 연산자를 통해서 진행할 수 있다! 참고로 a = 0으로, a에 0을 대입하면 출력이 안됨.
    return 0;
}