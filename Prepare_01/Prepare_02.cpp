#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of values in the list: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input. Please enter a positive number." << endl;
        return 1;
    }

    int minNumber;

    for (int i = 0; i < n; i++) {
        int num;
        cout << "Enter number " << (i + 1) << ": ";
        cin >> num;

        if (i == 0 || num < minNumber) {
            minNumber = num;
        }
    }

    cout << "The minimum number is: " << minNumber << endl;

    return 0;
    system("pause");
}
