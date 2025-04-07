#include<iostream>
#include<iomanip>  // setw 함수 사용을 위한 헤더

using namespace std;

int main(){
    int size;

    do {
        cout << "표의 크기 입력(2~10): ";
        cin >> size;
    } while (size < 2 || size > 10);  // 유효성 검사

    // 곱셈 표 출력
    for(int i = 1; i <= size; i++){
        for(int j = 1; j <= size; j++){
            cout << setw(4) << i * j;  // 열 간격 맞추기 위해 setw 사용
        }
        cout << endl; 
    }
    /* whiile ver
    int i=1; 
    while(j<=size){
        int j =1;
        while(j<=size){
            cout << setw(4) << i*j
            j++;
        }
        i++;
        cout << endl;   
    }
    */
   //cout <<fixed << setprecison(3)<<a << endl //setprecison(3)을 변환 시킬수있는 다른방법강구
}
