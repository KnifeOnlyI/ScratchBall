#include "effolkronium/random.hpp"
#include "util/RandomUtil.hpp"

float RandomUtil::getFloat(int min, int max)
{
    return static_cast<float>(getInt(min, max));
}

int RandomUtil::getInt(int min, int max)
{
    std::uniform_int_distribution<int> distribution(min, max);

    return effolkronium::random_static::get(min, max);
}
