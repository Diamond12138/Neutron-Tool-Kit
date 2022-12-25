#include <iostream>
#include "../src/Neutron.hpp"
#include "../src/Neutron.cpp"
#include "../src/Utils/Time/CountdownTimer.hpp"
#include "../src/Utils/Time/CountdownTimer.cpp"

class MyCT : public ntk::Utils::CountdownTimer
{
public:
    MyCT() : ntk::Utils::CountdownTimer() {}

public:
    void onStarted()
    {
        std::cout << "start:" << clock() << std::endl;
    }

    void onStoped()
    {
        std::cout << "stop:" << clock() << std::endl;
    }

    void onRestarted()
    {
        std::cout << "restart:" << clock() << std::endl;
    }

    void onTimeUp()
    {
        std::cout << "timeup:" << clock() << std::endl;
    }

    void onLoop(const ntk::Utils::Time& delta_time)
    {
        //std::cout << "loop:" << delta_time.as_clocks() << std::endl;
    }
};

int main()
{
    MyCT ct;
    ct.set_duration(ntk::Utils::Time(2 * CLOCKS_PER_SEC));
    ct.start();
    ct.stop();
    ct.restart();
    return 0;
}