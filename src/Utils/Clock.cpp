#ifndef __NEUTRON_UTILS_CLOCK_CPP__
#define __NEUTRON_UTILS_CLOCK_CPP__

#include "Clock.hpp"

namespace ntk
{
    namespace Utils
    {
        Clock::Clock() : m_total_time(0), m_starting_time(0), m_is_started(false), m_during_time(0) {}
        Clock::Clock(const Clock &from) { *this = from; }
        Clock::~Clock() {}

        Clock &Clock::operator=(const Clock &from)
        {
            m_total_time = from.m_total_time;
            m_starting_time = from.m_starting_time;
            m_is_started = from.m_is_started;
            m_during_time = from.m_during_time;
            return *this;
        }

        Clock &Clock::start()
        {
            if (!m_is_started)
            {
                m_is_started = true;
                m_starting_time = getCurrentTime();
            }
            return *this;
        }

        Clock &Clock::stop()
        {
            if (m_is_started)
            {
                m_is_started = false;
                Time current_time = getCurrentTime();
                m_during_time = current_time - m_starting_time;
                m_total_time += m_during_time;
            }
            return *this;
        }

        Clock &Clock::reset()
        {
            m_total_time = ZeroSecond;
            m_starting_time = ZeroSecond;
            m_is_started = false;
            m_during_time = ZeroSecond;
            return *this;
        }

        Time Clock::get_total_time()
        {
            return m_total_time;
        }

        Time Clock::get_starting_time()
        {
            return m_starting_time;
        }

        bool Clock::is_started()
        {
            return m_is_started;
        }

        Time Clock::get_during_time()
        {
            return m_during_time;
        }
    } // namespace Utils

} // namespace ntk

#endif