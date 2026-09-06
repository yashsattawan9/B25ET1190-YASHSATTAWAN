#include <iostream>
using namespace std;
void read(int array[], int n);
void display(int array[], int n);
void Sort(int array[], int n);
void Swap(int &a, int &b);
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int array[n];
    cout << "Enter the array elements:\n";
    read(array, n);
    cout << "Original Array:\n";
    display(array, n);
    Sort(array, n);
    cout << "\nSorted Array:\n";
    display(array, n);
    return 0;
}
void read(int array[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
}
void display(int array[], int n) {
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
}
void Swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
void Sort(int array[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                Swap(array[j], array[j + 1]);
            }
        }
    }
}
