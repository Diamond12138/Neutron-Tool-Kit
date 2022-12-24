#include <iostream>
#define NEUTRON_WINDOW_IMPL_SFML
#include "../src/Neutron.hpp"

class MyApp : public ntk::Window::SFApplication
{
    public:
    MyApp() : ntk::Window::SFApplication("", glm::ivec2(640, 480)) {}

    public:
    void onDisplay()
    {
        m_window->clear();
    }
};

int main(int argc, char *argv[])
{
    MyApp app;
    return app.run();
}