#include <iostream>
#include <thread>
class DummyClass {
public:
	DummyClass()
	{}
	DummyClass(const DummyClass& obj)
	{}
	void sampleMemberFunction(int x)
	{
		std::cout << "sampleMemberFunctionÀÇ x : " << x << std::endl;
	}
};
int main() {
	DummyClass dummyObj;
	int x = 10;
	std::thread threadObj(&DummyClass::sampleMemberFunction, &dummyObj, x);
	threadObj.join();
	return 0;
}