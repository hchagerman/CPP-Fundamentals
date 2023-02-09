#include <iostream>

using namespace std;

int main(void)
{
    float length = 1, width = 1;
    float perimeter;
    float area = length*width;
    float x;

    //cout << area << endl;

    length = 2;

    cout << "Enter the length and width separated by a space." << endl;
    cin >> x >> width;
    cout << x << endl;
    
    area = x*width;
    perimeter = (2*x) + (2*width);

    cout << "Area = " << area << '\n';
    cout << "Perimeter = " << perimeter << endl;

    return 0;   
}
