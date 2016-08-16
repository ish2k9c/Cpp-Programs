#include <iostream>
#include <string>

using namespace std;

// [A] - 1.1    [string],[getline(cin,a)],[cout]   [string]-can hold a full "word", [getline(cin,a)]-allows spaces which is essential for outputing sentences
// [B] - 1.2    [string],[cin],[cout]              [string]-can hold a full "word", [cin]-only allows the first word and ignores the rest after a space
// [C] - 1.3    [char],[cin],[cout]                [char] - only allows first "letter" to be stored and ignores the rest of the letters

//where the code starts

int main()
{

    // example 1.1
    cout << "example 1.1" << "\n\n";
    ///////////////////////////////////////////////////////////////////////////


                    string a;

                    cout << "Enter a letter or sentence" << "\n\n";
                    getline(cin, a);
                    cout << "\n";
                    cout << "The letter / sentence you entered: " << "\n\n" << a << "\n\n\n\n";



    // example 1.2
    cout << "example 1.2" << "\n\n";
    ///////////////////////////////////////////////////////////////////////////


                    string b;

                    cout << "Enter a letter or sentence" << "\n\n";
                    cin >> b;
                    cout << "\n";
                    cout << "The letter / sentence you entered: " << "\n\n" << b << "\n\n\n\n";



    // example 1.3
    cout << "example 1.3" << "\n\n";
    ///////////////////////////////////////////////////////////////////////////

                    char c;

                    cout << "Enter a letter or sentence" << "\n\n";
                    cin >> c;
                    cout << "\n";
                    cout << "The letter / sentence you entered: " << "\n\n" << c << "\n\n\n\n";
                    cin.ignore();                                                                       // needed when alternating inputs from char to strings

    // example 1.4
    cout << "example 1.4" << "\n\n";
    ///////////////////////////////////////////////////////////////////////////


                    string name, color;
                    int age;

                    cout << " Hello whats your name ? ";
                    getline(cin,name);

                    cout << " What is your age ? ";
                    cin >> age;
                    cin.ignore();                                                                       // needed when alternating inputs from numbers to strings

                    cout << " what is your favorite color ? ";
                    getline(cin,color);

                    cout << "\n\n";
                    cout << " Hello " << name << " you are " << age << " years old and your favorite color is " << color;




    return 0;
}
