#include <iostream>
#include <ctime>
#include "../../src/Neutron.hpp"

int main()
{
    /*time_t now = time(nullptr);
    tm *t = localtime(&now);
    std::cout << asctime(t) << std::endl;*/
    ntk::Utils::log.logi("title1", "content1");
    ntk::Utils::log.set_auto_output(false);
    ntk::Utils::log.logi("title2", "content2");
    ntk::Utils::log.output_all();
    return 0;
}