#include <iostream>
#include <map>

int sum(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int divi(int num1, int num2);

int main() {
    char op;
    int num1, num2;
    std::cout << "Input numbers: ";
    std::cin >> num1 >> num2;
    std::cin >> op;
    std::map<char, int(*)(int, int)> m;
    m['+'] = &sum;
    m['-'] = &sub;
    m['*'] = &mul;
    m['/'] = &divi;
    std::cout << m[op](num1,num2);
    
    return 0;
}

int sum (int num1, int num2)
{
    return num1 + num2;
}

int sub (int num1, int num2)
{
    return num1 - num2;
}


int mul (int num1, int num2)
{
    return num1 * num2;
}

int divi (int num1, int num2)
{
    return num1 / num2;
}
