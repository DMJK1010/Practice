#include<iostream>

using namespace std;

class Adder {
protected:
	int add(int a, int b) { return a + b; }
};

class Subtractor {
protected:
	int minus(int a, int b) { return a - b; }
};

// 구현 부분을 제외한 부분은 수정 X

//============================구현 시작============================
// 문제 : 출력 결과를 보고 Adder와 Subtractor를 다중 상속받는 Calculator를 작성하라



//============================구현 끝==============================

// 구현 부분을 제외한 부분은 수정 X

int main() {
	Calculator handCalculator;
	cout << "2 + 4 = "
		<< handCalculator.calc('+', 2, 4) << endl;
	cout << "100 - 8 = "
		<< handCalculator.calc('-', 100, 8) << endl;
	return 0;
}

/*
출력 결과
2 + 4 = 6
100 - 8 = 92
*/
