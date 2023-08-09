#include<allegro5/allegro_audio.h>
#include<allegro5/allegro_acodec.h>

#include<vector>

namespace allegro {
    class sound {
    private:
        ALLEGRO_SAMPLE *sample;
    public:
        sound(const char *filename);
        ~sound();

        void play();
        void play(float gain, float pan, float speed, ALLEGRO_PLAYMODE loop, ALLEGRO_SAMPLE_ID *ret_id);
    };
}