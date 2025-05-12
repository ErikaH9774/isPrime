// isPrime.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//cmath for the sqrt
#include <cmath>

using namespace std;

int main()
{
    //user enters a number and is being asked to enter a number. 
    int num;
    cout << "Enter a number:\n";
    cin >> num;
    //if the number is less than 2.
    if (num < 2) {
        //display if number entered is less than 2 and is so define if it is not a prime number 
        cout << num << " is NOT a prime number.\n";
    }
    //define if prime is true 
    else {
        bool isPrime = true;
        //int i = 2 and i is less than or equal to the square root of num and i ++ 
        for (int i = 2; i <= sqrt(num); i++) {
            //if num % i == 0 then is prime is false
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        // in summary if isprime of num is a prime number and if is prime of num is not a prime number. 
        if (isPrime) {

            cout << num << " IS a prime number. \n ";
        }
        else {


            cout << num << " is NOT a prime number \n ";
        }
    }
    return 0;
}
   