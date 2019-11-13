#ifndef HANDLE_INPUT_H_INCLUDED
#define HANDLE_INPUT_H_INCLUDED
#include <regex>

double regexValidate (std::string expr, std::string teststring)
{
    std::regex ex(expr);
    if (regex_match(teststring,ex))
    {
        //std::cout << "true";
        return std::stod(teststring);
    }
    //std::cout << "Error" << expr << " " << teststring << std::endl;
    return false;
}

#endif // HANDLE_INPUT_H_INCLUDED
