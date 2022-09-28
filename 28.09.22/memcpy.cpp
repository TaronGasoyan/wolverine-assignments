#include <iostream>

size_t size(char* arr) {
    int count = 0;
    while (arr[count] != '\0') {
        ++count;
    }
    return count;
}

void memcpy(char* src, char* dest, size_t n) {
    if (size(src) < n) {
        std::cout << "Error" << std::endl;
        return;
    }
    for (int i = 0; i < n; ++i) {
        dest[i] = src[i];
    }
}

int main() {
    char src[] = "abcdabcd";
    char dest[5];
    size_t n = 4;
    memcpy(src,dest,n);
    for (int i = 0; i < 5; ++i) {
        std::cout << dest[i] << " ";
    }

    return 0;
}
