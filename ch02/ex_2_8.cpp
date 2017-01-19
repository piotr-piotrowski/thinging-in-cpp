#include <vector>
#include <iostream>

using namespace std;

/**
 * Create a vector<float> and put 25 floating-point numbers into it 
 * using a for loop. Display the vector.
 */
int main() {
    vector<float> v;
    for(int i=0; i<= 25; i++) {
        v.push_back(1.25 * i);
    }
    for(int i=0; i <= 25; i++) {
        cout << v[i] << endl;
    }
    return 0;
}
