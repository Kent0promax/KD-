#include <iostream>
using namespace std;

int main(){
    // 25文字の配列を空白で初期化
    char A[25] = {" "};
    
    // ユーザーに文字列の入力を求める
    cout<<"文字列を入力せよ; ";
    cin >> A;

    // 文字列の長さをカウントする変数
    int count = 0;
    
    // 文字列の長さを計算するループ
    // null文字に達するか、配列の最大長に達するまで続ける
    while(A[count] != '\0' && count < 25){
        count++;
    }

    // 文字列を逆順に出力するループ
    for(int i = count; i>=0; --i){
        cout<<A[i];
    }
}