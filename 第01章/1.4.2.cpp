#include <iostream>

int main(int argc, char **argv)
{
    int sum = 0;

    for( int val =0; val <= 10; ++val ) {
        sum += val;
    }

    std::cout << "Sum of 0 to 10 inclusive is " << sum << std::endl;

    return 0;
}