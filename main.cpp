#include <iostream>

int main() {
    std::cout << "------------------------------------------------------------------" << std::endl
              << "GIL Arthur" << std::endl
              << "------------------------------------------------------------------" << std::endl;

    PageWeb pageWeb("index.html"); // Création d'une page web "index.html"

    pageWeb.add(new Titre(1, "Bienvenue sur mon site", { // Ajout du titre principal (<h1></h1>), avec comme couleur de texte le rouge
            {"color", "red"} // ira dans l'attribut HTML style=""
    }));

    pageWeb.add(new Paragraphe( // Ajout d'un paragraphe classique
            "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor "
            "incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud "
            "exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat."
    ));

    pageWeb.add(new Image( // Ajout d'une image
            "https://images.unsplash.com/photo-1591754889489-5a59f1cea55a?w=400", // adresse de l'image sur internet (attribut src="")
            "Désert vu depuis une voiture", // texte alternatif pour les personnes non voyantes (attribut alt="")
            { // Style de l'image :
                    {"border", "solid 10px blue"}, // bordure bleue de 10px d'épaisseur
                    {"opacity", "0.4"} // opacité de 0.4 (transparence)
            }
    ));

    pageWeb.add(new Liste({ // Ajout d'une liste
                                  new ListeElement("Hello"), // élément de liste
                                  new ListeElement("World") // élément de liste
                          }));

    pageWeb.generate(); // Génération de la page HTML
    return 0;
}