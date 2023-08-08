#include "headers/music.hpp"

namespace allegro {
    music::music(std::string filename, std::string name) {
        stream = al_load_audio_stream(filename.c_str(), 4, 2048);
        this->name = name;

        volume = 1.0;
        gain = 1.0;
        pan = 0.0;
        playmode = ALLEGRO_PLAYMODE_LOOP;

        al_set_audio_stream_playmode(stream, ALLEGRO_PLAYMODE_LOOP);
    }

    music::music(std::string filename, std::string name, float volume, float gain, float pan, ALLEGRO_PLAYMODE pmode) {
        stream = al_load_audio_stream(filename.c_str(), 4, 2048);
        this->name = name;
        this->volume = volume;
        this->gain = gain;
        this->pan = pan;
        this->playmode = pmode;
    }

    music::~music() {
        this->stop();
        al_destroy_audio_stream(stream);
    }

    void music::play() {
        al_attach_audio_stream_to_mixer(stream, al_get_default_mixer());
    }

    void music::stop() {
        al_detach_audio_stream(stream);
    }
}