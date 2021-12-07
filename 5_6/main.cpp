#include <iostream>
#include <cmath>
#include <string>

using namespace std;

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

long long takeLong(long long min, long long max) {
    bool isInCorrect;
    long long num;
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
    cout << "Enter  number of tests => ";
    int tests;
    tests = takeInt(1, INT16_MAX);

    while (tests > 0) {

        string str1, str2;
        long long l, m;

        cout << "Enter length of the final string => ";
        l = takeLong(1, +9222372036854775);
        cout << "Enter value of module => ";
        m = takeLong(1, +9222372036854775);
        cout << "Enter first string => ";
        cin >> str1;
        cout << "Enter second string => ";
        cin >> str2;

        if ((str1.length() + str2.length()) > l) {
            bool t = true;

            for (int i = l - str2.length(); i < str1.length(); i++) {
                if (str1[i] != str2[i - l + str2.length()]) {
                    t = false;
                }
            }
            int num = 0;
            if (t == true) {
                num++;
            }
            t = true;

            for (int i = l - str1.length(); i < str2.length(); i++) {
                if (str2[i] != str1[i - l + str1.length()]) {
                    t = false;
                }
            }

            if (t == true) {
                num++;
            }
            cout << "Num of combinations: " << num << endl;
        } else if ((str1.length() + str2.length()) == l) {
            cout << "Num of combinations = 2 " << endl;
        } else {
            cout << "Num of combinations = " << ( (long long )pow(26, l - str1.length() - str2.length()) * 2)%m
                 << endl;
        }
        cout << endl;

        tests--;
    }

    return 0;
}