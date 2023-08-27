#include<iostream>

class Person1
{ 
public:
	void showPerson1()
{
	std::cout << "Person1 show" << std::endl;
}
};

class Person2
{ 
public:
	void showPerson2(){
	std::cout << "Person2 show" << std::endl;
}
};

template<class T>
class MyClass
{ 
public:
   T obj;
	void fun1() { obj.showPerson1();}
	void fun2() { obj.showPerson2();}
};
    void test01(){
  	MyClass<Person2> m;
 	m.fun2();
} 
int main() {
	test01();
return 0;
}



