#include <iostream>
#include "fun.h"
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int x;
    cout << "Введите x: ";
    cin >> x;
    int n;
    cout << "Введите n: ";
    cin >> n;
    std::cout << power(x, n);
}
