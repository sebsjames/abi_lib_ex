#include <vector>
#include "abi_ex.h"

std::vector<float>
abi_ex::make_a_vector()
{
    std::vector<float> v (20, 2.0f);
    return v;
}
