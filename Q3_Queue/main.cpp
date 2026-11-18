#include <iostream>
using namespace std;

const int MAX = 5;
int queueArray[MAX];
int front = -1;
int rear = -1;

void enqueue() {
    if (rear == MAX - 1) {
        cout << "Queue Overflow! Antrean penuh.\n";
    } else {
        int value;
        cout << "Masukkan nilai: ";
        cin >> value;

        if (front == -1) front = 0; // Inisialisasi data pertama

        rear++;
        queueArray[rear] = value;
        cout << value << " berhasil dimasukkan.\n";
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow! Antrean kosong.\n";
    } else {
        cout << queueArray[front] << " berhasil dihapus.\n";
        front++;
    }
}

void display() {
    if (front == -1 || front > rear) {
        cout << "Queue kosong.\n";
    } else {
        cout << "Isi Queue: ";
        for (int i = front; i <= rear; i++) {
            cout << queueArray[i] << " ";
        }
        cout << "\n";
    }
}

int main() {
    int pilihan;
    do {
        cout << "\n===== QUEUE MENU =====\n";
        cout << "1. Enqueue  2. Dequeue  3. Front (Lihat Depan)  4. Display  5. Exit\n";
        cout << "Pilih operasi: ";
        cin >> pilihan;

        if (pilihan == 1) enqueue();
        else if (pilihan == 2) dequeue();
        else if (pilihan == 3) {
            if (front != -1 && front <= rear)
                cout << "Elemen depan: " << queueArray[front] << "\n";
            else cout << "Queue kosong.\n";
        }
        else if (pilihan == 4) display();
    } while (pilihan != 5);

    return 0;
}
