#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0, remainder, original;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    // Check if original number and reversed are the same
    if (original == reversed)
        cout << original << " is a palindrome." << endl;
    else
        cout << original << " is not a palindrome." << endl;

    return 0;
}

