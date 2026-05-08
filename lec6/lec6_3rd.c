# include <stdio.h>

void reverseString(char* str);

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%99s", str); //scanf에서 %99s로 입력받는 이유는 정해진 길이보다 더 긴 문자열이 입력될 경우 버퍼 오버플로우가 발생할 수 있기 때문! (99로 하면 마지막에 null character가 들어갈 공간이 남게 됨!)
    // 단 printf에서는 %99s는 반대로 작용하는데 최소 99자리를 확보해서 출력하라는 의미가 된다! (빈자리는 공백으로 채워짐!)
    printf("You entered: %s\n", str);
    printf("-------\n");
    reverseString(str);
    printf("Reversed string: %s\n", str);
    return 0;

}

void reverseString(char* str) {
    int length = 0;
    for(; str[length] != '\0'; length++); //문자열의 길이를 구하는 방법! (null character가 나올 때까지 반복하면서 length를 증가시키는 방식!)
    for(int i = 0; i < length / 2; i++){
        char temp = str[i];
        str[i] = str[length - 1 -i];
        str[length - 1 - i] = temp;
        //참고로 순서를 바꾸는 것이기에, length 수 전체를 하면 안된다! length / 2까지를 진행하여서 앞에서부터 절반만 바꿔주면 처리가능!
    }
}
