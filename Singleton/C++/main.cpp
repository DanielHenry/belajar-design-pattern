#include "Logger.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    //Logger& firstLog = Logger::getInstance();
    Logger::getInstance().push("push 1 to firstlog");
    Logger::getInstance().push("push 2 to firstlog");

    //Logger& secondlog = Logger::getInstance();
    Logger::getInstance().push("push 1 to secondlog");
    Logger::getInstance().push("push 2 to secondlog");

    vector<string> logList = Logger::getInstance().getAll();
    int logListSize = (int)logList.size();
    for (int i=0;i<logListSize;i++){
        cout << logList[i] << endl;
    }
    return 0;
}