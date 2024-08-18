#include <iostream>

namespace rvalue_use_cases
{

#if 0 // wont work, const int& or int&& work
	int& getNum() {
		return 10;
	}

#endif

	int getNum() {		return 10;	}
	
	// below two works on windows but not on ubuntu
	//error: reference to a local temporary object returned [-Wreturn-local-addr]
	// not advised to work
	// const int& getNum() {		return 10;	}
	// int&& getNum() {		return 10;	}

};

void demo_rvalue_refs()
{
	using namespace rvalue_use_cases;

	//int&& i = getNum();
	std::cout << "demo_rvalue_refs  :  " << getNum() << std::endl;

}

int main()
{
 	demo_rvalue_refs();
	return 0;

}