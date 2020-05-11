#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v; // 정수만 삽입 가능한 벡터 생성

	v.push_back(1); // 벡터에 정수 1 삽입
	v.push_back(2); // 벡터에 정수 2 삽입
	v.push_back(3); // 벡터에 정수 3 삽입

	for (int i = 0; i < v.size(); i++) // 벡터의 모든 원소 출력
		cout << v[i] << " "; // v[i]는 벡터의 i 번째 원소
	cout << endl;

	v[0] = 10; // 벡터의 첫 번째 원소를 10으로 변경
	int n = v[2]; // n에 3이 저장
	v.at(2) = 5; // 벡터의 3 번째 원소를 5로 변경

	for (int i = 0; i < v.size(); i++) // 벡터의 모든 원소 출력
		cout << v[i] << " "; // v[i]는 벡터의 i 번째 원소
	cout << endl;
}