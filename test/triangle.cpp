#include <iostream>
#include "../src/Neutron.hpp"
#include "../src/Neutron.cpp"

class MyApp : public ntk::Window::SFApplication
{
private:
    ntk::Graphics::Shader shader1;

public:
    MyApp() : ntk::Window::SFApplication("Triangle", glm::ivec2(640, 480)), shader1(GL_VERTEX_SHADER) {}

public:
    void onCreated()
    {
        ntk::Graphics::loadGL();

        shader1.load_from_file("bin/shaders/1.vert");
    }

    void onDisplay()
    {
        glClear(GL_COLOR_BUFFER_BIT);
    }

    void onDestroyed()
    {
        shader1.delete_object();
    }
};

int main()
{
    MyApp app;
    return app.run();
}