#include <iostream>
using namespace std;
int main() {
    int num = 5;
    cout << "After increasing by 1 the number is : " << num++ << endl;
    cout << "After increasing by 1 the number is : " << ++num << endl;
    num--;
    cout << "After decreasing by 1 the number is : " << num << endl;
    --num;
    cout << "After pre decrement by 1 the number is : " << num << endl;
    return 0;
}
