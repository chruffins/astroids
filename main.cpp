#include<allegro5/allegro.h>
#include "allegro/headers/font.hpp"
#include "allegro/headers/music.hpp"
#include "game/headers/objects.hpp"

#include<iostream>

#define GAME_TITLE "Astroids"

void print_copyright_notice(const char *game_title, const char *author, const int year) {
    std::cout << game_title << " Copyright (C) " << year << " " << author << "\n";
    std::cout << "This program comes with ABSOLUTELY NO WARRANTY; whatever that means.\n";
}

void must_init(bool test, const char *test_name) {
    if (test) return;

    std::cout << "Failed to initialize " << test_name << "!\n";
    exit(1);
}

void init_allegro() {
    must_init(al_init(), "allegro");
    must_init(al_init_primitives_addon(), "primitives");
    must_init(al_init_font_addon(), "fonts");
    must_init(al_install_audio(), "audio");
    must_init(al_init_acodec_addon(), "audio-codecs");
    al_reserve_samples(16);

    std::cout << "just initialized allegro\n";

    // installing input drivers(?)
    must_init(al_install_mouse(), "mouse");
    must_init(al_install_keyboard(), "keyboard");

    // this is the part where i set the application name
    al_set_app_name(GAME_TITLE);
    al_set_org_name("");

    // set graphics modes
    al_set_new_bitmap_flags(ALLEGRO_VIDEO_BITMAP);
}

void run_game() {
    // init stuff
    ALLEGRO_EVENT_QUEUE *event_queue = al_create_event_queue();
    ALLEGRO_TIMER *timer = al_create_timer(1.0 / 60.0);
    ALLEGRO_DISPLAY *display = al_create_display(800, 450);
    ALLEGRO_EVENT event;

    allegro::music intro_song = allegro::music("res/audio/gauze.ogg", "gauze");
    game::asteroid test_obj = game::asteroid(32, 32, 3);

    bool finished = false;
    bool redraw = false;

    al_set_window_title(display, GAME_TITLE);

    // register input devices as event sources
    al_register_event_source(event_queue, al_get_keyboard_event_source());
    al_register_event_source(event_queue, al_get_mouse_event_source());
    al_register_event_source(event_queue, al_get_display_event_source(display));
    al_register_event_source(event_queue, al_get_timer_event_source(timer));
    al_start_timer(timer);

    intro_song.play();

    while (!finished) {
        al_wait_for_event(event_queue, &event);

        switch (event.type)
        {
        case ALLEGRO_EVENT_DISPLAY_CLOSE:
            finished = true;
            break;
        case ALLEGRO_EVENT_TIMER:
            redraw = true;
            break;
        default:
            break;
        }

        if (redraw) {
            redraw = false;

            al_clear_to_color(al_map_rgb(0,0,0));
            test_obj.draw();
            al_flip_display();
        }
    }

    intro_song.stop();

    al_destroy_display(display);
    al_destroy_timer(timer);
    al_destroy_event_queue(event_queue);
}

int main(int argc, char **argv) {
    print_copyright_notice(GAME_TITLE, "Chris Lee", 2023);

    init_allegro();

    run_game();

    return 0;
}