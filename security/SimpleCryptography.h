#ifndef SimpleCryptography_H_
#define SimpleCryptography_H_

#include <veins/modules/application/car2x/security/BaseCryptography.h>

class SimpleCryptography: public BaseCryptography {

public:

    std::string encrypt(std::string data);
    std::string decrypt(std::string encryptedData);

};

#endif
