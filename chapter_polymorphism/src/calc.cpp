#include <iostream>

using namespace std;

class Calculator {
public:
    virtual double add(double a, double b) {
        return a + b;
    }

    virtual double subtract(double a, double b) {
        return a - b;
    }

    virtual double multiply(double a, double b) {
        return a * b;
    }

    virtual double divide(double a, double b) {
        if (b == 0) {
            throw "Error: division by zero";
        }
        return a / b;
    }
};
class AbstractCalculator {
public:
    double m_num1;
    double m_num2;
    virtual double add(double a, double b) {return 0;};
    virtual double subtract(double a, double b) {return 0;};
    virtual double multiply(double a, double b) {return 0;};
    virtual double divide(double a, double b) {return 0;};
    virtual double get_Result() {return 0;};
    
};
class AddCalculator : public AbstractCalculator {
public:
    double add(double a, double b) override {
        
        return a + b + 10;
    }
    double get_Result() {
        return m_num1 + m_num2 + 10;
    }
};

class SubtractCalculator : public AbstractCalculator {
public:
    double subtract(double a, double b) override {
        return a - b - 10;
    }
};
int main() {
    AbstractCalculator *c = new AddCalculator();
    c->m_num1 = 10;
    c->m_num2 = 20;
    cout << "Sum: " << c->get_Result() << endl;
    delete c;
    AbstractCalculator *c2 = new SubtractCalculator();
    c2->m_num1 = 10;
    c2->m_num2 = 20;
    cout << "Difference: " << c2->subtract(c2->m_num1, c2->m_num2) << endl;
    delete c2;
    // double a, b;
    // cout << "Enter two numbers: ";
    // cin >> a >> b;
    // cout << "Sum: " << c.add(a, b) << endl;
    // cout << "Difference: " << c.subtract(a, b) << endl;
    // cout << "Product: " << c.multiply(a, b) << endl;
    // try {
    //     cout << "Quotient: " << c.divide(a, b) << endl;
    // } catch (const char* e) {
    //     cout << e << endl;
    // }
    return 0;
}