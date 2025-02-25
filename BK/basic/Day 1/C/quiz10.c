/*

문자열 겹쳐쓰기
제출 내역
문제 설명
문자열 my_string, overwrite_string과 정수 s가 주어집니다. 문자열 my_string의 인덱스 s부터 overwrite_string의 길이만큼을 문자열 overwrite_string으로 바꾼 문자열을 return 하는 solution 함수를 작성해 주세요.

제한사항
my_string와 overwrite_string은 숫자와 알파벳으로 이루어져 있습니다.
1 ≤ overwrite_string의 길이 ≤ my_string의 길이 ≤ 1,000
0 ≤ s ≤ my_string의 길이 - overwrite_string의 길이

*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, const char* overwrite_string, int s) {
    
    char* answer = (char*)malloc(strlen(my_string) + 1);
    
    if(answer == NULL) {
        return NULL;
    } 
    // 1. answer을 my_string 으로 치환
    strcpy(answer, my_string);

    // 2. overwrite_string을 정수 s ~ 입력받은 문자열 끝가지 치환
    for(int i = 0; i < strlen(overwrite_string); i++) {
        answer[s + i] = overwrite_string[i];
    }

    answer[strlen(my_string)] = '\0';

    
    return answer;
}