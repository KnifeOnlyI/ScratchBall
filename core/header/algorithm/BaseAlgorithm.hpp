#ifndef SCRATCHBALL_BASEALGORITHM_HPP
#define SCRATCHBALL_BASEALGORITHM_HPP

#include "Context.hpp"

class BaseAlgorithm
{
public:

    explicit BaseAlgorithm(Context &context);

    virtual void load() const = 0;

    virtual void update() const = 0;

    [[nodiscard]] Context &getContext() const;

private:

    Context &_context;
};

#endif //SCRATCHBALL_BASEALGORITHM_HPP
