#include <iostream>
using namespace std;

int* print_values(int firstnum = 10, int secondnum = 25);

int main(void) {
    print_values(13, 16);
    print_values(88, 12);
    print_values(88);

    return 0;
}

int* print_values(int num_1, int num_2){
    cout << "The first number is ->" << num_1 << endl;
    cout << "The second number is ->" << num_2 << endl << endl;

    return 0;
}