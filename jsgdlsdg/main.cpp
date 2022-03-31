#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world" << endl;
    if (cout.fail())
        return EXIT_FAILURE;
    return EXIT_SUCCESS;
}
