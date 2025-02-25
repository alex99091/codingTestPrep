/*
    문제 설명
    문자열 str과 정수 n이 주어집니다.
    str이 n번 반복된 문자열을 만들어 출력하는 코드를 작성해 보세요.
*/
#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    int n;
    cin >> str >> n;
    for (int i = 0; i < n; i++) {
       cout << str;
    }
    
    return 0;
}