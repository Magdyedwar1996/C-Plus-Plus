#include<iostream>
#include <string>
#include <typeinfo>
using namespace std; 

string addStrings(std::string num1, std::string num2) {
    // Initialize pointers to the last character of each number
    int i = num1.length() - 1;
    int j = num2.length() - 1;

    // Initialize carry to 0
    int carry = 0;

    // Initialize an empty result string
    string result = "";

    // Loop through both numbers from right to left
    while (i >= 0 || j >= 0 || carry > 0) {
        // Get the digits at the current pointers, or 0 if pointers have moved out of range
        int digit1 = i >= 0 ? num1[i] - '0' : 0;
        int digit2 = j >= 0 ? num2[j] - '0' : 0;
        cout << digit1 << digit2 << endl;
         cout << "Type of num: " << typeid(digit1).name() << std::endl;


        // Calculate the sum of the digits and the carry from the previous iteration
        int total = digit1 + digit2 + carry;

        // Update the carry for the next iteration
        carry = total / 10;

        // Calculate the current digit for the result string
        int digit = total % 10;

        // Add the current digit to the left of the result string
        result = char(digit + '0') + result;
        cout << result << endl;
        cout << "Type of num: " << typeid(result).name() << std::endl;
        // Move the pointers to the left
        i--;
        j--;
    }

    return result;
}

int main(void){
    string s1 = "11"  , s2 = "123" ; 
    string output = addStrings(s1, s2); 
    cout << output << endl ; 
    return 0;


}
