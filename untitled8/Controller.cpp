#include "main.h"

void Controller::createUser(User user){

    try {
        userID(user);
        insertUserName(user);
        insertUserEmail(user);
        insertUserPassword(user);
        service.isUserValid(user);
    } catch (std::invalid_argument& e) {
        std::cerr << "Login failed. Error: " << e.what() << std::endl;
        createUser(user);
    }
};

void Controller::userID(User User)
{
    User.setID(0);
};
void Controller::insertUserName(User User)
{
    std::string insertedName;
    std::cin.sync();
    getline(std::cin, insertedName);
    User.setName(insertedName);
};
void Controller::insertUserPassword(User User)
{
    std::string insertedPassword;
    std::cin.sync();
    getline(std::cin, insertedPassword);
    User.setPassword(insertedPassword);
};
void Controller::insertUserEmail(User User)
{
    std::string insertedEmail;
    std::cin.sync();
    getline(std::cin, insertedEmail);
    User.setEmail(insertedEmail);
};