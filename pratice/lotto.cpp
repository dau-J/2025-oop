#include <iostream>
#include <vector>
#include <set>
#include <cstdlib>
#include <ctime>

using namespace std;

vector<int> generateLottoNumbers() {
    set<int> lottoNumbers;
    while (lottoNumbers.size() < 6) {
        int num = rand() % 45 + 1; // 1~45 사이의 숫자 생성
        lottoNumbers.insert(num);
    }
    return vector<int>(lottoNumbers.begin(), lottoNumbers.end());
}

int main() {
    srand(time(0)); // 랜덤 시드 초기화
    
    vector<int> lottoNumbers = generateLottoNumbers();
    
    cout << "추천 로또 번호: ";
    for (int num : lottoNumbers) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
