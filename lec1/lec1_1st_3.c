# include <stdio.h>

int main(){

    unsigned char ch = 65; //unsigned char는 0~255까지, char는 -128~127까지 표현 가능! char는 signed char로 간주됨! (음수도 표현 가능) unsigned char는 양수만 표현 가능!
    // char도 사실 ASCII 코드 변환만 좀 힘들거나 지원이 안될 뿐, 음수도 사실 지원함! (signed char의 경우)
    printf("ch %%d: %d\n", ch);
    printf("ch %%i: %i\n", ch);
    printf("ch %%c: %c\n", ch);
    printf("ch %%f: %f\n", ch);
    printf("-----\n");
    return 0;
}