#ifndef __NEUTRON_GRAPHICS_FONT_CPP__
#define __NEUTRON_GRAPHICS_FONT_CPP__

#include "Font.hpp"

namespace ntk
{
    namespace Graphics
    {
        Font::Font() {}
        Font::Font(const Font &from) { *this = from; }
        Font::~Font() {}

        Font &Font::operator=(const Font &from)
        {
            m_glyphs = from.m_glyphs;
            return *this;
        }

        void Font::release_all()
        {
            for (auto ptr_i = m_glyphs.begin(); ptr_i != m_glyphs.end(); ptr_i++)
            {
                std::map<std::uint32_t, Glyph> &glyphs = ptr_i->second;
                for (auto ptr_j = glyphs.begin(); ptr_j != glyphs.end(); ptr_j++)
                {
                    ptr_j->second.release();
                }
            }
            m_glyphs.clear();
        }

        Glyph *Font::get_glyph(std::uint32_t code, std::uint32_t size)
        {
            auto i = m_glyphs.find(size);
            if (i != m_glyphs.cend())
            {
                auto j = i->second.find(code);
                if (j != i->second.cend())
                {
                    return &j->second;
                }
            }
            return nullptr;
        }
    } // namespace Graphics

} // namespace ntk

#endif