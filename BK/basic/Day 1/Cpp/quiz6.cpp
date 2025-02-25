/*
    덧셈식 출력하기
    제출 내역
    문제 설명
    두 정수 a, b가 주어질 때 다음과 같은 형태의 계산식을 출력하는 코드를 작성해 보세요.

    a + b = c
    제한사항
    1 ≤ a, b ≤ 100
*/

#include <iostream>

using namespace std;

int main(void) {
    int a, b;
    cin >> a >> b;
    cout << a << " + " << b << " = " << (a+b) << endl;
    return 0;
}