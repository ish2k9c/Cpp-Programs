#include <iostream>

using namespace std;

// [A] - 1.1    [double],[cin],[cout]   double allows user to input decimals


//where the code starts


int main()
{

    // example 1.1
    cout << "example 1.1" << "\n\n";
    ///////////////////////////////////////////////////////////////////////////



                    double a;
                    double b;
                    double c;

                    cout << "first number" << "\n\n";
                    cin >> b;
                    cout << "second number" << "\n\n";
                    cin >> c;

                    cout << "\n";

                    a=b+c;

                    cout << b << " + " << c << " = " << a << "\n\n";

                    a=b-c;

                    cout << b << " - " << c << " = " << a << "\n\n";

                    a=b*c;

                    cout << b << " x " << c << " = " << a << "\n\n";

                    a=b/c;

                    cout << b << " / " << c << " = " << a << "\n\n";



    return 0;
}
