#include <iostream>
#include "../src/Neutron.hpp"

class MyApp : public ntk::Window::SFApplication
{
public:
    MyApp() : ntk::Window::SFApplication("Triangle", glm::ivec2(640, 480)) {}

public:
    void onCreated()
    {
        ntk::Graphics::loadGL();
    }

    void onDisplay()
    {

    }

    void onDestroyed()
    {
    }
};

int main()
{
    MyApp app;
    return app.run();
}