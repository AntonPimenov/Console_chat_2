#include "User.h"

User::User(string user_name, string password) : user_name_(user_name), password_(password){}

bool User::authorization(string input_password)
{
    return password_ == input_password;
}

void User::send_message(string message, User& receiver)
{
    send_message_.push_back("Вы -> " + receiver.user_name_ + ": " + message);
    receiver.receied_message.push_back(user_name_ + " -> Вам: " + message);
}