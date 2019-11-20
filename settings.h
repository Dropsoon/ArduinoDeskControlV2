#include <iostream>
#include <sstream>
#include <string>

#ifndef SETTINGS_H
#define SETTINGS_H



class settings
{
public:
    settings();

    void store_line(std::string key, std::string value);
    void load_file(std::string filename);
    std::string get_setting(std::string name);

    int savedstring = 0;
    std::string savedkey[32];
    std::string savedvalue[32];
    std::string line;
    std::string key;
    std::string value;

};

#endif // SETTINGS_H








