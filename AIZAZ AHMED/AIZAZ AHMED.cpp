//Task 2: Prime Number Generator and Checker

#include <iostream>
using namespace std;

int main() {
    string choice;

    while (true) {
        cout << "Welcome to Prime Number Checker And Generator Menu:" << endl;
        cout << "1. Find prime numbers (P/p)" << endl;
        cout << "2. Check if it is a prime(C/c)" << endl;
        cout << "3. Quit (Q/q)" << endl;
        cout << "Enter your choice (1/2/3): ";
        cin >> choice;

        if (choice == "1" || choice== "P" || choice == "p") {
            int start, end;
            cout << "ENTER THE RANGE (start): ";
            cin >> start;
            cout << "ENTER THE RANGE (end): ";
            cin >> end;
            if (start <= end) {
                cout << "Prime numbers in the range From " << start << " to " << end << " are: ";
                for (int num = start; num <= end; ++num) {
                    if (num <= 1)
                        continue;

                    bool isPrime = true;
                    for (int i = 2; i * i <= num; ++i) {
                        if (num % i == 0) {
                            isPrime = false;
                            break;
                        }
                    }

                    if (isPrime) {
                        cout << num << " ";
                    }
                }
                cout << endl;
            }
            else {
                cout << "Invalid range. Start should be less than or equal to end." << endl;
            }
        }
        else if (choice == "2" || choice == "C" || choice == "c") {
            int num;
            cout << "Enter a number to check if it's prime: ";
            cin >> num;
            if (num <= 1) {
                cout << num << " is not a prime number." << endl;
            }
            else {
                bool isPrime = true;
                for (int i = 2; i * i <= num; ++i) {
                    if (num % i == 0) {
                        isPrime = false;
                        break;
                    }
                }

                if (isPrime) {
                    cout << num << " is a prime number." << endl;
                }
                else {
                    cout << num << " is not a prime number." << endl;
                }
            }
        }
        else if (choice == "3" || choice == "Q" || choice == "q") {
            cout << "Thanks For Using My Prime No Checker and Generator Have a Nyce Day !" << endl;
            break;
        }
        else {
            cout << "Invalid choice. Please enter a valid option (1, 2, or 3)." << endl;
        }
    }

    return 0;
}