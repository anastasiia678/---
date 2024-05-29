#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;

void task1();
string Dec_To_Binary(int);
string Dec_To_Hex(int);

void task2();
void Dec_To_Six(int);

void task3();
string DecToEleven(int);

void task4();

int main() {
    int choice = 0;

    while (choice != 5) {
        cout << " Task number (1-4), or 5 to end the program: " << endl;
        cin >> choice;

        switch (choice) {
            case 1: {
                task1(); // Task of converting the number 128 from decimal to binary and hexadecimal
                break;
            }
            case 2: {
                task2(); // The task of converting the number 2358 from decimal to hexadecimal and binary
                break;
            }
            case 3: {
                task3(); // Conversion task from decimal to fourteen
                break;
            }
            case 4: {
                task4(); // Adding two numbers 131 and 2358 in binary
                break;
            }
            case 5: {
                cout << " Program is over!";
                break;
            }
            default: {
                cout << " Wrong choice, try again" << endl;
            }
        }
    }

    return 0;
}

void task1() {
    cout << " Task 1 " << endl;
    int number = 128;
    cout << " In decimal = " << number << " to binary = " << Dec_To_Binary(number) << endl;
    cout << " In decimal = " << number << " to hexadecimal = " << Dec_To_Hex(number) << endl;
}

string Dec_To_Binary(int n) {
    if (n == 0) return "0";
    string binary;
    while (n > 0) {
        binary.push_back('0' + n % 2);
        n /= 2;
    }
    reverse(binary.begin(), binary.end());
    return binary;
}

string Dec_To_Hex(int n) {
    if (n == 0) return "0";
    string hex;
    char hexChars[] = "0123456789ABCDEF";
    while (n > 0) {
        hex.push_back(hexChars[n % 16]);
        n /= 16;
    }
    reverse(hex.begin(), hex.end());
    return hex;
}

void task2() {
    cout << " Task 2 " << endl;
    int number = 2432;
    cout << " In decimal = " << number << " to binary = " << Dec_To_Binary(number) << endl;
    cout << " In decimal = " << number << " to hexadecimal = " << Dec_To_Hex(number) << endl;
}

void task3() {
    cout << " Task 3 " << endl;
    int in;
    cout << " Enter a number: ";
    cin >> in;
    cout << " Changed number into base 11: " << DecToEleven(in) << endl;
}

string DecToEleven(int n) {
    if (n == 0) return "0";
    string result;
    char chars[] = "0123456789ABCD";
    while (n > 0) {
        result.push_back(chars[n % 11]);
        n /= 11;
    }
    reverse(result.begin(), result.end());
    return result;
}

void task4() {
    cout << " Task 4 " << endl;
}
