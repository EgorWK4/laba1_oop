#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include "handle_input.h"
#include "Tiles.h"




/***
Тех задание:
. Создать класс Tiles (кафель), который будет содержать поля brand,
size_h, size_w, price, count и методы работы с данными класса. В главной
функции объявить массив объектов разработанного класса, заполнить
объекты данными. Посчитать общую стоимость хранящегося кафеля на
складе.
***/


int main()
{

    std::vector <Tiles> tileses;
    int i = 1;
    bool flag = true;
    bool IsInputCorrect = true;
    std::string t_brand;
    std::string t_count;
    std::string t_price, t_size_w, t_size_h;
    std::string pattern2 = "^[+]?[0-9]*\.?[0-9]+$";///double
    std::string pattern = "^[0-9]*$"; /// int
    while (flag)
    {

        Tiles obj;
        while (IsInputCorrect)
        {
            std::cout << "Input Brand" << std::endl;
            std::cin >> t_brand;
            obj.Set_Brand(t_brand);
            std::cout << "Input Count" << std::endl;
            std::cin  >> t_count;
            std::cout << "Input Price" << std::endl;
                      std::cin  >> t_price;
            std::cout << "Input Width" << std::endl;
                      std::cin  >>  t_size_w;
            std::cout << "Input Height" << std::endl;
                      std::cin  >>  t_size_h;

            if (regexValidate(pattern,t_count))
            {
                obj.Set_Count(regexValidate(pattern,t_count));
                IsInputCorrect = false;
            }
            else
            {
                std::cout << "Invalid input, try again" << std::endl;
                IsInputCorrect = true;
            }
            if (regexValidate(pattern2,t_price))
            {
                obj.Set_Price(regexValidate(pattern2,t_price));
                IsInputCorrect = false;
            }
            else
            {
                std::cout << "Invalid input, try again" << std::endl;
                IsInputCorrect = true;
            }
            if (regexValidate(pattern2,t_size_w))
            {
                obj.Set_Size_w(regexValidate(pattern2,t_size_w));
                IsInputCorrect = false;
            }
            else
            {
                std::cout << "Invalid input, try again" << std::endl;
                IsInputCorrect = true;
            }
            if (regexValidate(pattern2,t_size_h))
            {
                obj.Set_Size_h(regexValidate(pattern2,t_size_h));
                IsInputCorrect = false;
            }
            else
            {
                std::cout << "Invalid input, try again" << std::endl;
                IsInputCorrect = true;
            }
        }
        IsInputCorrect = true;
        tileses.push_back(obj);
        std::cout << "Continue filling? 1 - Yes 0 - No" << std::endl;
        std::cin >> i;
        if (i == 0)
            flag = false;
    }
//std::string pattern_double = "/^[0-9]+(\\.[0-9]+)?$";///double
//std::string pattern_int = "^[0-9]*$"; /// int
//std::string stringa = "123";
//std::cout << regexValidate(pattern_int,stringa);
    Print(tileses);
    Get_Total_Price(tileses);
}
