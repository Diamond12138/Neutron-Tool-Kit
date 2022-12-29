#ifndef __NEUTRON_GRAPHICS_MODELBUILDER_HPP__
#define __NEUTRON_GRAPHICS_MODELBUILDER_HPP__

#include "Model.hpp"

namespace ntk
{
    namespace Graphics
    {
        class ModelBuilder : public Object
        {
        public:
            ModelBuilder();
            ModelBuilder(const ModelBuilder &from);
            ~ModelBuilder();

        public:
            ModelBuilder &operator=(const ModelBuilder &from);

        public:
            /// @brief 创建一个四边形，模型会被分割为三角面
            /// @param size 大小，如果为负值，会反转模型
            /// @return 四边形的模型
            static Model<> create_quad_triangulated(glm::vec2 size = glm::vec2(1.0f, 1.0f));
        };
    } // namespace Graphics

} // namespace ntk

#endif