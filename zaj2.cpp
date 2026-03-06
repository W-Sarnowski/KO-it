// //
// // Created by sarno on 06.03.2026.
// //
//
// #include "zaj2.h"
//
// #include <iostream>
//
// using namespace std;
//
// struct Koordynaty {
//     int x, y;
//     string nazwa;
// };
//
// struct Miejsce {
//     Koordynaty ko;
// };
//
// enum Trudnosc {
//     LATWY, // = 0
//     SREDNI, // = 1
//     TRUDNY // = 2
// };
//
// class Transport_publiczny {
// public:
//     int ilosc_pasazerow;
// };
//
// class Samochod {
// public:
//     string marka;
//     Samochod(string m, int i) {
//         marka = m;
//         id = i;
//     }
//     virtual int getId() {
//         return id;
//     }
// protected:
//     int x;
//     int id;
// };
//
// class Autobus : public Samochod, public Transport_publiczny {
// public:
//     Autobus(string m, int i, int p) : Samochod(m, i) {
//         ilosc_pasazerow = p;
//     }
//     void jakas() {
//         cout << marka;
//         // cout << id;
//         cout << x;
//     }
//
//     int getId() {
//         return id + 2;
//     }
// };
//
// class Trolejbus : public Autobus {
//
// };
//
// int main() {
//     // Trudnosc poziom_gry = SREDNI;
//     // switch (poziom_gry) {
//     //     case LATWY:
//     //         cout << "Za łatwo";
//     //     case SREDNI:
//     //     case TRUDNY:
//     //         cout << "ok";
//     //         break;
//     //     default:
//     //         break;
//     // }
//     Samochod *busik;
//     Autobus bus = Autobus("Bob", 1, 4);
//     busik = &bus;
//     cout << (*busik).getId() << endl;
//     cout << endl;
//     return 0;
// }