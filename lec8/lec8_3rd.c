# include <stdio.h>

typedef enum {
    ROCK,
    PAPER,
} Choice; //열거형 내부는 정수처리됨. ROCK은 0, PAPER는 1로 처리됨. 그래서 Choice player1 = ROCK; 하면 player1은 0이 되는 것.

typedef struct{
    int id;
    Choice choice;
} Player; //player가 choice 중 하나를 선택할 수 있다.

Player determine_winner(Player p1, Player p2);

void print_player(Player winner){
    printf("Player %d wins!\n", winner.id);
}

int main() {
    Player player1 = {1, ROCK};
    Player player2 = {2, PAPER};
    Player winner = determine_winner(player1, player2);
    print_player(winner);
}

Player determine_winner(Player p1, Player p2){
    if (p1.choice == ROCK && p2.choice == PAPER) {
        return p2; //p2가 이긴다.
    } else if (p1.choice == PAPER && p2.choice == ROCK) {
        return p1; //p1이 이긴다.
    } else {
        return p1; //무승부인 경우, player1이 이긴 것으로 간주한다. (임의로 정한 것)
    }
}