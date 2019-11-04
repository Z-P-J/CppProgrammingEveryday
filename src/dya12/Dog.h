#ifndef DOG_H
#define DOG_H

class Dog {
private:
    char* name_;
    int age_;
    static int dogs_;

public:
    Dog();
    Dog(char* name, int age);
    ~Dog();

    void AddDogs(int dogs);
    static int GetDogs();
};

#endif