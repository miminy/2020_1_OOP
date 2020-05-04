#ifndef EXP_H
#define EXP_H

class Exp {
	int exp; // 지수부
	int base; // 베이스
public:
	Exp(int b, int e) { base = b; exp = e; }
	Exp(int b) { base = b; exp = 1; }
	Exp() { base = 1; exp = 1; }
	
	// 생성자들을 위임생성자를 이용하여 바꾸면 다음과 같다.
	// Exp(int b, int e) { base = b; exp = e; } // 타겟 생성자
	// Exp(int b) : Exp(b, 1) { } // 위임 생성자
	// Exp() : Exp(1, 1) { } // 위임 생성자

	int getExp() { return exp; }
	int getBase() { return base; }
	int getValue();
	bool equals(Exp b);
};

#endif

