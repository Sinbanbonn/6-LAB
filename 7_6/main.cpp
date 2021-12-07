#include <iostream>
#include "string"

using namespace std;

bool check1(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != str[0]) return false;
    }
    return true;
}

bool check2(string str) {
    for (int i = 0; i < str.length() / 2; i++) {
        if (str[i] != str[str.length() - i - 1]) return false;

    }
    return true;
}

int main() {
    string str;
    cout << "Enter your string : " ;
    getline(cin , str ) ;
    if (check1(str)) cout << "-1";
    else {
        if (!check2(str)) cout << str.length();
        else {
            if (str[0] != str[1]) cout << str.length() - 1;
            else cout << str.length();
        }
    }
    return 0;
}