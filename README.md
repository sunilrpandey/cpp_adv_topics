# Rough Notes
    while overloading new/delete it has to be static. it is static even if you dont write it
    New operator is  used to allocate memory for an object that does not yet exist hence there is no instance to refer to


    if we make overloaded new/delete operator private? \
    Statement like below would give error\
    MyClass * p = new MyClass;\
    If you delete overloaded new operator (= delete),  you wont be able to create object on heap\

## Placement new operator 
    
```
MyClass buffer[2];
MyClass * rbt = new (&buffer[1]) MyClass(); 

OR
MyClass buffer;
MyClass * rbt = new (&buffer) MyClass(); 
```

# TOCHECK

