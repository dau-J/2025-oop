#include <iostream>

using namespace std;

int main() {
    long long hour, minute, sec;
    cout << "시 분 초 입력: ";
    cin >> hour >> minute >> sec;
    
    long long seconds = (hour * 3600) + (minute * 60) + sec;
    
    cout << "총 " << seconds << "초입니다." << endl;
    
    return 0;
}