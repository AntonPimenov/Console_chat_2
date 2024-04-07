#include "Menu.h"

Menu::Menu(string text, void(*action)(), bool availble) 
        : text_(text), action_(action), available_(availble){}