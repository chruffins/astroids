#include<allegro5/allegro_audio.h>
#include<allegro5/allegro_acodec.h>

#include<vector>

namespace allegro {
    class sound {
    private:
        ALLEGRO_SAMPLE *sample;
    public:
        sound();
        ~sound();

        void play();
    };
}