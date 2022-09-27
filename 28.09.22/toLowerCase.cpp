#include <iostream>
#include <string>

void toLowerCase(std::string& str) {
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] >= 65 && str[i] <= 90) {
            str[i] += 32;
        }
    }
}

int main() {
    std::string str = "HeLLo World";
    toLowerCase(str);
    std::cout << str;

    return 0;
}
