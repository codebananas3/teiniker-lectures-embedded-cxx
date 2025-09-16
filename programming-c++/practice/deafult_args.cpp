#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;
int* print_values(int first_val = 20, int second_val = 20);

int main(void) {
    print_values(10, 30);
    print_values(10);
    return 0;
}

int* print_values(int first_val, int second_val){
    cout << "First value is: " << first_val;
    cout << " and the second value is: " << second_val << endl;
    return nullptr;
}