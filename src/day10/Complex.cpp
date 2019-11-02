#include "Complex.h"

#include "iostream"
using namespace std;

Complex::Complex(/* args */) 
    : real_(0), image_(0) {

}

Complex::Complex(double real, double  image) 
    : real_(real), image_(image) {

}

Complex::~Complex() {

}

Complex Add(Complex& complex1, Complex& complex2) {
    double real = complex1.GetReal() + complex2.GetReal();
    double image = complex1.GetImage() + complex2.GetImage();
    return Complex(real, image);
}

void Complex::PrintComplex() const {
    cout << real_;
    if (image_ != 0) {
        if (image_ < 0) {
            cout << " - " << -image_;
        } else {
            cout << " + " << image_;
        }
    }
    cout << endl;
}