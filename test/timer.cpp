#include <iostream>
#define NEUTRON_WINDOW_IMPL_SFML
#include "../src/Neutron.hpp"

int main(int argc,char* argv[])
{
    ntk::Utils::Timer timer;

    // 开始计时2秒
    timer.start();
    while (ntk::Utils::getCurrentTime().as_clocks() <= 2000)
        std::cout << ntk::Utils::getCurrentTime().as_clocks() << std::endl;
    
    // 暂停2秒
    timer.stop();
    while (ntk::Utils::getCurrentTime().as_clocks() <= 4000)
        std::cout << ntk::Utils::getCurrentTime().as_clocks() << std::endl;
    timer.start();

    // 再计时2秒
    while (ntk::Utils::getCurrentTime().as_clocks() <= 6000)
        std::cout << ntk::Utils::getCurrentTime().as_clocks() << std::endl;
    timer.stop();

    std::cout << timer.get_total_time().as_seconds() << std::endl;
    return 0;
}