#ifndef ENCRYPTION_H
#define ENCRYPTION_H

#include "common.h"

class Encryption
{
    
private:
    
    std::random_device rd;
    std::mt19937 rng;
    
public:
    
    std::string makeKey(std::string key);
    int randGen(int min, int max);
    std::string decToHex(std::string dec);
    
    Encryption();
    
};

#endif
