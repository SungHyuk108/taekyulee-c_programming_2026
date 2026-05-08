# include <stdio.h>

typedef struct {
    int id;
    char name[50];

} Employee;

int main() {
    Employee emp1 = {1, "JohnDoe"};
    Employee emp2 = {2, "JaneSmith"};

    Employee ee[] = {emp1, emp2}; //employee 구조체 배열에서는 해당 구조체 타입에 해당하는 변수 밖에 들어갈 수 x
    printf("emp1: ID=%d. Name = %s\n", ee[0].id, ee[0].name); // employee의 경우는, 한 번에 
}