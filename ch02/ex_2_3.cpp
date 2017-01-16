#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*
 * Create a program that opens a file 
 *  and counts the whitespace-separated words in that file.
 */
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

