#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int n,sum=0;

    ifstream fin;     // cin과 통일성 위해서 변수명을 fin 많이 함
    fin.open("a.txt");  // 100 200 300 400 500 들어있다고 가정

    while (fin >> n)
    {
        sum +=n;
    }

    fin.close();
    cout << "합 = " << sum << endl;
    
}