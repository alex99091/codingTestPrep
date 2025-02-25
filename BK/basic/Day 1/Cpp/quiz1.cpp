/*
문제 설명
문자열 str이 주어질 때, str을 출력하는 코드를 작성해 보세요.
*/

/* 1. 문자열출력하기 */
#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    getline(cin, str);
    cout << str << endl;
    return 0;
}