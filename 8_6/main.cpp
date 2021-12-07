#include <iostream>
#include <string>

using namespace std;

int StrLen(string arr) {
    int i = 0;
    while (arr[i] != '\0') {
        i++;
    }
    return i;
}

int takeInt(int min, int max) {
    bool isInCorrect;
    int num;
    do {
        isInCorrect = false;
        cin >> num;
        if (!cin.good()) {
            isInCorrect = true;
            cout << "Incorrect data, try again!" << endl;
            cin.clear();
            while (cin.get() != '\n');
        }
        if (cin.good() && (num < min || num > max)) {
            isInCorrect = true;
            cout << "Incorrect value, try again!" << endl;
        }
    } while (isInCorrect);
    return num;
}

int main() {
    string str1;
    string str2;
    int t;
    cout << "Enter num of tests : ";
    t = takeInt(1, INT16_MAX);
    while (t > 0) {
        cout << "Enter first string : ";
        cin >> str1;
        cout << "Enter second string : ";
        cin >> str2;

        int j;

        for (int i = 0; i < StrLen(str1); i++) { //searching of start element
            if (str1[i] == str2[0]) {
                j = i;
            }
        }
        int counter = 0;
        for (int i = j; i < StrLen(str1); i++) {
            if (str1[i] == str2[counter]) {
                cout << str1[i] << endl;
                counter++;
            } else { break; }
        }
        int counter1 = counter;
        if (counter1 == StrLen(str2)) {
            cout << "YES" << endl;
        } else {
            for (int i = j + counter1 - 2; i > 0; i--) {
                counter++;

                if (str1[i] == str2[counter - 1]) {
                    cout << "str1[i] = " << str1[i] << endl;
                    cout << counter << endl;
                    cout << "str2[counter] = " << str2[counter - 1] << endl;

                } else {
                    counter--;
                    break;
                }
            }
        }
        
        if (counter == StrLen(str2)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
            cout << counter;
        }
        t--;

    }


    return 0;
}
