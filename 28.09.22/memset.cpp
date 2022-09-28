#include <iostream>

void memset(char* arr,char val,size_t count) {
    for (int i = 0; i < count; ++i) {
        arr[i] = val;
    }
}

int main() {
    const int size = 5;
    char arr[size];
    char val = 'a';
    size_t count = 3;
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    memset(arr,val,count);

    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    return 0;
}
