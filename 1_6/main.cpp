#include <iostream>

using namespace std;
// variant#5
int main() {
    char str[80];
    cout << "String should consist of 1 and 0 : ";

    int counter1  ;
    do {
        counter1 = 0 ;
        cin.getline(str , 80);
        for (int i = 0; i < strlen(str); i++) {
            if (str[i] != '1' && str[i] != '0' && str[i] != ' ' && str[i] != '\0') {
                counter1++;

            } }
        if (counter1 == 0) {

            break ;
        } else {
            cin.clear();
            cout << "String should consist 0 and 1! Try yet ! ";

        }


    }
    while(true) ;


    int counterOnes = 0;
    int counter = 0;
    int FinalCounter = 0;
    for (char i: str) {
        if (i != ' ' && i != '\0') {
            counter++;
        }
        if (i == '1') {
            counterOnes++;
        }
        if (i == ' ' || i == '\0') {
            if (counter % 2 != 0) {
                FinalCounter += counterOnes;
            }
            counter = 0;
            counterOnes = 0;
        }

    }
    cout << FinalCounter;

    return 0;
}