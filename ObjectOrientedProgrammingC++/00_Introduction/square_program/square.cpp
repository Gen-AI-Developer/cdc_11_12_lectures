#include <iostream>
using namespace std;
double square(double x)
{
    return x * x;
}
// make names from std visible without std:: (§2.4.2)
// square a double precision floating-point number40
void print_square(double x)
{
    cout << "the square of " << x << " is " << square(x) << "\n";
}
int main()
{
    print_square(1.234);
}