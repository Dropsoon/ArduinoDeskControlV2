#include "settings.h"
#include <fstream>
#include <string>
#include <iostream>
#include <sstream>



settings::settings()
{

}

void settings::store_line(std::string key, std::string value)
{
    savedkey[savedstring] = key;
    savedvalue[savedstring] = value;
    savedstring++;
}

void settings::load_file(std::string filename)
{

    savedstring = 0;
    for(int i=0; i<32; i++){
        savedkey[i] = "";
        savedvalue[i] = "";
    }
    std::fstream filea(filename, std::ios::out | std::ios::app); //create file if not exist
    filea.close();

    std::fstream file(filename, std::ios::in);

    while (std::getline(file, line))
    {
        std::istringstream is_line(line);
        if (std::getline(is_line, key, '='))
        {
            if (std::getline(is_line, value))
            {
                store_line(key, value);
            }
        }
    }
    file.close();
}

std::string settings::get_setting(std::string name)
{
    for (int i=0; i<savedstring; i++) {
        if(name == savedkey[i]) return savedvalue[i];
    }
    return "error";
}

bool settings::set_setting(std::string key, std::string value)
{
    for (int i=0; i<savedstring; i++) {
        if(key == savedkey[i]){
            savedvalue[i] = value;
            return false;
        }
    }
    return true;
}

bool settings::save_file(std::string filename)
{
    std::fstream file(filename, std::ios::out | std::ios::trunc);
    for (int i=0; i<savedstring; i++) {
        file << savedkey[i] << "=" << savedvalue[i] << std::endl;
    }
    file.close();
    return false;
}

