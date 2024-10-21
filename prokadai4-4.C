#include <iostream>
using namespace std;

int main(){
    char A[25] = {0}; //配列の初期化
    cout<<"文字列を入力してください; ";
    cin>>A;
    int count = 0;
    //文字数のカウント
    while(A[count] != '\0' && count <25){
        if(A[count]>= 'A' && A[count] <= 'Z'){ //大文字の取り出し
            cout<<A[count];
        }
        count++;
    }
    cout<<endl; //改行
    return 0;
}