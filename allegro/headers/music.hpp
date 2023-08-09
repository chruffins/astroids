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
        float gain;
        float pan;
        ALLEGRO_PLAYMODE playmode;
    public:
        music(std::string, std::string);
        music(std::string, std::string, float, float, ALLEGRO_PLAYMODE);
        ~music();

        void play();
        void stop();

        void set_gain(float);
        void set_pan(float);
        void set_playmode(ALLEGRO_PLAYMODE);

        float get_gain();
        float get_pan();
        ALLEGRO_PLAYMODE get_playmode();
    };
}

#endif