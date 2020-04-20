#include <iostream> 
using namespace std; 
/*
int raiseToPower(int base, int exponent) {   
	// function declaration 
	int result = 1;   
	for (int i = 0; i < exponent; i = i + 1) {     
		result = result * base;   
	}   
	return result;  // return type은 function의 type과같아야함 
}

int main() {
	int threeExpFour = raiseToPower(3, 4);  // function invocation 
	cout << "3^4 is " << threeExpFour << endl;   
	int sixExpFive = raiseToPower(6, 5);   
	cout << "6^5 is " << sixExpFive << endl;   
	int twelveExpTen = raiseToPower(12, 10);   
	cout << "12^10 is " << twelveExpTen << endl;   return 0; 
}
*/
void raiseToPower(int base, int exponent) {
	// function declaration 
	int result = 1;
	for (int i = 0; i < exponent; i = i + 1) {
		result = result * base;
	}
	cout << base << "^" << exponent << "is " << result << endl;
	//return result;  // return type은 function의 type과같아야함 
}
int main() {
	raiseToPower(3, 4);
	raiseToPower(6, 5);
	raiseToPower(12, 10);
	return 0;
}
/*
int main() {  
	int threeExpFour = 1;   
	for (int i = 0; i < 4; i = i + 1) {     
		threeExpFour = threeExpFour * 3;   
	}   
	cout << "3^4 is " << threeExpFour << endl;   
	int sixExpFive = 1;   
	for (int i = 0; i < 5; i = i + 1) {     
		sixExpFive = sixExpFive * 6;   
	}   
	cout << "6^5 is " << sixExpFive << endl;   
	int twelveExpTen = 1;   
	for (int i = 0; i < 10; i = i + 1) { 
		twelveExpTen = twelveExpTen * 12; 
	}   
	cout << "12^10 is " << twelveExpTen << endl;   
	return 0;
}
*/