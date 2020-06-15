//
// Created by Arthur on 15/06/2020.
//

#ifndef TP_NOTE_ING2_LISTEELEMENT_H
#define TP_NOTE_ING2_LISTEELEMENT_H
#include <iostream>

class ListeElement {
protected:
    std::string m_texte;

public:
    ListeElement(std::string texte);
    ~ListeElement();
};


#endif //TP_NOTE_ING2_LISTEELEMENT_H
