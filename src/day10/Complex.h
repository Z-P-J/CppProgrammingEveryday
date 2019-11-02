#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
private:
    /* data */
    double real_;
    double image_;
public:
    Complex(/* args */);
    Complex(double real, double image);
    ~Complex();

    double GetReal() {
        return real_;
    }

    double GetImage() {
        return image_;
    }

    friend Complex Add(Complex& complex1, Complex& complex2);
    void PrintComplex() const;

};


#endif