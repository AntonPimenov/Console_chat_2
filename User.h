#pragma once

#include <string>
#include <vector>

using namespace std;

class User
{
    public:
        string user_name_;
        string password_;
        vector<string> send_message_;
        vector<string> receied_message;

        User(string user_name,string password);

        bool authorization(string input_password);

        void send_message(string message, User& receiver);
};