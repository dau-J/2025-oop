#include <iostream>

using namespace std;

int main() {
    long long time;
    cout << "초 입력: ";
    cin >> time;
    
    long long hour = time / 3600;
    long long minute = (time % 3600) / 60;
    long long sec = time % 60;
    
    cout << hour << "시간 " << minute << "분 " << sec << "초입니다." << endl;
    
    return 0;
}
