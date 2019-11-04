#include "Dog.h"

// 静态变量在此初始化
int Dog::dogs_ = 25;

Dog::Dog() : name_(""), age_(0) {
}

Dog::Dog(char* name, int age) : name_(name), age_(age) {
}

Dog::~Dog() {
}

void Dog::AddDogs(int dogs) {
    dogs_ += dogs;
}

int Dog::GetDogs() {
    return dogs_;
}