#include <iostream>
using namespace std;

int main() {
    string input;
    getline(cin, input);  // 讀取輸入的一行文字
    
    // 定義 ASCII 表中字元的相對位置
    string keyboard = " `1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    
    for (char c : input) {
        if (c >= 32 && c <= 125) {  // 判斷是否為 ASCII 表中的字元
            // 在 keyboard 字串中找到 c 字元的位置
            size_t pos = keyboard.find(c);
            if (pos != string::npos && pos + 1 < keyboard.length()) {  // 確保找到且右邊還有字元
                cout << keyboard[pos + 1];  // 輸出右邊的字元
            } else {
                cout << c;  // 若無法轉換則輸出原字元
            }
        } else {
            cout << c;  // 若非 ASCII 表中的字元則輸出原字元
        }
    }
    cout << endl;  // 換行
    
    return 0;
}