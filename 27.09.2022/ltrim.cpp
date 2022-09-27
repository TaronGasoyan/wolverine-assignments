#include <iostream>
#include <string>

void ltrim(std::string& str) {
    int i = str.size() - 1;
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            str.erase(str.begin() + i);
        }
        --i;
    }
    
}

int main() {
    std::string str = "  hello";
    ltrim(str);
    std::cout << str; 

    return 0;
}
