#ifndef CIRCLE_H
 #define CIRCLE_H
 /* 이 부분에 p. 20 코드 그대로 가져오세요. */ 
 #include <iostream>
 #include <cassert>
 using namespace std;
 /* 클래스 정의 : 데이터 멤버 1개, 생성자 3종류, 소멸자, 멤버 함수 4개 */
 class Circle
 {
 private: 
double radius;                                                               
public:
 Circle(double radius);           
Circle();                        
Circle(const Circle& circle);    
~Circle();                       
// 파라미터 생성자
// 기본 생성자   
// 복사 생성자
// 소멸자
void setRadius(double radius);   // set
 double getRadius() const;        
// get
 double getArea() const;          
double getPerimeter() const;     
};
#endif