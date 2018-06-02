#ifndef _LOGGER_H
#define _LOGGER_H

#include<string>
#include<vector>
using namespace std;

class Logger{
    private:
    vector<string> list;
    Logger();
    Logger(Logger const&);
    void operator=(Logger const&);

    public:
    static Logger& getInstance();
    void push(string str);
    vector<string> getAll();
};

#endif