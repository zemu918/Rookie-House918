
template<typename... Args>
struct Sum;

template<typename First, typename... Rest>
struct Sum<First, Rest...>
{
    enum { value = Sum<First>::value + Sum<Rest...>::value };
};

template<typename Last>
struct Sum<Last>
{
    enum { value = sizeof (Last) };
};

template<typename First, typename... Rest>
struct Sum
{
    enum { value = Sum<First>::value + Sum<Rest...>::value };
};

template<typename Last>
struct Sum<Last>
{
    enum{ value = sizeof(Last) };
};
