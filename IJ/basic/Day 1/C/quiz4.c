//4. ���� ���ĺ����� �̷���� ���ڿ� str�� �־����ϴ�. �� ���ĺ��� �빮�ڴ� �ҹ��ڷ� �ҹ��ڴ� �빮�ڷ� ��ȯ�ؼ� ����ϴ� �ڵ带 �ۼ��� ������.
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
