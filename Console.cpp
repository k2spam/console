#include <iostream>

void print(int n)
{
    std::cout << n << '\n';
}

/*
* type = 0 all numbers
* type = 1 odd numbers
* type = 2 even numbers
*/
void allEvenOdd(int min = 0, int max = 100, int type = 0)
{
    std::cout << "Results:\n";

    for (int i = min; i <= max; i++)
        switch (type)
        {
        case 0:
            print(i);
            break;
        case 1:
            if (i % 2 != 0) print(i);
            break;
        case 2:
            if (i % 2 == 0) print(i);
            break;
        default:
            print(i);
            break;
        }
}

int main()
{
    allEvenOdd(0, 12, 0);
    allEvenOdd(0, 12, 1);
    allEvenOdd(0, 12, 2);
}