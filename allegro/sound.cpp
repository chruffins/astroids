#include "headers/sound.hpp"

namespace allegro {
    sound::sound(const char *filename) {
        sample = al_load_sample(filename);
    }

    sound::~sound() {
        if (sample) {
            al_destroy_sample(sample);
        }
    }

    void sound::play() {
        if (!sample) return;
        al_play_sample(sample, 1, 0, 1, ALLEGRO_PLAYMODE_ONCE, NULL);
    }

    void sound::play(float gain, float pan, float speed, ALLEGRO_PLAYMODE loop, ALLEGRO_SAMPLE_ID *ret_id) {
        if (!sample) return;
        al_play_sample(sample, gain, pan, speed, loop, ret_id);
    }
}