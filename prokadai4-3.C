#include <iostream>
using namespace std;

int main() {
    char A[100] = { ' ' }; // 配列を初期化する
    int numb = 30;

    // "PET" を配列に格納
    for (int i = 0; i < numb; ++i) {
        A[i * 3] = 'P';
        A[i * 3 + 1] = 'E';
        A[i * 3 + 2] = 'T';
    }

    // 配列の内容を出力
    for (int i = 0; i < numb * 3; ++i) {
        cout << A[i];
    }
    cout << endl;

    return 0;
}