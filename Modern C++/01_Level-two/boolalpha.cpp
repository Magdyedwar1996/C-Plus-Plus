#include <iostream>
using namespace std;

int main() {
    bool value = true;

    // Default boolean output
    cout << "The value is: " << value << endl; // Output: The value is: 1

    // Enable boolalpha manipulator
    cout << boolalpha;
    cout << "The value is: " << value << endl; // Output: The value is: true

    // Disable boolalpha manipulator using unsetf()
    cout.unsetf(ios::boolalpha);
    cout << "The value is: " << value << endl; // Output: The value is: 1

    // Re-enable boolalpha manipulator using setf()
    cout.setf(ios::boolalpha);
    cout << "The value is: " << value << endl; // Output: The value is: true

    cout << noboolalpha << endl; 
    cout << " The value is: " << value << endl; // Output: The value is ; 1 

    return 0;
}
