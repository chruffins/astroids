#include<unordered_map>
#include<string>

#include<allegro5/allegro_font.h>

namespace allegro {
    class font {
    private:
        std::unordered_map<int, ALLEGRO_FONT*> fonts;
        std::string src_filename;
        static ALLEGRO_FONT *default_font;
        static bool default_font_loaded;
    public:
        font(std::string);
        ~font();

        ALLEGRO_FONT *get_font(int);
        bool load_font(int);
        bool deload_font(int);

        static ALLEGRO_FONT *get_default_font();
        static void load_default_font();
        static void deload_default_font();
    };
}