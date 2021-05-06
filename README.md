# Lab01 - Herencia

El siguiente código en **C++** corre perfectamente, sin embargo tiene varios puntos que tienen que mejorar siguiendo los principos de la herencia de clases, accesos, sobre-escritura, funciones virtuales y destructores.

-  Corregir el siguiente código de forma tal que aplique los conocimientos descritos en el curso.

```c++
#include <iostream>  // allows program to output data to the screen

struct Base {
    virtual void do_something() {}
};

struct Derived1 : Base {
    virtual void do_semothing() {
        std::cout << "Derived1!!!" << std::endl;
    }
};

struct Derived2 : Base {
    virtual void do_semothing() {
        std::cout << "Derived2!!!" << std::endl;
    }
};

// function main begins program execution
int main(int argc, const char *argv[]) {
    std::cout << "Welcome to the UNA!" << std::endl;

    Derived1 derived1;
    derived1.do_semothing();

    Derived2 derived2;
    derived2.do_semothing();

}  // end function main
```

