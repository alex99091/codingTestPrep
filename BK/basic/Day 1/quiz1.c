/*
문자열 str이 주어질 때, str을 출력하는 코드를 작성해 보세요.
*/

#include <stdio.h>
#define LEN_INPUT 1000001  // 입력 최대 크기

int main(void) {
    char s1[LEN_INPUT]; // 충분한 크기의 배열 선언
    scanf("%1000000s", s1); // 최대 길이를 제한하여 입력받음
    printf("%s\n", s1); // 입력된 문자열 출력
    return 0;
}
