// For.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

void for1(int n, int k) {
    for (int i = 0; i < n; i++) {
        cout << k << endl;
    }
}

void for4(double price) {
    for (int i = 1; i <= 10; i++) {
        cout << price * i << endl;
    }
}

int for7(int a, int b) {
    int sum = 0;
    for (int i = a; i <= b; i++) {
        sum += i;
    }
    return sum;
}

double for10(int n) {
    double result = 0;
    for (int i = 1; i <= n; i++) {
        result += 1/ (double)i;
    }
    return result;
}

double for15(double a, int n) {
    double answer = 1;
    for (int i = 0; i < n; i++) {
        answer *= a;
    }
}



int main()
{
    for1(3, 7);
    for4(56.8);
    cout << for7(8, 34);
    cout << for10(15);
    cout << for15(8.1, 15);
}


