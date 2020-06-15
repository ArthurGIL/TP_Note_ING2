//
// Created by Arthur on 15/06/2020.
//

#ifndef TP_NOTE_ING2_TITRE_H
#define TP_NOTE_ING2_TITRE_H
#include <iostream>

class Titre {
private:
    int m_numero;
    std::string m_message;

public:
    Titre(int numero, std::string message);
    ~Titre();
};


#endif //TP_NOTE_ING2_TITRE_H
