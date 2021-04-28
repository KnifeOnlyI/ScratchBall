#include "algorithm/BaseAlgorithm.hpp"

BaseAlgorithm::BaseAlgorithm(Context &context)
    : _context {context}
{
}

Context &BaseAlgorithm::getContext() const
{
    return _context;
}
