#pragma once
class Counter
{
private:

    int count{ 1 };

public:

    Counter();

    Counter(int value);

    void increaseCount();   // Инкремент счетчика

    void decreaseCount();   // Декремент счетчика

    int getCount();
};

