#include <iostream>
using namespace std;

int main() {
    int sum_even = 0, sum_odd = 0;
    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            sum_even += i;
        }
    }
    cout << "Sum of even numbers from 1 to 50 is: " << sum_even << endl;
    return 0;
