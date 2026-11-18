#include <iostream>
using namespace std;

const int MAX = 5;
int stackArray[MAX];
int top = -1;

void push() {
    if (top == MAX - 1) {
        cout << "Stack Overflow! Tidak dapat memasukkan data.\n";
    } else {
        int value;
        cout << "Masukkan nilai: ";
        cin >> value;
        top++;
        stackArray[top] = value;
        cout << value << " berhasil dimasukkan.\n";
    }
}

void pop() {
    if (top == -1) {
        cout << "Stack Underflow! Stack kosong.\n";
    } else {
        cout << stackArray[top] << " berhasil dihapus.\n";
        top--;
    }
}

void peek() {
    if (top == -1) {
        cout << "Stack kosong.\n";
    } else {
        cout << "Elemen teratas: " << stackArray[top] << "\n";
    }
}

void display() {
    if (top == -1) {
        cout << "Stack kosong.\n";
    } else {
        cout << "Isi Stack: ";
        for (int i = top; i >= 0; i--) {
            cout << stackArray[i] << " ";
        }
        cout << "\n";
    }
}

int main() {
    int pilihan;
    do {
        cout << "\n===== STACK MENU =====\n";
        cout << "1. Push  2. Pop  3. Peek  4. Display  5. Exit\n";
        cout << "Pilih operasi: ";
        cin >> pilihan;

        if (pilihan == 1) push();
        else if (pilihan == 2) pop();
        else if (pilihan == 3) peek();
        else if (pilihan == 4) display();
    } while (pilihan != 5);

    return 0;
}
