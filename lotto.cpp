#include <iostream>
#include <set>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    set<int> lotto;
    srand((unsigned)time(0));
    while (lotto.size() < 6) {
        int num = rand() % 46 + 1; 
        lotto.insert(num); 
    }
    cout << "로또 번호: ";
    for (int n : lotto) cout << n << ' ';
    cout << endl;
    return 0;
}
