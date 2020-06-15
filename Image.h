//
// Created by Arthur on 15/06/2020.
//

#ifndef TP_NOTE_ING2_IMAGE_H
#define TP_NOTE_ING2_IMAGE_H
#include <iostream>

class Image {
protected:
    std::string m_addresse;
    std::string m_texteAlt;

public:
    Image(std::string addresse, std::string texteAlt);
    ~Image();
};


#endif //TP_NOTE_ING2_IMAGE_H
