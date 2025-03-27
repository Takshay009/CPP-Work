#include <bits/stdc++.h>

using namespace std;

class Complex
{
private:
    double real;
    double imag;

public:
    Complex(int r, int i)
    {
        real = r, imag = i;
    }

    Complex operator-(Complex c2)
    {

        return Complex(real - c2.real, imag - c2.imag);
        // return complex(3,1);
    }

    void display()
    {
        cout << real << " - " << imag << endl;
    }
};

int main()
{
    Complex c1(5, 2);
    Complex c2(2, 1);
    Complex c3 = c1 - c2; // c1(c2);
    c1.display();
    c2.display();
    c3.display();
    
    return 0;
}