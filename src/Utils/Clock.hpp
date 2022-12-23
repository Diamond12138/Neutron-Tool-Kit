#ifndef __NEUTRON_UTILS_CLOCK_HPP__
#define __NEUTRON_UTILS_CLOCK_HPP__

#include "../Base/Object.hpp"
#include "Time.hpp"

namespace ntk
{
    namespace Utils
    {
        /// @brief 时钟类
        class Clock : public Object
        {
        private:
            /// @brief 时间总计
            Time m_total_time;

            /// @brief 计时开始时间
            Time m_starting_time;

            /// @brief 是否正在计时
            bool m_is_started;

            /// @brief 上一次计时了多久
            Time m_during_time;

        public:
            Clock();
            Clock(const Clock &from);
            ~Clock();

        public:
            Clock &operator=(const Clock &from);

        public:
            /// @brief 开始计时
            /// @return 本对象
            Clock &start();

            /// @brief 停止计时
            /// @return 自开始时经过了多久
            Clock &stop();

            /// @brief 重置时钟
            /// @return 本对象
            Clock &reset();

            /// @brief 获取时间总计
            /// @return 时间总计
            Time get_total_time();

            /// @brief 获取计时的起始时间
            /// @return 计时的起始时间
            Time get_starting_time();

            /// @brief 是否正在计时
            /// @return 是否正在计时
            bool is_started();

            /// @brief 获取上次计时了多久
            /// @return 上次计时的时长
            Time get_during_time();
        };
    } // namespace Utils

} // namespace ntk

#endif