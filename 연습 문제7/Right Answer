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
	Power& operator++();
	Power operator++(int x);
	bool operator!();
	Power operator+(int op2);
	Power operator+(Power& op2);
	Power& operator<<(int n);
};

// 구현 부분을 제외한 부분은 수정 X
// 
//============================구현 시작============================
// 문제 : 출력 결과를 보고 Adder와 Subtractor를 다중 상속받는 Calculator를 작성하라

Power& Power::operator++() {
	kick++;
	punch++;
	return *this;
}

Power Power::operator++(int x) {
	Power tmp(*this);
	kick++;
	punch++;
	return tmp;
}

bool Power::operator!() {
	if (kick == 0 && punch == 0) return true;
	else return false;
}

Power Power::operator+(int op2) {
	Power tmp(*this);
	tmp.kick += op2;
	tmp.punch += op2;
	return tmp;
}

Power Power::operator+(Power& op2) {
	Power tmp(*this);
	tmp.kick += op2.kick;
	tmp.punch += op2.punch;
	return tmp;
}

Power& Power::operator<<(int n) {
	this->kick += n;
	this->punch += n;
	return *this;
}

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
	if (!a) cout << "a의 파워가 0이다." << endl;
	else cout << "a의 파워가 0이 아니다." << endl;
	if (!b) cout << "b의 파워가 0이다." << endl;
	else cout << "b의 파워가 0이 아니다." << endl;
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
	a.reset_a();
	
	cout << "a: "; a.show();
	cout << "a << 3 << 5 << 6" << endl;
	a << 3 << 5 << 6;
	cout << "a: "; a.show();

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
a의 파워가 0이 아니다.
b의 파워가 0이다.
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
-------------------
a: kick=3,punch=5
a << 3 << 5 << 6
a: kick=17,punch=19
*/
