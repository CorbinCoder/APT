#include <iostream>
using namespace std;


class User{
public:
    User(std::string name, std::string address, int age);

    std::string getName();
    std::string getAddress();
    int getAge();

    void setName();
    void setAddress();
    void setAge();

private:
    std::string name;
    std::string address;
    int age;
};

int main()
{
    std::cout << "Hello World!" << std:endl;

    int a = 1;
    int b = 2;

    int* ref_a = &a;
    int* ref_b = &b;

    std::cout << "a is : " << ref_a << std::endl;
    std::cout << "b is : " << ref_b << std::endl;

    ref_a = 5;
    ref_b = 10;

    std::cout << "a is : " << ref_a << std::endl;
    std::cout << "b is : " << ref_b << std::endl;


    return 0;
}

User::User(std::string name, std::string address, int age) {
    this->name = name;
    this->address = address;
    this->age = age;
}

std::string User::getName() {
    return name;
}

std::string User::getAddress() {
    return address;
}

int User::getAge() {
    return age;
}

void User::setName(std::string name) {
    this->name = name;
}

void User::setAddress(std::string address) {
    this->address = address;
}

void User::setAge(int age) {
    this->age = age;
}