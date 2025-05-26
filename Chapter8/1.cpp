#include <iostream>
#include <fstream>
#include <iomanip>
#include <algorithm>  // sort 함수 사용
using namespace std;

int main() {
    ifstream fin("scores.txt");
    ofstream fout("result.txt");

    if (!fin || !fout) {
        cout << "파일 없음" << endl;
        return 0;
    }

    const int MAX = 1000;  // 최대 인원 수 가정
    double arr[MAX];
    int count = 0;
    string name;
    double score;

    while (fin >> name >> score) {
        arr[count++] = score;
    }

    // 정렬
    sort(arr, arr + count);

    // 파일에 출력
    fout << fixed << setprecision(2);
    fout << "정렬된 점수 목록 (" << count << "명):" << endl;
    for (int i = 0; i < count; ++i) {
        fout << arr[i] << endl;
    }

    fin.close();
    fout.close();
    return 0;
}
