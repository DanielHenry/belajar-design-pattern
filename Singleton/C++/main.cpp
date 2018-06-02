#include<iostream>
#include<string>
#include<vector>
using namespace std;
#include "Logger.h"

int main(){
    Logger * firstLog;
    firstLog = Logger::getPointer();
    firstlog->push("push 1 to firstlog");
    firstlog->push("push 2 to firstlog");

    Logger * secondlog;
    secondlog = Logger::getPointer();
    secondlog->push("push 1 to secondlog");
    secondlog->push("push 2 to secondlog");

    vector<string> logList = firstlog->getAll();
    int logListSize = (int)logList.size();
    for (int i=0;i<logListSize;i++){
        cout << logList[i] << endl;
    }
    return 0;
}