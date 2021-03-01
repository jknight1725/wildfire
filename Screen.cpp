
#include <vector>
#include <iostream>
#include "Color.h"
#include "Screen.h"

namespace ScreenTools {
    void draw(const Screen &s) {
        for (const auto& row : s) {
            for(const auto& [symbol, color] : row){
                std::cout << color << symbol;
            }
            std::cout << std::endl;
        }
    }

    void fill(Screen& screen, const Colors::Color& color, const int percent){
        for(auto& row : screen) {
            for (auto&[_, c] : row) {
                if (rand() % 100 + 1 < percent) c = color;
            }
        }
    }

}
