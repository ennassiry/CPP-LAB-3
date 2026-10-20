
#include<iostream>

class Point3D {
private:
    const double x;
    const double y;
    const double z;
public:
    // Constructeur paramétré avec liste d'initialisation
    Point3D(double a, double b, double c) : x(a), y(b), z(c) {
        // Le corps du constructeur peut rester vide
    }
    // Accesseurs
    double getX() const { return x; }
    double getY() const { return y; }
    double getZ() const { return z; }
};

int main() {
    Point3D p(1.0, 2.0, 3.0);
    std::cout << "Coordonnees : (" << p.getX() << ", " << p.getY() << ", " << p.getZ() << ")" << std::endl;
    return 0;
}