# include <stdio.h>

int main() {
    int var_score = 85;

    switch (var_score / 10) { // var_score를 10으로 나눈 몫을 기준으로 switch문이 실행됨, var_score이 정수라는 걸 생각을 하고 이를 이용하여서!
        case 10: // var_score가 100인 경우, 여기서 break를 안걸어서 var_score가 100인 경우에도 case 9로 넘어가서 Grade: A가 출력됨
        case 9: // var_score가 90 이상 99인 경우
            printf("Grade: A\n");
            break;
        case 8: // var_score가 80 이상 89인 경우
            printf("Grade: B\n");
            break;
        case 7: // var_score가 70 이상 79인 경우
            printf("Grade: C\n");
            break;
        case 6: // var_score가 60 이상 69인 경우
            printf("Grade: D\n");
            break;
        default: // var_score가 60 미만인 경우
            printf("Grade: F\n");
    }
}