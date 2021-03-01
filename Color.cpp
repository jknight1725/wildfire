//
// Created by megan phillips on 2/6/21.
//

#include "Color.h"
#include <string>
namespace Colors {
    void change_color(Color &color) {
        if (color == red) color = black;
        else if (color == black) color = green;
        else if (color == green) color = red;
    }
}