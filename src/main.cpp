//#include "../inc/common.h"
#include "../inc/encryption.h"

Encryption enc;

int main()
{
    
    std::string input = "Hello, my name is quinn", key;
    int key2 = 0;
    
    key = enc.makeKey(input);
    
    //key2 = stoi(key, nullptr,16);
    
    std::cout << key << std::endl;
    
    return 0;
}
