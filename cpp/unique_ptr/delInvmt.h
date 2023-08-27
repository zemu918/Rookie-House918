#include <iostream>

class Interaction{
public:
	virtual void Quantization() = 0;
	virtual ~Interaction(){};
};

class strong: public Interaction{
public:
	void Quantization(){
		std::cout << "gluon" << std::endl; 
	}
	strong(){
		std::cout << "constructing strong" <<std::endl;
	}
	~strong(){
                std::cout << "destructing strong" <<std::endl;
        }
};

class weak: public Interaction{
public:
        void Quantization(){
                std::cout << "Z/W boson" << std::endl;
        }
        weak(){
                std::cout << "constructing weak" <<std::endl;
        }
        ~weak(){
                std::cout << "destructing weak" <<std::endl;              }
};

class electromagnetic: public Interaction{
public:
        void Quantization(){
                std::cout << "photon" << std::endl;
        }
        electromagnetic(){
        std::cout << "constructing electromagnetic" <<std::endl;
        }
        ~electromagnetic(){
        std::cout << "destructing electromagnetic" <<std::endl;           }
};

class gravitational: public Interaction{
public:
        void Quantization(){
                std::cout << "graviton" << std::endl;
        }
        gravitational(){
        std::cout << "constructing gravitational" <<std::endl;
        }
        ~gravitational(){
        std::cout << "destructing gravitational" <<std::endl;             }
}; 












