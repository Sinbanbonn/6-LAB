#include <iostream>
// variant#5

using namespace std;

int main() {
    char str1[80];
    char word[80];

    cout << "Enter your text : ";
    cin.getline(str1, 80);
    char str2[80];
    strcpy(str2, str1);
    cout << "Enter your word : ";
    cin.getline(word, 80);
    int counter = 0;
    for (int i = 0; i < strlen(str1); i++) {
        for (int j = 0; j < strlen(word); j++) {
            if (word[j] == str1[i]) {
                i++;
                counter++;
                if (counter == strlen(word)) {
                    str2[i] = 'O';
                }
            } else {
                j = strlen(word);
                counter = 0;
            }
        }

    }
    cout << str2;

    return 0;
}
