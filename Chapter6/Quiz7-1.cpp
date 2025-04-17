#include<iostream>
#include<math.h>
#include<cctype>

using namespace std;

void myswap(int &a,int &b);
void mysecondswap(int *a,int *b);

int main(){
    //Quiz 7번
    //(1) 라이브러리 함수사용
    /*
    cout << a << endl; //100
    cout << &a << endl; //a의 실제주소 16진수로 나옴
    cout << p << endl; //같은주소
    cout << *p << endl; //100
    */
   int x,y;
   cout << "두정수 입력 : ";
   cin >> x >> y;

   cout << "x = " << x << ", y = " << y << endl;
   myswap(x,y);
   cout << "x = " << x << ", y = " << y << endl;

   return 0;
}
void myswap(int &a , int &b){
   cout << " a = " << a << ", b =  " << b << endl;
   int temp;
   temp = a;
   a = b;
   b = temp;
}


//(2) 포인터 사용
    // int a = 100;
    // int *p //p는 포인터(변수). 포인터는 정수 아니고 주소값을 가집니다.
    /*
        앞에 int의 의미는 p가 가리키고 있는 곳에 정수가 있다는 의미
        p앞에 붙은 *의 의미는 *p가 가리키고 있는곳에 들어있는 내용을 의미
    
    p = &a; //이제 p는 a가 ram의 어디 번지에 저장되었는지 알고있다. 즉 a의 위치를 정확히 알고 있게 됩니다. 
    */

    /*
int main(){
    //Quiz 7번
    //(1) 라이브러리 함수사용
    //(2) 포인터 사용
    // int a = 100;
    // int *p //p는 포인터(변수). 포인터는 정수 아니고 주소값을 가집니다.
        앞에 int의 의미는 p가 가리키고 있는 곳에 정수가 있다는 의미
        p앞에 붙은 *의 의미는 *p가 가리키고 있는곳에 들어있는 내용을 의미
    // p = &a; //이제 p는 a가 ram의 어디 번지에 저장되었는지 알고있다. 즉 a의 위치를 정확히 알고 있게 됩니다. 

    cout << a << endl; //100
    cout << &a << endl; //a의 실제주소 16진수로 나옴
    cout << p << endl; //같은주소
    cout << *p << endl; //100

   int x,y;
   cout << "두정수 입력 : ";
   cin >> x >> y;

   cout << "x = " << x << ", y = " << y << endl;
   myswap(x,y);
   cout << "x = " << x << ", y = " << y << endl;

   return 0;
}
*/

void mysecondswap(int *a , int *b){
   int temp;
   temp = *a;
   *a = *b;
   *b = temp;
}