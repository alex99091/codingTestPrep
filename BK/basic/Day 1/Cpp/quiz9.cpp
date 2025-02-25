/*
홀짝 구분하기
제출 내역
문제 설명
자연수 n이 입력으로 주어졌을 때 만약 n이 짝수이면 "n is even"을, 홀수이면 "n is odd"를 출력하는 코드를 작성해 보세요.

제한사항
1 ≤ n ≤ 1,000
*/

#include <iostream>

using namespace std;

int main(void) {
    int n;
    string str;
    cin >> n;

    str = n % 2 == 1 ? " is odd" : " is even";
    cout << n << str << endl;

    return 0;
}