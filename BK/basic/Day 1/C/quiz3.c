/*
문제 설명
문자열 str과 정수 n이 주어집니다.
str이 n번 반복된 문자열을 만들어 출력하는 코드를 작성해 보세요.

*/

#include <stdio.h>
#define LEN_INPUT 10

int main(void) {
    char s1[LEN_INPUT];

    // 1. 문자열입력받기
    scanf("%s", s1);
    // 2. 각 문자열 아스키코드로 치환 A = 65, a = 97
    for (int i = 0; s1[i] != '\0'; i++) {
        // 3. 96 이하면 + 32 해주고 97 이상이면 - 32 해주기
        if (s1[i] >= 'A' && s1[i] <= 'Z') {
            s1[i] = s1[i] + 32;
        } else if (s1[i] >= 'a' && s1[i] <= 'z') {
            s1[i] = s1[i] - 32;
        }
    }
    // 4. 문자열로 변환해서 출력
    printf("%s", s1);
}