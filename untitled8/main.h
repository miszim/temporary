#ifndef UNTITLED8_MAIN_H
#define UNTITLED8_MAIN_H

#include <iostream>
#include <string>
#include <istream>
#include <regex>

//extern int ID = 0;
class User {
private:
    int userID;
    std::string name;
    std::string email;
    std::string password;

public:
    User();

    int getID();
    void setID(int ID);
    std::string getName();
    void setName(std::string Name);
    std::string getEmail();
    void setEmail(std::string Email);
    std::string getPassword();
    void setPassword(std::string Password);
};


class Services{
public:
    Services();

    bool nameValidation (User user);
    bool IsValidName(std::string name);
    void passwordValidation(User user);
    bool isValidPassword(bool hasCorrectLength, bool isUpperCase, bool hasSpecialChar);
    bool hasCorrectLength(std::string password);
    bool hasSpecialCharacter(std::string password);
    bool isUpperCase(std::string password);
    void emailValidation(User user);
    bool Email_check(std::string email);
    void isUserValid(User user);
};

class Controller{

public:
    Controller();
    void createUser(User user);
    void userID(User User);
    void insertUserName(User User);
    void insertUserPassword(User User);
    void insertUserEmail(User User);
    Services service;
};





#endif