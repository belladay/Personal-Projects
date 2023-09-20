#include <iostream>

using namespace std;

void findGCD(int num1, int num2) {

    int smalnum;
    int bignum;
    int gcd = 1;

    if (num1 < num2) {
        
        smalnum = num1;
        bignum = num2;
        
    }

    if ( num2 <= num1 ) {

        smalnum = num2;
        bignum = num1;
    }

    for (int i = 1; i < (smalnum+1); i++ ) {

        if ( bignum % i == 0) {
            if (smalnum % i == 0) {
                gcd = i;
            }
        }
    }

    cout << gcd;
}

int main() {

    int a,b;
    cout << "choose two numbers to determine the greatest common denominator of" << endl;
    cout << "first number: ";
    cin >> a;
    cout << endl << "second number: ";
    cin >> b;

    cout << "the greatest denominator of " << a << " and " << b << " is: ";
    findGCD(a,b);

    return 0;


}

