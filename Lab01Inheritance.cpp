#include <iostream>  // allows program to output data to the screen
using namespace std;
struct Base {
    virtual void do_something() const {
        cout<<"PADRE"<<endl;
    }
    virtual ~Base() {
        cout<<"Delete base"<<endl;
    }
};

struct Derived1 : Base {
     void do_something()const override{
        std::cout << "Derived1!!!" << std::endl;
    }
    ~Derived1(){
         cout<<"Delete derived1"<<endl;
     }
};

struct Derived2 : Base {
    void do_something() const override {
        std::cout << "Derived2!!!" << std::endl;
    }
    ~Derived2(){
        cout<<"Delete derived2"<<endl;
    }
};

// function main begins program execution
int main(int argc, const char *argv[]) {
    std::cout << "Welcome to the UNA!" << std::endl;

    Base* padre= new Base();
    padre->do_something();
    delete padre;
    Base * derived1= new Derived1();
    derived1->do_something();

    Base* derived2= new Derived2();
    derived2->do_something();

    delete derived1;
    delete derived2;
}  // end function main