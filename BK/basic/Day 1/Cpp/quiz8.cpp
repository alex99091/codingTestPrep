/*
문자열 돌리기
제출 내역
문제 설명
문자열 str이 주어집니다.
문자열을 시계방향으로 90도 돌려서 아래 입출력 예와 같이 출력하는 코드를 작성해 보세요.

제한사항
1 ≤ str의 길이 ≤ 10
*/

#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;

    for(int i = 0; i < str.length(); i++) {
        cout << str[i] << endl;
    }
    return 0;
}