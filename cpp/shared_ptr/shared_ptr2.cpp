#include <iostream>
#include <string>
#include <memory>
	
	std::shared_ptr<std::string> factory(const char* p) {
    	std::shared_ptr<std::string> p1 = std::make_shared<std::string>(p);
    	return p1;
	}

	void use_factory(){
    	std::shared_ptr<std::string> p = factory("helloworld");
   	int num1 = p.use_count();
    	std::cout << *p << "   "<< num1 << std::endl;
	}

	std::shared_ptr<std::string> return_share_ptr(){
    	std::shared_ptr<std::string> p = factory("helloworld");
	std::cout << *p << std::endl;
    	return p; //retrun refernum+1
	}  

int main()
{
    use_factory();
    auto p = return_share_ptr();
    std::cout << p.use_count() << std::endl;
    return 0;
}








