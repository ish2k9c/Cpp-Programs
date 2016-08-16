#include <iostream>

using namespace std;

// [A] - 1.1           This operator code turns positive into negative
// [B] - 1.2           This operator adds 1 to the user inputs number
// [C] - 1.3           This operator increments and decrements
// [D] - 1.4           Declaring [e] as an int with no values, [cin] asks user input


//where the code starts

int main()
{

    // example 1.1
    cout << "example 1.1" << "\n\n";
    ///////////////////////////////////////////////////////////////////////////


                    int a;
                    int b;

                    cout << "please enter a number:" << endl;
                    cin >> a;

                    b=-a;

                    cout << "your input opposite number is: \n"<< b << "\n\n";

    // example 1.2
    cout << "example 1.2" << "\n\n";
    ///////////////////////////////////////////////////////////////////////////


                    int c;

                    cout << "please enter a number:" << endl;
                    cin >> c;
                    cout << c << " + 1 = ";

                    c=c+1;

                    cout << c << "\n\n";


    // example 1.3
    cout << "example 1.3" << "\n\n";
    ///////////////////////////////////////////////////////////////////////////


                    int d;
                    int e;

                    cout << "please enter a number:" << endl;
                    cin >> d;
                    cout << d << " + 1 = ";

                    d++;

                    cout << d << "\n\n";

                    cout << "please enter a number:" << endl;
                    cin >> e;
                    cout << e << " - 1 = ";

                    e--;

                    cout << e << "\n\n";


    return 0;
}
