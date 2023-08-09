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
        dr = 1;
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
        float r = sx / 2;

        for (int i = 0; i < this->sides; i++) {
            float a1 = rotation + (i * 2 * M_PI / sides);
            float a2 = rotation + ((i + 1) * 2 * M_PI / sides);

            al_draw_line(x + (r * cos(a1)), y + (r * sin(a1)), 
                x + (r * cos(a2)), y + (r * sin(a2)), al_map_rgb(255,255,255), 2);
        }
        al_draw_circle(x, y, r, al_map_rgb(255, 0, 0), 1);
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