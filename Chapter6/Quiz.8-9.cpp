    /* 
    Quiz 8
    어디가 틀렸는지, 어떤 라이브러리 함수를 이용하면 해결가능한지.
    getline(cin, input) < iostream, string 에서 사용가능
    추가로 위에 cin >> 이거 받았으면
    cin.ignore(); < 이걸로 버퍼 지워야함
    */

    #include <iostream>
    #include <string>
    using namespace std;

    int main() {
        string input;
        cout << "나는 배고프다를 영어 문장으로 작성하세요." << endl;
        getline(cin, input);
        if (input == "I am hungry" || input == "i am hungry")
            cout << "맞았습니다." << endl;
        else
            cout << input << " 은 답이 아닙니다." << endl;
            return 0;
    }

    /*
    Quiz 9) 함수로 변환. 근데 getline()으로 무조건 바꾸긴해야할듯
    */
   /*
    cin.ignore();

    string input;
    cout << "나는 배고프다를 영어 문장으로 작성하시오." << endl;
    getline(cin, input);
    kor_to_eng(input);

    /*Quiz 10) myavg()에 해당하는 함수 작성 */ 
    /*
    double k, e, m;
    cout << "국영수점수입력: ";
    cin >> k >> e >> m;
    cout << fixed << setprecision(2);
    cout << "평균은" << myavg(k, e, m) << " 입니다." << endl;
    return 0;
    }
    */
void kor_to_eng(string input)
{
    string result;
    if ((input == "i am hungry") || (input == "I am hungry"))
    {
        cout << "맞았습니다";
    }
    else
    {
        cout << "틀렸습니다.";
    }
    return; //void는 마지막에 return 해도 되고 안해도됨.
}

double myavg(double k, double e, double m)
{

    double average = (k + e + m) / 3;

    return average;
}
