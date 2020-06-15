//
// Created by Arthur on 15/06/2020.
//

#ifndef TP_NOTE_ING2_LISTE_H
#define TP_NOTE_ING2_LISTE_H
#include <iostream>
#include "ListeElement.h"
#include <vector>

class Liste : public ListeElement {
protected:
    std::vector<ListeElement> m_liste1;
    std::vector<ListeElement> m_liste2;

public:
    Liste(std::vector<ListeElement> liste1, std::vector<ListeElement> liste2);
    ~Liste();
};


#endif //TP_NOTE_ING2_LISTE_H
