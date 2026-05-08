# include <stdio.h>
# include <string.h> //strcpy 쓰려면 이거 include 해야함

typedef struct {
    int day;
    int month;
    int year;

} Date; //여기 구조체를 Date로 명명

typedef struct {
    char name[50];
    Date birthdate;
    Date join_date;
} Person;
// 이걸 이렇게 중첩으로 안쓰면, int birthday, int birthmonth... 이렇게 쭉 계속 써서 코드가 길어지기에 이렇게 깔끔하게 중첩해서 정리하는게 best.

Date build_date(int day, int month, int year); //함수 만들기!! return type이 Date인! 참고로 구조체 Date를 쓰기에, Date가 함수보다도 먼저 쓰여져야하고, main에서 함수를 쓸 때는 main보다도 함수가 먼저 최소한 선언은 되어이썽야함.
Person build_person(const char* name, Date birthdate, Date join_date);

void print_person_info(Person person);

int main() {
    Date p1_birthdate = build_date(15, 5, 1990);
    Date p1_join_date = build_date(1, 1, 2020);
    Person p1 = build_person("Alice", p1_birthdate, p1_join_date); //Alice 처럼 문자열이든 배열이든 배열이 인자값으로 들어가게 된다면, 해당 배열의 전체 값이 아니라 해당 배열의 첫 번째 값의 주소가 인자값으로 들어간다.
    print_person_info(p1);
}



Date build_date(int day, int month, int year) {
    Date d;
    d.day = day;
    d.month = month;
    d.year = year;

    return d;
}

Person build_person(const char* name, Date birthdate, Date join_date) {
    Person p;
    strcpy(p.name, name);
    p.birthdate = birthdate;
    p.join_date = join_date;
    return p;
}

void print_date(Date date) {
    printf("%02d/%02d/%04d", date.day, date.month, date.year);
}
void print_person_info(Person person) {
    printf("Name: %s\n", person.name);
    printf("Birthdate: ");
    print_date(person.birthdate);
    printf("\nJoin Date: ");
    print_date(person.join_date);
    printf("\n");
}