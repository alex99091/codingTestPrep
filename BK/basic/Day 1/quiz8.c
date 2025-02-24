/*
문자열 돌리기
제출 내역
문제 설명
문자열 str이 주어집니다.
문자열을 시계방향으로 90도 돌려서 아래 입출력 예와 같이 출력하는 코드를 작성해 보세요.

제한사항
1 ≤ str의 길이 ≤ 10
*/

#include <stdio.h>
#include <string.h>
#define LEN_INPUT 11

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", s1);
    for(int i = 0; i < strlen(s1); i ++) {
        printf("%c\n", s1[i]);
    }
    return 0;
}
