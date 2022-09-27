#include <iostream>
#include <string>

void toUpperCase(std::string& str) {
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] >= 97 && str[i] <= 122) {
            str[i] -= 32;
        }
    }
}

int main() {
    std::string str = "HeLLo World";
    toUpperCase(str);
    std::cout << str;

    return 0;
}
