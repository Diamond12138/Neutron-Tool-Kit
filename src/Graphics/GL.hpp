#ifndef __NEUTRON_GRAPHICS_GL_HPP__
#define __NEUTRON_GRAPHICS_GL_HPP__

#include <GL/glew.h>

namespace ntk
{
    namespace Graphics
    {
        bool initGL()
        {
            bool success = glewInit() == GLEW_OK;
            if (success)
            {
            }
            else
            {
            }
            return success;
        }
    } // namespace Graphics

} // namespace ntk

#endif