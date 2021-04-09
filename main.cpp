#include <iostream>
#include <string>
#include <cstring>
using namespace std;
class algox
{
private:
    int a;string b;
public:
    algox();
    void setalgox(int,string)
    void rail();
};
algox::algox(){
}
//establecemos valores a los atributos
//usamos los sety get para poder ayudarnos en ellos
void algox::setalgox(int _a,string _b)
{
    a=_a;
    b=_b;
}
//el cifrado de rail
void algox::rail()
{
    //usamos char por que con string no funciono
    char mensaje[b.length()];
    //copiamos la cadena y tenemos el puntero char
    strcpy(mensaje,b.c_str());
    //se crea un string para codificar
    string c="";//tambien me ayuda como un temporal
    int i=0,j=i,t=i*2;
    //una barible que incremente el orte de mi ciptografia
    //bucle anidado como el ordenamiento burbuja
    for(;i<a;i++)
    //esto no ayuda a atrapar las primeras letra com el mertodo burbuja
    {
        for(;j<b.length();j+=t)
        {
            if(j==0 || t!=0)
            {
                c+=mensaje[j]
            }


        }
    }
}
int main()
{
    return 0;
}
