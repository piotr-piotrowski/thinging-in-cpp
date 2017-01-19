#include <iostream>
#include <string>
#include <fstream>
// #include <cstdlib>
//

using namespace std;

/**
 * Display a file a line at a time, 
 * waiting for the user to press the “Enter” key after each line.
 */
int main() {
    ifstream in("ex_2_7.cpp");
    string line;

    while(getline(in, line)) {
        cout << line;
        // system("pause");
        cin.get();
    }

    return 0;

}
