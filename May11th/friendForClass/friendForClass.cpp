#include <iostream>
#include <cstring>
using namespace std;

class Girl;  // Girl이라는 클래스의 이름을 미리 알림

class Boy
{
private:
    int height;
    friend class Girl;
    // Girl 클래스는 Boy 클래스의 private멤버 직접 접근 가능
public:
    Boy(int n) : height(n) {}
    void ShowYourFriendInfo(Girl& frn);
};
class Girl
{
private:
    char phNum[20];
public:
    Girl(const char num[])
    {
        strcpy_s(phNum, strlen(num) + 1, num);
    }
    void ShowYourFriendInfo(Boy& frn);
    friend class Boy;
};
void Boy::ShowYourFriendInfo(Girl& frn)
{
    cout << "Her phone number: " << frn.phNum << endl;
}

void Girl::ShowYourFriendInfo(Boy& frn)
{
    cout << "His height: " << frn.height << endl;
}

int main(void)
{
    Boy boy(170);
    Girl girl("010-1234-5678");

    boy.ShowYourFriendInfo(girl);
    girl.ShowYourFriendInfo(boy);
    return 0;
}