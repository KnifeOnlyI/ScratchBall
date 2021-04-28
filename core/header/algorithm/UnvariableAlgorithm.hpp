#ifndef SCRATCHBALL_UNVARIABLEALGORITHM_HPP
#define SCRATCHBALL_UNVARIABLEALGORITHM_HPP

#include "algorithm/BaseAlgorithm.hpp"

class UnvariableAlgorithm : public BaseAlgorithm
{
public:

    explicit UnvariableAlgorithm(Context &context);

    void load() const override;

    void update() const override;
};

#endif //SCRATCHBALL_UNVARIABLEALGORITHM_HPP
