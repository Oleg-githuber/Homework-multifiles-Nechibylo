#include "Counter.h"

Counter::Counter() = default;

Counter::Counter(int value) : count{ value }
{

}

void Counter::increaseCount()
{
    ++count;
}

void Counter::decreaseCount()
{
    --count;
}

int Counter::getCount()
{
    return count;
}