#include <iostream>
#include <vector>

using namespace std;

/**
 * Create a vector<float> and put 25 numbers into it 
 * as in the previous exercises. 
 * Now square each number and put the result back into the same location 
 * in the vector. Display the vector before and after the multiplication.
 */
int main() {
    vector<float> v;
    for (int i=0; i<=25; i++) {
        v.push_back(1.25 * i);
    }
    for (int i=0; i<25; i++) {
        cout << v[i] << endl;
    }
    for (int i=0; i<=25; i++) {
        v[i] = v[i] * v[i];
    }
    for (int i=0; i<25; i++) {
        cout << v[i] << endl;
    }
}
