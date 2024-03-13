#pragma once

#include "imgui.h"

struct UI
{
    UI(int argc, char** argv);

    bool show_demo_window = false;
    bool show_another_window = false;

    bool Show();
};