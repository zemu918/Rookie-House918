#include "delInvmt.h"

auto delInteract = [](Interaction* pInteraction)         
                {                                   
                    makeLogEntry(pInteraction);
                    delete pInteraction; 
                };

template<typename... Ts>
std::unique_ptr<Interaction, decltype(delInteract)>     
makeInteraction(Ts&&... params)
{
    std::unique_ptr<Interaction, decltype(delInteract)> 
        pInt(nullptr, delInteract);
    if ( /*creat strong object*/)
    {
        pInt.reset(new strong(std::forward<Ts>(params)...));
    }
    else if ( /*creat weak object*/ )   
    {     
        pInt.reset(new weak(std::forward<Ts>(params)...));   
    }   
    else if ( /*creat electromagnetic object*/ )   
    {     
        pInt.reset(new electromagentic(std::forward<Ts>(params)...));
    }   
    else if ( /*creat gravitational object*/ )
    {
        pInt.reset(new gravitational(std::forward<Ts>(params)...));
    }
    return pInt;
}


/*
template<typename... Ts>
auto makeInteraction(Ts&&... params)                 
{
    auto delInteract = [](Interaction* pInteraction)     
                    {                               
                        makeLogEntry(pInteraction);
                        delete pInteraction; 
		    };



auto delInteract1 = [](Interaction* pInteraction)        
                 {                                  
                     makeLogEntry(pInteraction);
                     delete pInteraction; 
                 };

template<typename... Ts>                            
std::unique_ptr<Interaction, decltype(delInteract1)>    
makeInteraction(Ts&&... args);


void delInteract2(Interaction* pInteraction)             
{                                                   
    makeLogEntry(pInteraction);
    delete pInteraction;
}
template<typename... Ts>                            
std::unique_ptr<Interaction, void (*)(Interaction*)>  
makeInteraction(Ts&&... params);                     



class Interaction {
public:
    …
    virtual ~Interaction();          
    …
};

*/





