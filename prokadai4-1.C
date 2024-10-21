#include <iostream>
using namespace std;

int main(){
    // 最大25文字の文字列を格納する配列を初期化
    char A[25] = {0};
    
    // ユーザーに文字列の入力を求める
    cout<<"文字列を入力してください; ";
    cin>>A;
    
    // 文字列の長さを計算するループ
    for(int i= 0; i<25; ++i){
        // null文字（文字列の終端）を見つけたら
        if(A[i] == '\0'){
            // 文字列の長さを出力
            cout<<"文字列の長さは; "<<i<<endl;
            // ループを抜ける
            break;
        }
    }
    
    return 0;
}