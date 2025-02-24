//4. 영어 알파벳으로 이루어진 문자열 str이 주어집니다. 각 알파벳을 대문자는 소문자로 소문자는 대문자로 변환해서 출력하는 코드를 작성해 보세요.
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define LEN_INPUT 20

int main(void) {
    char s1[LEN_INPUT];
    char s2[LEN_INPUT];
    scanf("%s", s1);
    
    for(int i = 0; i < strlen(s1); i++){
        if (isupper(s1[i])){
            s2[i] = tolower(s1[i]);
        }else{
            s2[i] = toupper(s1[i]);
        }
    }
    
    printf(s2);

    return 0;
}
