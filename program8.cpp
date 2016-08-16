#include <iostream>

using namespace std;

// [A] - 1.1           (used greater than or equal) and (used less than or equal)
// [B] - 1.2           (is equal to) and (not equal to)
// [C] - 1.3           Using AND/OR in parameters


//where the code starts

int main()
{

    // example 1.1
    cout << "example 1.1" << "\n\n";
    ///////////////////////////////////////////////////////////////////////////


            double a;
            double b;

            cout << "please enter first number" << endl;
            cin >> a;
            cout << "please enter second number" << endl;
            cin >> b;

            if ( a > b )
            {
                cout << a << " is greater than " << b << "\n\n";
            }

            if ( a < b )
            {
                cout << b << " is greater than " << a << "\n\n";
            }

            if ( a == b )
            {
                cout << b << " are equal to each other " << a << "\n\n";
            }


    // example 1.2
    cout << "example 1.2" << "\n\n";
    ///////////////////////////////////////////////////////////////////////////


            double c;
            double d;

            cout << "please enter first number" << endl;
            cin >> c;
            cout << "please enter second number" << endl;
            cin >> d;

            if ( c == d )
            {
                cout << c << " is equivalent " << d << "\n\n";
            }

            if ( c != d )
            {
                cout << c << " is not equivalent " << d << "\n\n";
            }


    // example 1.3
    cout << "example 1.3" << "\n\n";
    ///////////////////////////////////////////////////////////////////////////


            double e;
            double f;

            cout << "please enter first number" << endl;
            cin >> e;
            cout << "please enter second number" << endl;
            cin >> f;

            if ( e == 1 && f == 1  )
            {
                cout << " e = " << e << " and " << " f = "<< f << " AND "<<"\n\n";
            }

            if ( e == 1 || f == 1  )
            {
                cout << " e = " << e << " and " << " f = "<< f << " OR "<<"\n\n";
            }


    return 0;
}
