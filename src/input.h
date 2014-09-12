#pragma once

#include <iostream>
#include <vector>
#include <SDL2/SDl.h>

class Input {
private:
    SDL_Event event;
    static bool keys[65536];
    bool quit = false;
    int mx, my;
public:
    Input();
    void update();
    std::vector<SDL_Keycode> get_pressed_keys();
    static bool key_pressed(SDL_Scancode key);
    int get_DX();
    int get_DY();
    bool window_closed();
};