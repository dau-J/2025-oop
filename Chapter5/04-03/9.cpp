//factorial c++
#include<iostream>
using namespace std;

int main(){
    int n,fact=1;

    cout << "몇 팩토리얼? ==> ";
    cin >> n;
    //a
    for(int i=1; i<=n; i++){
        fact *= i;
    }
    /* b
    for(int i=n; i>=1; i--){
        fact *= i;
    }
    */

    cout << n << "!은 " << fact << " 입니다." << endl;
}