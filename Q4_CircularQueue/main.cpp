#include <iostream>
using namespace std;

const int MAX = 5;
int cqueue[MAX];
int front = -1;
int rear = -1;

void enqueue(int value) {
    // Cek status penuh dengan Modulo
    if ((rear + 1) % MAX == front) {
        cout << "Queue Overflow!\n";
    } else {
        if (front == -1) front = 0;
        rear = (rear + 1) % MAX; // Geser rear secara melingkar
        cqueue[rear] = value;
    }
}

void dequeue() {
    if (front == -1) {
        cout << "Queue Underflow!\n";
    } else {
        // Jika hanya sisa 1 elemen, reset antrean
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % MAX; // Geser front secara melingkar
        }
    }
}

void display() {
    if (front == -1) {
        cout << "Queue kosong.\n";
    } else {
        cout << "Queue: ";
        int i = front;
        while (true) {
            cout << cqueue[i] << " ";
            if (i == rear) break;
            i = (i + 1) % MAX;
        }
        cout << "\n";
    }
}

int main() {
    // EKSEKUSI 10 LANGKAH WAJIB

    // Langkah 1-5: Enqueue 5 nilai
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    // Langkah 6-7: Dequeue dua kali (menghapus 10 dan 20)
    dequeue();
    dequeue();

    // Langkah 8-9: Enqueue 60 dan 70 (membuktikan array melingkar ke indeks awal)
    enqueue(60);
    enqueue(70);

    // Langkah 10: Display queue (Hasil yang diharapkan: 30 40 50 60 70)
    display();

    return 0;
}
