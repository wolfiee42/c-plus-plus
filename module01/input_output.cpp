#include <iostream>
using namespace std;
int main()
{

    // cout as a printf
    printf("Hello World");      // used for c.
    std::cout << "Hello World"; // used for c++.

    std::cout << "Hello\n" // usecase of line-break
              << "World\n";

    std::cout << "Hello " << std::endl // usecase of endl method as line-break
              << "World with flower" << std::endl;

    //   variable print
    int a = 100;
    std::cout << a << std::endl; // you do not need to tell the data type.

    int b = 200, c = 300;
    std::cout << b << " " << c << std::endl; // how to add space

    // typing std:: everytime is frustrating, to solve this, add  
    // "using namespace std" at the top of the file

    int d = 400, e = 500;
    cout << d << " " << e << endl;
    return 0;
}