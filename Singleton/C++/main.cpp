#include "Logger.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    Logger& firstLog = Logger::getInstance();
    firstlog.push("push 1 to firstlog");
    firstlog.push("push 2 to firstlog");

    Logger& secondlog = Logger::getInstance();
    secondlog.push("push 1 to secondlog");
    secondlog.push("push 2 to secondlog");

    vector<string> logList = firstlog.getAll();
    int logListSize = (int)logList.size();
    for (int i=0;i<logListSize;i++){
        cout << logList[i] << endl;
    }
    return 0;
}