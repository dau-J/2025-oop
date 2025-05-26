#include <iostream>  // 표준 입출력 사용을 위한 헤더 파일
using namespace std; // std 네임스페이스를 사용하겠다는 선언

// 원(Circle)을 나타내는 클래스 선언
class Circle {
private:
    double radius;  // 반지름을 저장하는 멤버 변수 (private: 외부에서 직접 접근 불가)

public:
    // 반지름을 반환하는 멤버 함수 (읽기 전용 함수)
    double getRadius() const;

    // 원의 넓이를 계산하여 반환하는 멤버 함수
    double getArea() const;

    // 원의 둘레를 계산하여 반환하는 멤버 함수
    double getPerimeter() const;

    // 반지름 값을 설정하는 멤버 함수
    void setRadius(double value);
};

// 반지름을 반환하는 함수 정의
double Circle::getRadius() const {
    return radius;  // 현재 객체의 반지름 반환
}

// 원의 넓이를 계산하는 함수 정의
double Circle::getArea() const {
    const double PI = 3.141592;             // 원주율 상수 정의
    return (PI * radius * radius);          // 넓이 = π × r²
}

// 원의 둘레를 계산하는 함수 정의
double Circle::getPerimeter() const {
    const double PI = 3.141592;             // 원주율 상수 정의
    return (2 * PI * radius);               // 둘레 = 2 × π × r
}

// 반지름 값을 설정하는 함수 정의
void Circle::setRadius(double value) {
    radius = value;                         // 매개변수로 받은 값을 멤버 변수에 대입
}

// main 함수: 프로그램 실행 시작 지점
int main() {
    cout << "Circle 1" << endl;             // Circle 1 출력
    Circle circle1;                         // 첫 번째 원 객체 생성
    circle1.setRadius(10.0);                // 반지름 10.0 설정
    cout << "반지름: " << circle1.getRadius() << endl;       // 반지름 출력
    cout << "넓이: " << circle1.getArea() << endl;           // 넓이 출력
    cout << "둘레: " << circle1.getPerimeter() << endl << endl; // 둘레 출력

    cout << "Circle 2" << endl;             // Circle 2 출력
    Circle circle2;                         // 두 번째 원 객체 생성
    circle2.setRadius(20.0);                // 반지름 20.0 설정
    cout << "반지름: " << circle2.getRadius() << endl;       // 반지름 출력
    cout << "넓이: " << circle2.getArea() << endl;           // 넓이 출력
    cout << "둘레: " << circle2.getPerimeter() << endl;     // 둘레 출력

    return 0;                               // 프로그램 정상 종료
}