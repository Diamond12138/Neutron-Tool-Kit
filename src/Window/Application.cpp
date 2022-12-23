#ifndef __NEUTRON_WINDOW_APPLICATION_CPP__
#define __NEUTRON_WINDOW_APPLICATION_CPP__

#include "Application.hpp"

namespace ntk
{
    namespace Window
    {
        void Application::quit(int code)
        {
            m_exit_code = code;
        }

        bool Application::is_running()
        {
            return m_is_running;
        }

        int Application::get_exit_code()
        {
            if (m_is_running)
                return 0;
            else
                return m_exit_code;
        }

        void Application::onCreated()
        {
        }

        void Application::onDisplay()
        {
        }

        void Application::onDestroyed()
        {
        }

        void Application::onResized(glm::ivec2 new_size)
        {
        }

        void Application::onKeyPressed(uint8_t key)
        {
        }
    } // namespace Window

} // namespace ntk

#endif