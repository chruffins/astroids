#include "headers/font.hpp"

namespace allegro {
    ALLEGRO_FONT *font::default_font = NULL;
    bool font::default_font_loaded = false;

    font::font(std::string src_filename) {
        this->src_filename = src_filename;
    }

    font::~font() {
        for (auto const& sizes : fonts) {
            al_destroy_font(sizes.second);
        }
    }

    ALLEGRO_FONT *font::get_font(int size) {
        bool success = load_font(size);
        if (!success) {
            return NULL;
        }

        // font is GUARANTEED to be loaded;
        return fonts[size];
    }

    bool font::load_font(int size) {
        auto search = fonts.find(size);

        if (search == fonts.end()) {
            ALLEGRO_FONT *p = al_load_font(src_filename.c_str(), size, 0);
            if (p == NULL) {
                return false;
            }

            fonts[size] = p;

            return true;
        } else {
            return false;
        }
    }

    bool font::deload_font(int size) {
        auto search = fonts.find(size);

        if (search != fonts.end()) {
            al_destroy_font(fonts[size]);
            fonts.erase(size);
            return true;
        } else {
            return false;
        }
    }

    ALLEGRO_FONT *font::get_default_font() {
        if (default_font_loaded) {
            return default_font;
        }
    }

    void font::load_default_font() {
        if (!default_font_loaded) {
            default_font = al_create_builtin_font();
            default_font_loaded = true;
        }
    }

    void font::deload_default_font() {
        if (default_font_loaded) {
            al_destroy_font(default_font);
            default_font_loaded = false;
        }
    }
}