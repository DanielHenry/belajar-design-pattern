#include "Logger.h"

Logger::Logger(){
    //kosong
    //empty
}
static Logger& Logger::getInstance(){
    static Logger instance;
    return instance;
}
void Logger::push(string str){
    this->list.push_back(str);
}
vector<string> Logger::getAll(){
    return this->list;
}