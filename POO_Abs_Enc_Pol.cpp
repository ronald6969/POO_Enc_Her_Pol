//Esta es una practica de los pilares fundamentales de POO y aplicaremos el uso de Abstraccion, Encapsulacion, Herencia y Polimorfismo.
#include <iostream>

using namespace std;
//Esta es nuestra SuperClase donde aplicaremos la encapsulacion.
class Taza {
private:
    float volumen;
    string liquido;
    float cantidad;
public:
    Taza(float volumen, string liquido, float canditad); //Constructor para la inicializacion sin usar los metodos getter y setter.
    void llenar();
    void beber();
    virtual void vaciar(); //Declaracion de metodo a usar para demostrar el polimorfismo.
};
//Esta es nuestra Subclase en la cual demostraremos el principio de herencia.
class Botellatermica : public Taza {
private:
    float temperatura;
public:
    Botellatermica(float volumen, string liquido, float cantidad, float temperatura); //Constructor de la Subclase.
    void analizar();
    void vaciar() override; //Ejemplo del uso del polimorfismo.
};
Taza::Taza(float volumenp, string liquidop, float cantidadp) {
    volumen = volumenp;
    liquido = liquidop;
    cantidad = cantidadp;
}
Botellatermica::Botellatermica(float volumemp, string liquidop, float cantidadp, float temperaturap) : Taza(volumemp, liquidop, cantidadp) {
    temperatura = temperaturap;
}
//Estos son los metodos de la clase como es un ejemplo no realizan funciones como tal solo son ejemplos de construccion.
void Taza::llenar() {
    cout << "El volumen es: " << volumen << "m^3" << endl;
}
void Taza::beber() {
    cout << "Lo que usted esta por beber es: " << liquido << endl;
}
void Taza::vaciar() {
    cout << "La cantidad de liquido q contiene es: " << cantidad << "ml" << endl;
}
void Botellatermica::analizar() {
    cout << "La temperatura del es: " << temperatura << "°C" << endl;
}
void Botellatermica::vaciar() {
    cout << "La botella se ha vaciado." << endl;
}
int main()
{
    cout << "Estos son los datos de prueba para la creacion de los objetos \n";
    Taza n1(10.3, "cafe", 500);
    n1.beber();
    Botellatermica n2(10.3, "teMacha", 700, 32.5);
    n2.analizar();
    n2.vaciar();
    cout << "Gracias por usar el programa!\n";
}
