#include <iostream>
#include <vector>
using namespace std;
int main() {
 vector<int> v = {1, 2, 3, 4};
 // Insert at position
 v.insert(v.begin() + 2, 99); // before index 2
 // Erase element
 v.erase(v.begin() + 1); // remove index 1
 for(int x : v) {
 cout << x << " ";
 }
}