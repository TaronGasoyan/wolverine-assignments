#include <iostream>
#include <string>

void rtrims(std::string& str) {
    int i = str.size() - 1;
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            str.erase(str.begin() + i);
        }
        --i;
    }
}

int main() {
    std::string str = "hello   ";
    rtrims(str);
    std::cout << str;

    return 0;
}
