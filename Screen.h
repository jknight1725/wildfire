
#include "Color.h"
#ifndef WILDFIRE_SCREEN_H
#define WILDFIRE_SCREEN_H

namespace ScreenTools{
    using Screen = std::vector<std::vector<std::pair<char, std::string>>>;
    void draw(const Screen &s);
    void fill(Screen& screen, const Colors::Color& color, int percent);
}


#endif //WILDFIRE_SCREEN_H
