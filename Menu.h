#pragma once
#include <string>

using namespace std;


class Menu
{
    public:
        string text_;
        void (*action_)();
        bool available_;

        Menu(string text, void(*acntion)(), bool available = true); 
};