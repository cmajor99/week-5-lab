#include <math.h>;
#include <iostream>;
#include <fstream>
using namespace std;
int main() {
    cout << "please enter 2 numbers for 2 sides of the triangle:" "\n";
    int x, y, z;
    cin >> y >> z; "\n";
    cout << "you have entered: " "\n" << y << "\n" << z << "\n" << endl;
    x = y * y + z * z;
     auto t = sqrt(x);
    ofstream result;
    result.open ("result.txt");
    result << "the third side of the triangle is:" "\n" << t;
  
    result.close();

    return 0;
}