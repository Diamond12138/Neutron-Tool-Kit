#ifndef __NEUTRON_WINDOW_IMPL_SFML_CPP__
#define __NEUTRON_WINDOW_IMPL_SFML_CPP__

#include "SFML_Impl.hpp"

namespace ntk
{
    namespace Window
    {
        void SFApplication::create(sf::VideoMode mode, std::string title, sf::Uint32 style, const sf::ContextSettings &settings)
        {
            m_window = std::make_shared<sf::RenderWindow>(mode, title, style, settings);
        }

        SFApplication::SFApplication(std::string title, glm::ivec2 size)
        {
            create(sf::VideoMode(size.x, size.y), title, sf::Style::Default, DEFAULT_CONTEXT_SETTINGS);
        }

        SFApplication::SFApplication(std::string title, glm::ivec2 size, sf::Uint32 style)
        {
            create(sf::VideoMode(size.x, size.y), title, style, DEFAULT_CONTEXT_SETTINGS);
        }

        SFApplication::SFApplication(std::string title, glm::ivec2 size, glm::uvec2 version)
        {
            sf::ContextSettings settings = DEFAULT_CONTEXT_SETTINGS;
            settings.majorVersion = version.x;
            settings.minorVersion = version.y;
            create(sf::VideoMode(size.x, size.y), title, sf::Style::Default, settings);
        }

        SFApplication::SFApplication(std::string title, glm::ivec2 size, glm::uvec3 framebuffer_config)
        {
            sf::ContextSettings settings = DEFAULT_CONTEXT_SETTINGS;
            settings.depthBits = framebuffer_config.x;
            settings.stencilBits = framebuffer_config.y;
            settings.antialiasingLevel = framebuffer_config.z;
            create(sf::VideoMode(size.x, size.y), title, sf::Style::Default, settings);
        }

        SFApplication::SFApplication(std::string title, glm::ivec2 size, sf::Uint32 style, glm::uvec2 version)
        {
            sf::ContextSettings settings = DEFAULT_CONTEXT_SETTINGS;
            settings.majorVersion = version.x;
            settings.minorVersion = version.y;
            create(sf::VideoMode(size.x, size.y), title, style, settings);
        }

        SFApplication::SFApplication(std::string title, glm::ivec2 size, sf::Uint32 style, glm::uvec2 version, glm::uvec3 framebuffer_config)
        {
            sf::ContextSettings settings = DEFAULT_CONTEXT_SETTINGS;
            settings.majorVersion = version.x;
            settings.minorVersion = version.y;
            settings.depthBits = framebuffer_config.x;
            settings.stencilBits = framebuffer_config.y;
            settings.antialiasingLevel = framebuffer_config.z;
            create(sf::VideoMode(size.x, size.y), title, style, settings);
        }

        SFApplication::SFApplication(sf::VideoMode mode, std::string title, sf::Uint32 style, const sf::ContextSettings &settings)
        {
            create(mode, title, style, settings);
        }

        SFApplication::SFApplication(const SFApplication &from)
        {
            *this = from;
        }

        SFApplication::~SFApplication()
        {
        }

        SFApplication &SFApplication::operator=(const SFApplication &from)
        {
            m_window = from.m_window;
            return *this;
        }

        int SFApplication::run()
        {
            sf::Event event;
            while(m_is_running&&m_window->isOpen())
            {
                while(m_window->pollEvent(event))
                {
                    
                }
            }
        }

        glm::ivec2 SFApplication::get_mouse_position()
        {
        }
    } // namespace Window

} // namespace ntk

#endif