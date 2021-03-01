#include <iostream>
#include <vector>
#include "Screen.h"
#include "Color.h"

using namespace ScreenTools;
constexpr size_t rows = 5;
constexpr size_t cols = 5;

void dfs(Screen &grid, int i, int j){
    if(i>=rows || i<0 || j>=cols || j<0) return;
    Colors::change_color(grid[i][j].second);
    dfs(grid, i+1, j);
    draw(grid); std::cout << std::endl;
    dfs(grid, i, j+1);
}
int main() {
    srand(time(nullptr));
    Screen screen
    {
        rows, std::vector<std::pair<char, std::string>>(
        cols, std::make_pair('*', Colors::black))
    };
    fill(screen, Colors::green, 33);
    draw(screen);
    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j){
            dfs(screen,i,j);
        }
    }

    return 0;
}

