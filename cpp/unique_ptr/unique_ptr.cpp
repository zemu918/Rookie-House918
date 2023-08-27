#include <memory>
#include <iostream>

int main(){    
    std::unique_ptr<int> fPtr1;
    std::unique_ptr<int> fPtr2(new int(4));
    auto fPtr3 = std::make_unique<int>();
    
 	
    std::cout << "fPtr2 release before:" << fPtr2.get() << std::endl;
    int *pF = fPtr2.release();
    std::cout << "fPtr2 release after:" << fPtr2.get() << " and pF value:" << *pF << std::endl;
    
    std::cout << "move before fPtr1 address:" << fPtr1.get() << " fPtr3 address:" << fPtr3.get() << std::endl;
    fPtr1 = std::move(fPtr3);
    std::cout << "move after fPtr1 address:" << fPtr1.get() << " fPtr3 address:" << fPtr3.get() << std::endl;

    std::cout << "reset before fPtr1 address:" << fPtr1.get() << std::endl;
    fPtr1.reset();
    std::cout << "reset after fPtr1 address:" << fPtr1.get() << std::endl;
return 0;
}
