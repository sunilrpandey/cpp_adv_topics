#include<iostream>

class Singleton
{
    private:
        static int init_counter; 
        Singleton(){   
            init_counter++;         
        };
        

    public:
    ~Singleton(){};
    static Singleton& instance(){
        static Singleton obj;
        return obj;
    }
    static int getCounter(){
        return init_counter;
        }
};
int Singleton :: init_counter = 100;

int main()
{
    Singleton& obj1 = Singleton::instance();
    Singleton& obj2 = Singleton::instance();



    if (&obj1 == &obj2){
        std::cout << "\nOnly one instance was created!";
        std::cout << "\naddress of obj1" << &obj1 << "\naddress of obj2" << &obj2;
        if (obj1.getCounter() == obj2.getCounter())
            std::cout << "\nCounters are same : " << obj2.getCounter();
    } else {
        std::cout << "\nSingleton failed!";

    }
    return 0;
}