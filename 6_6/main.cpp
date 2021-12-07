#include <iostream>
#include "string"

using namespace std;

int StrLen(string arr) {
    int i = 0;
    while (arr[i] != '\0') {
        i++;
    }
    return i;
}

int fact(int value) {
    if (value == 0) {
        return 0;
    }
    if (value == 1) { return 1; }
    return value * fact(value - 1);
}

int main() {
    string string1;
    int counter;
    getline(cin, string1);
    counter = StrLen(string1);
    int ans = fact(counter);
    int count;
    for (int i = 0; i < StrLen(string1) + 1; i++) {
        count = 1;
        for (int j = i + 1; j < StrLen(string1) + 1; j++) {
            if (string1[i] == string1[j]) {
                count++;
            }


        }
        if (count > 1) {
            ans = ans / count;
            count = 1;
        }
    }
    cout << ans;

    return 0;
}
