#include <iostream>
#include "template.h"

	template <class NameType,class PriceType>
	Byd<NameType,PriceType>::Byd(NameType name, PriceType price):m_Name(name),m_Price(price){};

	template <class NameType,class PriceType>
        void Byd<NameType,PriceType>::showByd(){
        std::cout << "name: " << m_Name << " price: " << m_Price << std::endl;
        }
     
        void dummyfun(){
  	  Byd<std::string, int>  nothing("nothing", 0);
  	  nothing.showByd();
   }


