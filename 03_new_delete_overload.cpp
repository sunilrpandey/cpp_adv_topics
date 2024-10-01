#include <iostream>

class A
{
    static int objCounter;
    public:
    A() {
        std::cout << "A Count : "  << objCounter << std::endl;

    }

    ~A() {
        std::cout << "A destructed" << std::endl;
    }


    //overload new operator
    void* operator new (size_t sz) {
        objCounter++;
        std::cout << "Obj on Heap : " << objCounter << std::endl;
        return ::operator new(sz);
    }

    //mimicking placement new
    // overload new operator, please note first argument would be size_t
    void* operator new (size_t sz, A* adr) {
        return adr;
    }
};

int A:: objCounter = 0;


int main()
{
    A * p = new A;
    delete p;

    //placement new : to work either use overloaded new operator or dont overload at all
    A arrA[2];
    A* adrA0 = &arrA[0];
    A * pA0 = new (adrA0) A();

    return 0;
}
