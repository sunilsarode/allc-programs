#include <iostream>

using namespace std;

double squareRoot(double num, double epsilon) {
    if (num < 0)
        return -1; // Error: Square root of negative number is undefined
    
    double low = 0;
    double high = num;
    double mid;

    while (high - low > epsilon) {
        cout<<high << " "<<low<<"\n";
        mid = (low + high) / 2;
        if (mid * mid > num)
            high = mid;
        else
            low = mid;
    }

    return low;
}

int main() {
    double number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    double epsilon = 0.00001; // The precision you desire

    double result = squareRoot(number, epsilon);

    if (result == -1)
        std::cout << "Error: Cannot calculate square root of negative number\n";
    else
        std::cout << "Square root of " << number << " is " << result << std::endl;

    return 0;
}
