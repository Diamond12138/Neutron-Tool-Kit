#ifndef __NEUTRON_GRAPHICS_MODELBUILDER_CPP__
#define __NEUTRON_GRAPHICS_MODELBUILDER_CPP__

#include "ModelBuilder.hpp"

namespace ntk
{
    namespace Graphics
    {
        ModelBuilder::ModelBuilder() {}
        ModelBuilder::ModelBuilder(const ModelBuilder &from) {}
        ModelBuilder::~ModelBuilder() {}
        ModelBuilder &ModelBuilder::operator=(const ModelBuilder &from) { return *this; }

        Model<> ModelBuilder::create_quad_triangulated(glm::vec2 size)
        {
            glm::vec2 half = size / 2.0f;

            std::vector<glm::vec3> vertices =
                {
                    glm::vec3(-half.x, half.y, 0.0f),
                    glm::vec3(-half.x, -half.y, 0.0f),
                    glm::vec3(half.x, -half.y, 0.0f),

                    glm::vec3(-half.x, half.y, 0.0f),
                    glm::vec3(half.x, -half.y, 0.0f),
                    glm::vec3(half.x, half.y, 0.0f),
                };

            std::vector<glm::vec3> normals =
                {
                    glm::vec3(0.0f, 0.0f, 1.0f),
                    glm::vec3(0.0f, 0.0f, 1.0f),
                    glm::vec3(0.0f, 0.0f, 1.0f),

                    glm::vec3(0.0f, 0.0f, 1.0f),
                    glm::vec3(0.0f, 0.0f, 1.0f),
                    glm::vec3(0.0f, 0.0f, 1.0f),
                };

            std::vector<glm::vec2> texCoords =
                {
                    glm::vec2(0.0f, 0.0f),
                    glm::vec2(0.0f, 1.0f),
                    glm::vec2(1.0f, 1.0f),

                    glm::vec2(0.0f, 0.0f),
                    glm::vec2(1.0f, 1.0f),
                    glm::vec2(1.0f, 0.0f),
                };

            return Model<>(vertices, normals, texCoords);
        }
    } // namespace Graphics

} // namespace ntk

#endif