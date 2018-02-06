/** Zaid H alshareef
*  29/1/2018
*  Lab 13
*  Prime Number Calculations */

/** Preprocessor directives */
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
        long int checkPrime,i,z;

        /** of stream object called primeNumber cerated */
        ofstream primeNumber( "primeNumber.txt", ios::out );

        /**< determine whether the open operation succeeded */
        if ( !primeNumber )
        {
        cerr << "File could not be opened!";
        exit( 1 );
        }

        cout << "Check if a Number is Prime\n\n";
        primeNumber << "Check if a Number is Prime\n\n";

        cout << "List of prime numbers :\t";
        cin >> checkPrime;

        /** Loop to print every primes number between 2 and the number entered to check */
        for(i=2; i<= checkPrime; i++)
        {
        /** for loop to check for prime number */
        for (z = 2; z <= i; z++)
            {
                if (i % z == 0)
                break;
            }

        if (z == i)
            {
        cout << "\n" << i;
        primeNumber << "\n" << i;
            }
        }


        /** close the of stream objects explicitly */
        primeNumber.close();

return 0;
}
