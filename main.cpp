/* Programe en C++ la siguiente gramatica de numeros cardinales en aleman en forma normal de Chomsky:
 * El proyecto, consistira de las siguientes partes:
 * 1. Dado un numero entero, programar el scanner correspondiente (i.e. que
 * determina expresiones validas de acuerdo al alfabeto)
 * 2. Programar el parser correspondiente con un estado de aceptaci ́on y rechazo
 * 3. Implementar ademas una regla de identificacion de errores (estado de error) que imprima un mensaje de error
 * 4. Implementar las salidas del analisis (aceptado o rechazado)
 * */

/* GIC
 * R1 : Z2 → Z3 + zehn
 * R2 : Z7 → Z4 + zig
 * R3 : Z7 → drei + ssig
 * R4 : Z8 → U + Z7
 * R5 : Z9 → Z1 + Z5
 * R6 : Z10 → Z2 + Z5
 * R7 : Z11 → Z5,9 + Z1,2,7,8
 * R8 : Z12 → Z10 + Z1,2,7,8
 * R9 : Z13 → Z1,2,7,8,9,11 + Z6
 * R10 : Z14 → Z6,13 + Z1,2,7,8,9,11
 * R11 : U → Z1 + und
 * */

/* INPUT
 * funftausendzweihundertneunundfunfzig
 * zweitausendneunhundertsechsundsiebzig
 * zweihundertzweiundzwanzigtausendvierhundertsiebzehn
 * einszwei
 * */

#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Hello World!" << endl;

    std::vector<std::string> Z1 = {"ein", "zwei", "drei", "vier", "funf", "sechs", "sieben", "acht", "neun"};
    std::vector<std::string> Z2 = {"zehn", "elf", "zwolf" };
    std::vector<std::string> Z3 = {"drei", "vier", "funf", "sech", "sieb", "acht", "neun" };
    std::vector<std::string> Z4 = {"zwan", "vier", "funf", "sech", "sieb", "acht", "neun" };
    std::vector<std::string> Z5 = {"hundert"};
    std::vector<std::string> Z6 = {"tausend"};
    std::vector<std::string> drei = {"drei"};
    std::vector<std::string> zehn = {"zehn"};
    std::vector<std::string> zig = {"zig"};
    std::vector<std::string> ssig = {"ssig"};
    std::vector<std::string> und = {"und"};

    return 0;
}
