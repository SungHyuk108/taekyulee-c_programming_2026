# include <stdio.h>

void decompose(const double x, long* int_part, double* frac_part);
int main() {
    double pi = 3.141592;
    long int_part;
    double frac_part;

    decompose(pi, &int_part, &frac_part);
    printf("pi int part: %ld\n", int_part);
    printf("pi frac part: %lf\n", frac_part);
    return 0;
}


// 왜 굳이 pointer를 쓰는가? 함수에서 반환값이 없기에 (void)타입이기에 이를 해결하기 위해서 주소를 이용하여 함수밖의 변수에 접근하여 수정하려 하기 때문이다!
void decompose(const double x, long* int_part, double* frac_part) {
    *int_part = (long)x; //이렇게 하면 int_part가 가리키는 주소에 x의 정수부분이 저장됨!, (long)을 하든 (int)를 하든 상관은 없지만 pi가 double로 8비트이기 때문에 long으로 하는게 더 안전하긴 하다! (int는 4비트이기 때문에 overflow가 날 수 있음!)
    *frac_part = x - *int_part; //이렇게 하면 frac_part가 가리키는 주소에 x의 소수부분이 저장됨!
    // 또한 이때 그냥 int_part가 아니라 *을 붙인 이유는 주소를 바꾸는게 아니라 해당 변수가 가리키는 주소 값을 바꾸기 위함이다!
}