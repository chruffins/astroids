#include "headers/objects.hpp"

namespace game {
    object::object() {
        x = 0;
        y = 0;
        dx = 0;
        dy = 0;
        rotation = 0;
        dr = 0;
        sx = 32;
        sy = 32;
    }

    object::object(float sx, float sy) {
        x = 300;
        y = 300;
        dx = 0;
        dy = 0;
        rotation = 0;
        dr = 0;
        this->sx = sx;
        this->sy = sx;
    }

    asteroid::asteroid() : object() {
        sides = 5;
    }

    asteroid::asteroid(float sx, float sy, int sides) : object(sx, sy) {
        this->sides = sides;
    }

    void asteroid::update(double dt) {
        this->x += this->dx * dt;
        this->y += this->dy * dt;
        this->rotation += this->dr * dt;
    }

    void asteroid::draw() {
        for (int i = 0; i < this->sides; i++) {
            al_draw_line(x + ((sx / 2) * sin((2 * M_PI / i) + rotation)), y + ((sy / 2) * cos((2 * M_PI / i) + rotation)), 
                x + ((sx / 2) * sin(2 * M_PI / (i+1))), y + ((sy / 2) * cos(2 * M_PI / (i+1))), al_map_rgb(255,255,255), 2);
        }
    }

    character::character() : object() {
        tdx = 0;
        tdy = 0;
        firing = false;
    }

    character::character(float sx, float sy) : object(sx, sy) {
        tdx = 0;
        tdy = 0;
        firing = false;
    }

    void character::update(double dt) {
        this->dx = fmin(this->dx + (dt * this->adp), this->tdx);
        this->dy = fmin(this->dy + (dt * this->adp), this->tdy);

        this->x += this->dx;
        this->y += this->dy;
    }

    void character::draw() {
        al_draw_circle(x + (sx / 2), y + (sy / 2), sx / 2, al_map_rgb(255,255,255), 4);
        //al_draw_line(x + ((sx / 2) * cos(M_PI / 3)) , y)
    }
}