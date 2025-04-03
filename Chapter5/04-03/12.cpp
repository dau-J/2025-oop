//앞101 문제에서합을cout이아닌다른파일(numbers_sum.txt)
//에출력하세요. (cout으로는 Bye! 만 출력)

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int n,sum=0;

    ifstream fin;
    fin.open("a.txt");  
    while (fin >> n)
    {
        sum +=n;
    }
    fin.close();
   
    ofstream fout("sum.txt");
    fout << "sum = " << sum << endl;
    fout.close();
    cout << "Bye!" << endl;
}

/*
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int n,sum=0;

    ifstream fin;
    fin.open("a.txt");  
    if(!fin){
        cout << "a.txt를 못 열었습니다." << endl;
        return -1;
    }
    while (fin >> n){ sum +=n; }
    fin.close();

    ofstream fout("sum.txt");
    if(!fout){
        cout << "sum.txt를 못 열었어요." << endl;
        return -1;
    }
    fout << "sum = " << sum << endl;
    fout.close();
    cout << "Bye!" << endl;
}
    */