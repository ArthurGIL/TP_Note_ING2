//
// Created by Arthur on 15/06/2020.
//

#ifndef TP_NOTE_ING2_PAGEWEB_H
#define TP_NOTE_ING2_PAGEWEB_H
#include <iostream>
#include "Image.h"
#include "Liste.h"
#include "Paragraphe.h"
#include "Titre.h"

class PageWeb  : public Image, public Liste, public Paragraphe, public Titre {
private:
    std::string m_nom;

public:
    PageWeb(std::string nom);
    ~PageWeb();
    std::string add(Image image, Titre titre, Liste liste, Paragraphe para);
    void generate();
};


#endif //TP_NOTE_ING2_PAGEWEB_H
