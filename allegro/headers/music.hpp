#ifndef ALLEGRO_GAME_MUSIC
#define ALLEGRO_GAME_MUSIC

#include<allegro5/allegro_audio.h>
#include<allegro5/allegro_acodec.h>

#include<string>

namespace allegro {
    class music {
    private:
        ALLEGRO_AUDIO_STREAM *stream;
        std::string name;
        float volume;
        float gain;
        float pan;
        ALLEGRO_PLAYMODE playmode;
    public:
        music(std::string, std::string);
        music(std::string, std::string, float, float, float, ALLEGRO_PLAYMODE);
        ~music();

        void play();
        void stop();
    };
}

#endif