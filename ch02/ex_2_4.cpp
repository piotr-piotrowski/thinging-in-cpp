#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    ifstream in("ex_2_4.cpp");
    string word, word_template = "word_template";
    int count = 0;
    while (in >> word) {
        if (word == word_template) {
            count++;
        }
    }
    cout << "File contains " << count << " words: " << word_template << endl;
    return 0;
}

