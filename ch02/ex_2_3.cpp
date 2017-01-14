#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream in("ex_2_3.cpp");
    string word;
    int count = 0;
    while (in >> word) {
        count++;
    }
    cout << "File contains: " << count << " words." << endl;
    return 0;
}

