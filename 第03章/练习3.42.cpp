#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
    int array[10];

    // -std=c++11
    vector<int> ivec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < 10; i++)
    {
        array[i] = ivec[i];
    }
    return 0;
}