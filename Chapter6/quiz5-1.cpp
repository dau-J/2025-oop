#include <iostream>
#include <cmath>
#include <cctype>

using namespace std;
int main(){ 
 /*
    Quiz 5 빈칸 채우기
    */
/*
    char ch;
    int count_alpha = 0, count_digit = 0, count_alnum = 0;
    cout << "자유롭게 작성하세요. (^D 종료)" << endl; // mac os 수정
    while (cin >> noskipws >> ch)                     // noskipws = 공백 인정
    {
        if (isalpha(ch)) // 헤더파일 안쓰려면 if((ch >='a' && ch <='z') || (ch >='A' && ch<='Z))
            count_alpha++;
        if (isdigit(ch))
            count_digit++;
        if (isalnum(ch))
            count_alnum++;

        // 방법1
        //  char Aresult = toupper(ch);
        //  cout << Aresult;

        // 방법2
        // cout << (char)toupper(ch);

        // 방법3
        cout << static_cast<char>(toupper(ch));
    }
    cout << "알파벳 개수 = " << count_alpha << endl;
    cout << "숫자 개수 = " << count_digit << endl;
    cout << "알파벳 혹은 숫자 개수 = " << count_alnum << endl;
 */
}