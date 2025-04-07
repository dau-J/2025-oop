#include <iostream>
 using namespace std;
 int main()
 {
 const double PI = 3.141592;
 double r, area, cir, vol;
 cout << "반지름 입력: ";
 cin >> r;
 area = PI * r * r;
 cir = 2 * PI * r;
 vol = 4.0/3 * PI * r * r * r;
 cout << "반지름: " << r << endl;
 cout << "원의 면적: " << area << endl;
 cout << "원의 둘레: " << cir << endl;
 cout << "구의 부피: " << vol << endl;
 return 0;
 }