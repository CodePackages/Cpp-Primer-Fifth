#include <iostream>

int main(int argc, char **argv)
{
    int sum = 0;
    int val = 50;

    while (val <= 100) {
        sum += val;
        ++val;
    }

    std::cout << "Sum of 50 to 100 is " 
              << sum << std::endl;

    return 0;
}