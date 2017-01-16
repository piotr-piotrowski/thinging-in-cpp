#include <iostream>
#include <string>
#include <fstream>

using namespace std;

/*
 * Create a program that counts the occurrence of a particular word in a file 
 *  (use the string class’ operator ‘==’ to find the word).
 */
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

