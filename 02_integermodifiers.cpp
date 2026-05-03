#include <iostream>
using namespace std;

int main() {

    // SHORT TYPES (2 bytes usually)
    short short_var {-32768};
    short int short_int {455};
    signed short signed_short {122};
    signed short int signed_short_int {-456};
    unsigned short int unsigned_short_int {456};

    // INT TYPES (4 bytes usually)
    int int_var {55};
    signed signed_var {66};
    signed int signed_int {77};
    unsigned int unsigned_int {77};

    // LONG TYPES (4 or 8 bytes depending on system)
    long long_var {88};
    long int long_int {33};
    signed long signed_long {44};
    signed long int signed_long_int {44};
    unsigned long int unsigned_long_int {44};

    // LONG LONG TYPES (8 bytes usually)
    long long long_long {888};
    long long int long_long_int {999};
    signed long long signed_long_long {444};
    signed long long int signed_long_long_int {1234};
    unsigned long long int unsigned_long_long_int {1234};

    cout << "\n===== SHORT =====\n";
    cout << "short_var: " << short_var << " | size: " << sizeof(short_var) << " bytes\n";
    cout << "short_int: " << short_int << " | size: " << sizeof(short_int) << " bytes\n";
    cout << "signed_short: " << signed_short << " | size: " << sizeof(signed_short) << " bytes\n";
    cout << "signed_short_int: " << signed_short_int << " | size: " << sizeof(signed_short_int) << " bytes\n";
    cout << "unsigned_short_int: " << unsigned_short_int << " | size: " << sizeof(unsigned_short_int) << " bytes\n";

    cout << "\n===== INT =====\n";
    cout << "int_var: " << int_var << " | size: " << sizeof(int_var) << " bytes\n";
    cout << "signed_var: " << signed_var << " | size: " << sizeof(signed_var) << " bytes\n";
    cout << "signed_int: " << signed_int << " | size: " << sizeof(signed_int) << " bytes\n";
    cout << "unsigned_int: " << unsigned_int << " | size: " << sizeof(unsigned_int) << " bytes\n";

    cout << "\n===== LONG =====\n";
    cout << "long_var: " << long_var << " | size: " << sizeof(long_var) << " bytes\n";
    cout << "long_int: " << long_int << " | size: " << sizeof(long_int) << " bytes\n";
    cout << "signed_long: " << signed_long << " | size: " << sizeof(signed_long) << " bytes\n";
    cout << "signed_long_int: " << signed_long_int << " | size: " << sizeof(signed_long_int) << " bytes\n";
    cout << "unsigned_long_int: " << unsigned_long_int << " | size: " << sizeof(unsigned_long_int) << " bytes\n";

    cout << "\n===== LONG LONG =====\n";
    cout << "long_long: " << long_long << " | size: " << sizeof(long_long) << " bytes\n";
    cout << "long_long_int: " << long_long_int << " | size: " << sizeof(long_long_int) << " bytes\n";
    cout << "signed_long_long: " << signed_long_long << " | size: " << sizeof(signed_long_long) << " bytes\n";
    cout << "signed_long_long_int: " << signed_long_long_int << " | size: " << sizeof(signed_long_long_int) << " bytes\n";
    cout << "unsigned_long_long_int: " << unsigned_long_long_int << " | size: " << sizeof(unsigned_long_long_int) << " bytes\n";

    return 0;
}