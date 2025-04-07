#include<iostream>  //소스복사 (전처리기)
#include"iu.h"
#include"보겸.h"

using namespace std;
using namespace iu; //변수 a,b,c (iu.h)

int main(){
    cout << "강아지는 \"멍멍\" , 고양이는 \"야옹\" " << endl;

    cout << "아이유" << endl;
    cout << a << " " << b << " " <<  c << endl;
    cout << "보겸" << endl;
    cout << bokyeom::a << endl;

    return 0;
}