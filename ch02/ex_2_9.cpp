#include <iostream>
#include <vector>

using namespace std;

/**
 * Create three vector<float> objects 
 * and fill the first two as in the previous exercise. 
 * Write a for loop that adds each corresponding element 
 * in the first two vectors and puts the result 
 * in the corresponding element of the third vector. 
 * Display all three vectors.
 */
int main() {
    vector<float> v1, v2, v3;
    for (int i=0; i<=25; i++) {
        v1.push_back(1.25 * i);
        v2.push_back(0.25 * i);
    }
    for (int i=0; i<=25; i++) {
        v3.push_back(v1[i]+v2[i]);
    }
    for (int i=0; i<25; i++) {
        cout << v1[i] << "+" << v2[i] << "=" << v3[i] << endl;
    }
}
