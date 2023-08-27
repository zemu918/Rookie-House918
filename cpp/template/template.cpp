#include <string>
#include <iostream>
template<class NameType, class PriceType = int>//default
class Byd
{ 
	public:
        Byd(NameType name, PriceType price){
		m_Name = name;
		m_Price = price;
	} 
	void showByd(){
	std::cout << "name: " << m_Name << " price: " << m_Price << std::endl;
	}
	public:
	NameType m_Name;
	PriceType m_Price;
};
// all type
	void printByd1(Byd<std::string,int> &b){
	b.showByd();
	}
	void test01(){
	//Byd b1("tang", 20); //c++17
	Byd<std::string,int> b1("tang", 20);
	printByd1(b1);
	}	   
// template parameter
	template <class T1,class T2>
	void printByd2(Byd<T1,T2>&b){
	b.showByd();
	std::cout << "type of T1: " << typeid(T1).name() << std::endl;
	std::cout << "type of T2：" << typeid(T2).name() << std::endl;
	}
	void test02(){
	Byd b2("song", 10); 
	printByd2(b2);
	}
// template class
	template <class T>
	void printByd3(T &b){
	b.showByd();
	std::cout << "type of T: " << typeid(T).name() << std::endl;
	}
        void test03(){
	Byd b3("qin", 5);
	printByd3(b3);
	}
   	int main() {
	test01();
	test02();
	test03();
	return 0;
}	














