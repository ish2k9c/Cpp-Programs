#include <iostream>

using namespace std;

// [A] - 1.1    [int],[cout]           Declaring [a] as an int with no values, then i set a value to [a]=1
// [B] - 1.2    [int],[cout]           Declaring [b]=2 as an int with a stored value of 2
// [C] - 1.3    [int],[cout]           Declaring [c] and [d] as an int with no values, then i set a value to [c]=3 and [d]=4
// [D] - 1.4    [int],[cin],[cout]     Declaring [e] as an int with no values, [cin] asks user input


//where the code starts

int main()
{

    // example 1.1
    cout << "example 1.1" << "\n\n";
    ///////////////////////////////////////////////////////////////////////////


                    int a;
                    a = 1;
                    cout << a << "\n\n";


    // example 1.2
    cout << "example 1.2" << "\n\n";
    ///////////////////////////////////////////////////////////////////////////


                    int b = 2;
                    cout << b << "\n\n";


    // example 1.3.1
    cout << "example 1.3" << "\n\n";
    ///////////////////////////////////////////////////////////////////////////


                    int c,d;
                    c = 3;
                    d = 4;
                    cout << c << "\n";
                    cout << d << "\n\n";


    // example 1.3.2
    cout << "example 1.3" << "\n\n";
    ///////////////////////////////////////////////////////////////////////////


                    int e = 5, f = 6 ;
                    cout << e << "\n";
                    cout << f << "\n\n";


    // example 1.4
    cout << "example 1.4" << "\n\n";
    ///////////////////////////////////////////////////////////////////////////


                    int g;

                    cout << "please enter a number" << endl;
                    cin >> g;
                    cout << "your input number is = "<< g << "\n\n";





    return 0;
}

//where the code ends
