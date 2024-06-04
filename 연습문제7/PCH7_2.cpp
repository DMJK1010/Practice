#include<iostream>

using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) : kick{ kick }, punch{ punch } {};
	Power(Power& p) { kick = p.kick; punch = p.punch; }
	void show() { cout << "kick=" << kick << ",punch=" << punch << endl; }
	void reset_a() { kick = 3; punch = 5; }
	void reset_b() { kick = 5; punch = 2; }
	void set(int kick, int punch) { this->kick = kick; this->punch = punch; }
	// 아래 함수 목록 수정 가능
	Power& operator++();
	Power operator++(int x);
	Power operator+(int op2);
	Power operator+(Power& op2);
};

// 메인 함수만 수정 X (클래스 일부 수정 가능)
// 
//============================구현 시작============================
// 문제 : PCH7_1에서 만들었던 연산자 오버로딩중 일부만 외부 프랜드 함수로 구현하라
// 출력 결과 참조



//============================구현 끝==============================

int main() {
	cin >> boolalpha;
	cout << boolalpha;
	Power a(3, 5);  // reset 값은 kick = 3; punch = 5; 임
	Power b(0, 0);	// reset 값은 kick = 5; punch = 2; 임
	Power c(0, 0);
	cout << "a: "; a.show();
	++a;
	cout << "++a" << endl;
	cout << "a: "; a.show();
	cout << "-------------------" << endl;
	a.reset_a();

	cout << "a: "; a.show();
	cout << "b: "; b.show();
	cout << "b = a++" << endl;
	b = a++;
	cout << "a: "; a.show();
	cout << "b: "; b.show();
	cout << "-------------------" << endl;
	a.reset_a();
	b.set(0, 0);

	cout << "a: "; a.show();
	cout << "b: "; b.show();
	cout << "b = a + 2" << endl;
	b = a + 2;
	cout << "a: "; a.show();
	cout << "b: "; b.show();
	cout << "-------------------" << endl;
	a.reset_a();
	b.reset_b();
	c.set(0, 0);

	cout << "a: "; a.show();
	cout << "b: "; b.show();
	cout << "c: "; c.show();
	cout << "c = a+b" << endl;
	c = a + b;
	cout << "c: "; c.show();
	cout << "-------------------" << endl;

	return 0;
}

/*
출력 결과
a: kick=3,punch=5
++a
a: kick=4,punch=6
-------------------
a: kick=3,punch=5
b: kick=0,punch=0
b = a++
a: kick=4,punch=6
b: kick=3,punch=5
-------------------
a: kick=3,punch=5
b: kick=0,punch=0
b = a + 2
a: kick=3,punch=5
b: kick=5,punch=7
-------------------
a: kick=3,punch=5
b: kick=5,punch=2
c: kick=0,punch=0
c = a+b
c: kick=8,punch=7

*/
