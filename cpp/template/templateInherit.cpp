#include <iostream>

template <class T>
class Base{
public:
	~Base(){std::cout << typeid(T).name() << std::endl;}
	T m;
};

template <class T1, class T2>
class Son:public Base<T2>
{
public:
	Son(){
	std::cout << typeid(T1).name() << std::endl;
	std::cout << typeid(T2).name() << std::endl;
	}	
};
	void test(){
	Son<int, char> s1;
	}

int main()
{
	test();
	return 0;
}

