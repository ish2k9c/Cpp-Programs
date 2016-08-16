#include <iostream>
#include <cmath>

using namespace std;

//              http://www.cplusplus.com/reference/cmath/

// [A] - 1.1    Using trig function, using rad and deg using cmath
// [B] - 1.2
// [C] - 1.3
// [D] - 1.4

int main()
{
    double answer,num1,num2;
    double pi=3.1415926535897;



    cout << "number1: ";
    cin >> num1;

    //cout << "number2: ";
    //cin >> num2;


    // example 1.1
    cout << "example 1.1" << "\n\n\n";
    ///////////////////////////////////////////////////////////////////////////


                answer = cos(num1);
                cout << "radian: cos(" << num1 << ") = " << answer << "\n\n";

                answer = sin(num1);
                cout << "radian: sin(" << num1 << ") = " << answer << "\n\n";

                answer = tan(num1);
                cout << "radian: tan(" << num1 << ") = " << answer << "\n\n";

                cout<< "\n\n";

                answer = cos(num1*pi/180);
                cout << "degree: cos(" << num1 << ") = " << answer << "\n\n";

                answer = sin(num1*pi/180);
                cout << "degree: sin(" << num1 << ") = " << answer << "\n\n";

                answer = tan(num1*pi/180);
                cout << "degree: tan(" << num1 << ") = " << answer << "\n\n";

                cout<< "\n\n";

                answer = acos(num1);
                cout << "radian: inverse cos(" << num1 << ") = " << answer << "\n\n";

                answer = asin(num1);
                cout << "radian: inverse sin(" << num1 << ") = " << answer << "\n\n";

                answer = atan(num1);
                cout << "radian: inverse tan(" << num1 << ") = " << answer << "\n\n";

                cout<< "\n\n";

                answer = acos(num1*pi/180);
                cout << "degree: inverse cos(" << num1 << ") = " << answer << "\n\n";

                answer = asin(num1*pi/180);
                cout << "degree: inverse sin(" << num1 << ") = " << answer << "\n\n";

                answer = atan(num1*pi/180);
                cout << "degree: inverse tan(" << num1 << ") = " << answer << "\n\n";


    // example 1.2
    cout << "example 1.2" << "\n\n";
    ///////////////////////////////////////////////////////////////////////////


    return 0;
}
