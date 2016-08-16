#include <iostream>

using namespace std;

int main()
{


    // example 1.1
    cout << "example 1.1" << "\n\n";
    ///////////////////////////////////////////////////////////////////////////


            int a;
            int b;
            int c=1;
            int d;

            cout << "insert a number and then press enter: ";
            cin >> a;   // a has a value
            cout << "insert an enxponent vale for the first number: " ;
            cin >> b;   // b is the exponent

            d=a;        // d has the value of d

            while (c != b)    // while c is not equal to b the loop will keep running until it is equal to each other
            {
                d = d*a;
                c = c+1;        // c is the counter that will loop
            }

            cout << "\n";
            cout << d << "\n\n" ;  //is the final result  of the value stored in d


            // example 1.2
    cout << "example 1.2" << "\n\n";
    ///////////////////////////////////////////////////////////////////////////


            for (int e=0; e<9; e=e+1)
            {
                cout << e << endl;
            }



    return 0;
}
