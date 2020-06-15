//
// Created by Arthur on 15/06/2020.
//

#include "PageWeb.h"

PageWeb::PageWeb(std::string nom)
    : m_nom{nom}
{}

PageWeb::~PageWeb() {}

std::string PageWeb::add(Image image, Titre titre, Liste liste, Paragraphe para) {
    return std::__cxx11::string();
}

void PageWeb::generate() {
    std::ofstream file;

    std::cout << "Création du fichier " << m_nom << std::endl;
    file.open(m_nom);

}