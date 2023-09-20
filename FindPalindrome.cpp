#include <iostream>

#include <string>

#include <algorithm>

using namespace std;

// Function to check if a number is a palindrome (to be completed by students)

bool isPalindrome(int num) {

// TODO: Write the code to check if ’num’ is a palindrome.

// create two strings that are the numbers

    string normal = to_string(num);
    string normal2 = to_string(num);

// reverse one of the strings

    reverse(normal2.begin(), normal2.end());

// check if they are the same

    if (normal == normal2 ) { 
        
        return true;
    }
    
    else {
        return false;
    }

}

int largestnum = 1;

// Function to find two numbers whose multiplication creates the largest palindrome (to be
// completed by students)

void findLargestPalindromeNumbers(int &num1, int &num2) {

    for ( int i = 0; i < 1000; i++) {

        for ( int n = i; n < 1000; n++) {

            int prod = i * n;  

            if (isPalindrome(prod)) {


                if (i*n > largestnum) {
                    largestnum = i*n;

                    num1 = i;
                    num2 = n;
            }   
                
                }



        }
    }
// TODO: Write the code to find the two numbers and update ’num1’ and ’num2’.

    }


int main() {

int number1 = 0, number2 = 0;
// Call the function to find the two numbers that create the largest palindrome (to be
//completed by students)

findLargestPalindromeNumbers(number1, number2);

// Display the result
std::cout << "The two numbers are: " << number1 << " and " << number2 << std::endl;
std::cout << "Their product is the largest palindrome: " << number1 * number2 << std::endl;


return 0;
}