#ifndef MACLASSE_H
#define MACLASSE_H

class Point {
public:
    //constructeur
    Point(float x = 1.f, float y = 0.f);
    //modificateur
    void deplacer(float dx, float dy);
    void rotation(float angle); //l'angle en radians
    //sélecteur
    float abcisse() const;
    float ordonnee() const;
    float rho() const; //retour la diatance de (0,0) à le point P
    float thelta() const; //retour l'angle en radians

private:
    float x;
    float y;
    float angle;
    float r;
};

#endif /* MACLASSE_H */ 