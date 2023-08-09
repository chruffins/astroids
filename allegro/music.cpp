#include "headers/music.hpp"

namespace allegro {
    music::music(std::string filename, std::string name) {
        stream = al_load_audio_stream(filename.c_str(), 4, 2048);
        this->name = name;

        set_gain(1.0);
        set_pan(0.0);
        set_playmode(ALLEGRO_PLAYMODE_LOOP);
    }

    music::music(std::string filename, std::string name, float gain, float pan, ALLEGRO_PLAYMODE pmode) {
        stream = al_load_audio_stream(filename.c_str(), 4, 2048);
        this->name = name;

        set_gain(gain);
        set_pan(pan);
        set_playmode(playmode);
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

    void music::set_gain(float val) {
        gain = val;
        al_set_audio_stream_gain(stream, val);
    }

    void music::set_pan(float val) {
        pan = val;
        al_set_audio_stream_pan(stream, val);
    }

    void music::set_playmode(ALLEGRO_PLAYMODE val) {
        playmode = val;
        al_set_audio_stream_playmode(stream, val);
    }

    float music::get_gain() {
        return gain;
    }

    float music::get_pan() {
        return pan;
    }

    ALLEGRO_PLAYMODE music::get_playmode()  {
        return playmode;
    }
}