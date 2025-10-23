/*Design a class that has an array of floating-point numbers. The constructor should accept an
integer argument and dynamically allocate the array to hold that many numbers. The destructor
should free the memory held by the array. In addition, there should be member functions to
perform the following operations:
• Store a number in any element of the array
• Retrieve a number from any element of the array
• Return the highest value stored in the array
• Return the lowest value stored in the array
• Return the average of all the numbers stored in the array
Demonstrate the class in a program.
*/
#include <iostream>
#include "Array.h"
#include <random>
using namespace std;


int main()
{
    Array test1;
    test1.display();
    
    Array test2(15);
    test2.display();

    double lower = 0.0;
    double upper = 10.0;
    uniform_real_distribution<double> unif(lower, upper);
    default_random_engine re;
    int counter = 0;
    while (counter <= 10)
    {
        test1.insertNum(unif(re), counter);
        counter++;
    }
    test1.display();

    test1.insertNum(2.3, 20);

    test1.getNum(20);

    cout << test1.getNum(5) << endl;
    cout << test1.getMin() << endl;
    cout << test1.getMax() << endl;
    cout << test1.getAverage() << endl;

    test1.end();
    test2.end();
}
