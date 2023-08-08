#include<utility>
#include<cmath>

#include "allegro5/allegro_primitives.h"

namespace game {
    class object {
    protected:
        float x;
        float y;
        float dx;
        float dy;
        float rotation;
        float dr;
        float sx;
        float sy;
    public:
        object();
        object(float, float);

        virtual void update(double dt) = 0;
        virtual void draw() = 0;
    };

    class asteroid : object {
    private:
        int sides;
    public:
        asteroid();
        asteroid(float, float, int);

        void update(double dt) override;
        void draw() override;
    };

    class character : object {
    private:
        float tdx; // top dx
        float tdy; // top dy
        float adp; // acceleration
        bool firing;
    public:
        character();
        character(float, float);

        void update(double dt) override;
        void draw() override;

        inline void set_firing(bool firing) {
            this->firing = firing;
        }

        inline bool get_firing() {
            return this->firing;
        }
    };
}