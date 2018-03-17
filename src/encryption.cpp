#include "../inc/encryption.h"

std::string Encryption::makeKey(std::string phrase)
{
    std::string newKey, currentChunk;
    int min = 0, max = 15;
    
    for (int i = 0; i < phrase.size(); i++)
    {
        currentChunk = to_std::string(randGen(min, max));
        
        newKey.append(decToHex(currentChunk));
    }
    
    return newKey;
}

int Encryption::randGen(int min, int max)
{
    std::uniform_int_distribution<int> randNum (min, max);
    
    return randNum(rng);
}

std::string Encryption::decToHex(std::string dec)
{
    std::string hex;
    
    if (dec == "10")
    {
        hex = "a";
    }
    else if (dec == "11")
    {
        hex = "b";
    }
    else if (dec == "12")
    {
        hex = "c";
    }
    else if (dec == "13")
    {
        hex = "d";
    }
    else if (dec == "14")
    {
        hex = "e";
    }
    else if (dec == "15")
    {
        hex = "f";
    }
    else
    {
        hex = dec;
    }
    
    return hex;
}

Encryption::Encryption()
{
    
    rng.seed(rd)
    
}
