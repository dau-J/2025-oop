#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream fin("triangle.txt");
    if (!fin) {  
        cerr << "파일을 열 수 없습니다." << endl;
        return 1;
    }

    ofstream fout("triangle_result.txt");
    if (!fout) {  
        cerr << "파일을 생성할 수 없습니다." << endl;
        return 1;
    }

    int num, a, b, c;
    while (fin >> num >> a >> b >> c) {
        // 삼각형 조건 (두 변의 합 > 나머지 한 변)
        if (a + b <= c || a + c <= b || b + c <= a)
            fout << num << " X" << endl;  // 삼각형이 아님
        else if (a == b && b == c)
            fout << num << " O 정삼각형" << endl;  // 정삼각형
        else if (a == b || b == c || a == c)
            fout << num << " O 이등변삼각형" << endl;  // 이등변삼각형
        else
            fout << num << " O" << endl;  // 일반 삼각형
    }
    cout << "완료. 출력파일을 확인해보세요." << endl;
    fin.close();
    fout.close();
    return 0;
}
