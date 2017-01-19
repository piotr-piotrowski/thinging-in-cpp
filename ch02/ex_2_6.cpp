#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

/**
 * Change Fillvector.cpp so that it concatenates all the elements 
 * in the vector into a single string before printing it out, 
 * but don’t try to add line numbering.
 */
int main() {
    vector<string> v;
    ifstream in("ex_2_6.cpp");
    string line, file="";

    while(getline(in, line)) {
        v.push_back(line);
    }

    for (int i=0; i<v.size(); i++) {
        file += v[i];
    }

    cout << "File contains: " << file << endl;
    return 0;
}

