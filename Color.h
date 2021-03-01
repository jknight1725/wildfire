//
// Created by megan phillips on 2/6/21.
//
#include <string>
#ifndef WILDFIRE_COLOR_H
#define WILDFIRE_COLOR_H

namespace Colors {
    using Color = std::string;
    constexpr auto black = "\033[30;1m";
    constexpr auto red = "\033[31;1m";
    constexpr auto green = "\033[32;1m";
    void change_color(Color &color);
};


#endif //WILDFIRE_COLOR_H
