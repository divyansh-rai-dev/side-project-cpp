#include <iostream>
#include <string>
using namespace std;

int calculatedigit(const string cardnum) {
    int sum = cardnum[cardnum.size() - 1] - '0';

    for (int i = cardnum.size() - 2; i >= 0; i--) {
        int digit = cardnum[i] - '0';

        if ((cardnum.size() - 1 - i) % 2 == 1) {
            digit *= 2;

            if (digit >= 10) {
                digit -= 9;
            }
        }

        sum += digit;
    }

    return sum;
}

int main() {
    string cardnum;

    cout << "Enter the card number: ";
    cin >> cardnum;

    int sum = calculatedigit(cardnum);

    if (sum % 10 == 0) {
        cout << "Valid Luhn checksum\n";
    } else {
        cout << "Invalid Luhn checksum\n";
    }

    return 0;
}