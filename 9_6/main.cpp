#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int CH_INT(char str) {

    if ((int) str > 47 && (int) str < 58) {
        return (int) str - 48;
    }
    return 0;
}

int main() {
    string str;
    cout << "Enter your string : ";
    getline(cin, str);
    int per;
    int sum = 0;
    for (int i = 0; i < str.length(); i++) {
        per = (int) str[i];
        if (per >= 48 && per <= 57) {
            int j = i;
            int m = j;
            int counter = 0;
            while ((int) str[j] >= 48 && (int) str[j] <= 57) {
                counter++;
                j++;
                i++;
            }
            j = m;
            while ((int) str[j] >= 48 && (int) str[j] <= 57) {
                sum += pow(10, counter - 1) * CH_INT(str[j]);
                counter--;
                j++;

            }
        }
    }

    cout <<"SUM = " << sum;
    return 0;
}
