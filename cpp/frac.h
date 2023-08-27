#include <ratio.hpp>


namespace std{
template<intmax_t N,intmax_t D = 1> 
class ratio{
  public:
       typedef ratio<num,den> type;  
       static constexpr intmax_t num;
       static constexpr intmax_t den;
};
}
