/* Examples of varible declaration and usage*/

#include <iostream>
#include <cstdio>

#define PI 3.14159

using namespace std;

int main(void)
{
    int some_integer = 1;
    int some_integer2{2};
    int some_integer3(3);

    float floating_number = 2 * PI;

    some_integer = some_integer + 1.1;

    cout << some_integer << '\n' << floating_number << endl;
    cout << some_integer << some_integer2 << some_integer3 << endl;
    printf("stuff %d, %f\n", some_integer, floating_number);
    
    return 0;
}
