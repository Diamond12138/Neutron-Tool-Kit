#include <iostream>
#include "../src/Neutron.hpp"
#include "../src/Neutron.cpp"

class MyApp : public ntk::Window::SFApplication
{
private:
    ntk::Graphics::Program program;
    ntk::Graphics::VertexArrayObject vao;

public:
    MyApp() : ntk::Window::SFApplication("Triangle", glm::ivec2(640, 480)) {}

public:
    void onCreated()
    {
        ntk::Graphics::loadGL();

        program.load_from_file("bin/shaders/1.vert", "bin/shaders/1.frag");

        std::vector<GLfloat> vertices =
            {
                0.0f,
                0.5f,
                0.0f,

                -0.5f,
                -0.5f,
                0.0f,

                0.5f,
                -0.5f,
                0.0f,
            };

        vao.generate();
        vao.bind();
        ntk::Graphics::VertexBufferObject vbo = ntk::Graphics::VertexBufferObject::createVBO_single(vertices, 0, 3);
        vao.unbind();
        vbo.delete_object();
    }

    void onDisplay()
    {
        glClear(GL_COLOR_BUFFER_BIT);
        program.use_program();
        vao.bind();
        glDrawArrays(GL_TRIANGLES, 0, 3);
        vao.unbind();
    }

    void onDestroyed()
    {
        program.delete_object();
        program.delete_shaders();
        vao.delete_object();
    }
};

int main()
{
    MyApp app;
    return app.run();
}