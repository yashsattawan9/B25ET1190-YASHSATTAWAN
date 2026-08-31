PROGRAM

#include <iostream>
using namespace std;

void printPascalTriangle(int rows) {
for (int i = 0; i < rows; i++) {
for (int space = 0; space < rows - i - 1; space++) {
cout << " ";
}
long long value = 1; 
for (int j = 0; j <= i; j++) {
cout << value << " ";
value = value * (i - j) / (j + 1);
}
cout << endl;
}
}
int main() {
int rows;
cout << "Enter the number of rows: ";
cin >> rows;
printPascalTriangle(rows);
return 0;
}

OUTPUT
