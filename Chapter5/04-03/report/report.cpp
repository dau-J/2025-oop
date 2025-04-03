#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string name;
    double score;
    double sum = 0;
    int count = 0;

    string topStudent;
    double max = -101;

    ifstream fin("scores.txt");
    if (!fin) {
        cerr << "Error opening scores.txt" << endl;
        return 1;
    }
    fin.close();

    while (fin >> name >> score) {
        sum += score;
        count++;

        if (score > max) {
            max = score;
            topStudent = name;
        }
    }
    double average = (count > 0) ? sum / count : 0;

    ofstream fout("result.txt");
    if (!fout) {
        cerr << "Error opening result.txt" << endl;
        return 1;
    }

    fout << fixed << setprecision(2);
    fout << "총 " << count << " 명" << endl;
    fout << "합계: " << sum << endl;
    fout << "평균: " << average << endl;
    fout << "최고점: " << topStudent << " " << max << endl;
    fout.close();
    cout << "Results saved in result.txt." << endl;
    
    return 0;
}
