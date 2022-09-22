#include <iostream>

void print_nums(int num);
int main() {
    int num = 5;
    print_nums(num);
    return 0;
}

void print_nums(int num) {
    if (num == -1) 
    {
        return;
    }
    std::cout << num << " ";
    print_nums(num - 1);
}
