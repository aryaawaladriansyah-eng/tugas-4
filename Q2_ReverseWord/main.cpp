#include <iostream>
using namespace std;

int main() {
    char word[100];
    char stack[100];
    int top = -1;

    cout << "Enter a word: ";
    cin >> word;

    cout << "Original word: " << word << "\n";
    // 1. Proses Push (memasukkan karakter satu per satu dari kiri ke kanan)
    for (int i = 0; word[i] != '\0'; i++) {
        top++;
        stack[top] = word[i];
    }

    cout << "Reversed word: ";
    // 2. Proses Pop (mengeluarkan karakter dari atas stack/terbalik)
    while (top >= 0) {
        cout << stack[top];
        top--;
    }
    cout << "\n";

    return 0;
}
