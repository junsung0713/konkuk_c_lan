#include <stdio.h>
#include <stdlib.h>

int set_random() {
    int result = rand() % 3;
    return result;
}

int decision(int computer, int user) {
    if (computer == user) {
        return 0;
    }
    if (computer == 0) {
        return user == 1 ? 1 : 2;
    } else if (computer == 1) {
        return user == 2 ? 1 : 2;
    } else {
        return user == 0 ? 1 : 2;
    }
}

void print_result(int result) {
    switch (result) {
        case 0:
            printf("무승부");
            break;
        case 1:
            printf("사용자 승리");
            break;
        case 2:
            printf("컴퓨터 승리");
    }
}

// 0 - 가위
// 1 - 바위
// 2 - 보
int get_input() {
    int input;
    while (1) {
        printf("입력해주세요 (0 - 가위, 1 - 바위, 2 - 보): ");
        scanf("%d", &input);
        if (input < 0) {
            printf("잘못 입력했습니다.\n");
        }
        if (input > 2) {
            printf("잘못 입력했습니다.\n");
        }
        if (input >= 0 && input <= 2) {
            break;
        }
    }
    return input;
}

int main(void) {
    int computer, user, result;
    char sel;
    while (1) {
        computer = set_random();
        user = get_input();
        printf("\ncomputer: %d, user: %d \n", computer, user);
        result = decision(computer, user);
        print_result(result);
        printf("\n\n게임 계속 진행하려면 아무키나 누르시오. 단, q를 누르면 끝납니다");
        while ((sel = getchar()) == '\n');
        if (sel == 'q') {
            break;
        }
    }
}