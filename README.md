# wildfire
Wildfire simulation - displayed using ascii graphics
Forest fires can be simulated over time by their state like behavior. Growth adjacent to fire burns, burned land is evantually room for new growth, each plot of land conceptually follows a cycle of grown->burn->ready to grow->grown This cycle is visually represented with an ascii character by changing its color (green(grown) red(on fire) black(ready to grow) ).
The main function instantiates a screen object which is a alias for a std::vector<std::vector<std::pair<char, std::string>>> Withing this vector the char is the ascii symbol used to represent a tree ("*" by default) the string is an ansi code to change the color of the tree and thus its state.
The state of the screen is updated via a depth first search. A dfs sweeping through a matrix is much like a gust of wind blowing the fire through the forest changing its state. By tweaking the dfs we can simulate winds from any direction.

Screen 
Portrays the progression of the wildfire to screen via a vector of pairs, each pair contains the symbol to represent a tree and an ansi code to change its color
Provided functions
fill(Screen& screen, const Colors::Color& color, const int percent) 
  to fill a certain percentage of symbols on the screen with a color randomly
draw(const Screen &s) 
  to display screen via cout
Colors
Constant expressions for ansi colors
change_color(Color &color)
  advances the state of the current symbol
