#include <iostream>
#include <string>
//variant# 5

using namespace std;

int StrLen(string arr) {
    int i = 0;
    while (arr[i] != '\0') {
        i++;
    }
    return i;
}

string Delete(string str, int mid, int len) {
    str.erase(mid + 1, len - mid);
    return str;
}

int main() {
    int count;
    char buf[80];
    string *STR;
    string s;
    cout << "Enter num of strings : ";
    cin >> count;
    STR = new string[count + 1];
    for (int i = 0; i < count + 1; i++) {
        if (i > 0) {
            cout << "Enter string #" << i << " : ";
            cin.getline(buf, 80, '\n');
            s = buf;
            STR[i] = s;
        } else {
            cin.getline(buf, 80, '\n');
            s = buf;
            STR[i] = s;
        }
    }
    int sum = 0;

    for (int i = 1; i < count + 1; i++) {
        sum += StrLen(STR[i]);
    }
    int mid = sum / count;
    for (int i = 1; i < count + 1; i++) {
        if (StrLen(STR[i]) >= mid) {

            STR[i] = Delete(STR[i], mid - 1, StrLen(STR[i]));
        } else {
            for (int j = StrLen(STR[i]); j < mid; j++) {
                STR[i].insert(j, " ");
            }
        }
    }
    for (int i = 1; i < count + 1; i++) {
        cout << "String # " << i << " : ";
        cout << STR[i] << endl;
    }

    return 0;
}