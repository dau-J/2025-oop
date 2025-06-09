#include <iostream>
using namespace std;
int main() {
    int iarr[] = { 10, 20, 30, 77 };
    double darr[] = { 3.14, 7.99, -1.1 };
    string sarr[] = { "딸기","바나나","우유" };


    /*범위기반 for문은 배열을 처음부터 끝까지 (0번 인덱스부터 끝까지) 흝을떄만 사용
    방향도 고정, 점프불가 , 오직배열에서만 가능 
    생각보다 배열 처음부터 끝까지 진행하는 반복문이 매우 자주 사용됨.
    */
    //for (int i = 0; i < 4; i++) cout << iarr[i] << "\t";  // 범위기반으로변경
        //cout << endl;
    for (int n : iarr) cout << n << "\t";  
        cout << endl;
    //  for (int i = 0; i < 3; i++) cout << darr[i] << "\t";
    for (double d : darr) cout << d << "\t";
        cout << endl;
    //for (int i = 0; i < 3; i++) cout << sarr[i] << "\t"; 
    for (string s : sarr) cout << s << "\t";
        cout << endl;
    return 0;
}