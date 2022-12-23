#ifndef __NEUTRON_WINDOW_CPP__
#define __NEUTRON_WINDOW_CPP__

#include "Window.hpp"

#include "Window/Application.cpp"

#if defined(NEUTRON_WINDOW_IMPL_SFML)
#   include "Window/SFML_Impl.cpp"
#elif defined(NEUTRON_WINDOW_IMPL_FREEGLUT)
#   error FreeGLUT is not supported temporarily.
#elif defined(NEUTRON_WINDOW_IMPL_WINDOWS)
#   error Native Windows is not supported temporarily.
#endif

#endif