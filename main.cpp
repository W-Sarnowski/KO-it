#include <iostream>

using namespace std;

struct Koordynaty {
    int x, y;
    string nazwa;
};

struct Miejsce {
    Koordynaty ko;
};

class Samochod {
public:
    string marka;
    Samochod(string m, int i) {
        marka = m;
        id = i;
    }
    int getid() {
        return id;
    }
private:
    int id;
protected:
    int x;
};

class Autobus : public Samochod {
public:
    void jakas() {
        cout << marka;
        // cout << id;
        cout << x;
    }
};

int test2(int *x) {
    *x += 1;
    cout << "X: " << *x << endl;
    return *x * 2;
}

template <typename T, typename U>
T test() {
    T zmienna = NULL;
    return zmienna;
}

int main() {
    // int some_array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // cout << some_array[3];
    // some_array[3] = 10;

    // int arr_size;
    // cin >> arr_size;
    // int new_arr[arr_size];

    // test<int, char>();
    // test<char, char>();

    int* different_array = static_cast<int *>(malloc(sizeof(int) * 10));
    different_array[0] = 1;
    cout << different_array[0] << " " << sizeof(float) << endl;
    for (int i = 0; i < 10; i++) {
        *(different_array + i) = i; //different_array[i] = i
        cout << *(different_array + i) << endl;
    }
    free(different_array);

    Koordynaty gracz = { 2, 5, "gracz" };

    // cout << gracz.nazwa;

    Samochod *samochod = new Samochod("citroen", 1);
    cout << (*samochod).marka;
    cout << (*samochod).getid();
    // cout << (*samochod).x;

    Autobus *bus = static_cast<Autobus *>(new Samochod("test", 1));
    cout << (*bus).getid();

    // char two_d_arr[4][4] = {
    //     {'#', '#', '#', '#'},
    //     {'#', 'o', '*', '#'},
    //     {'#', ' ', ' ', '#'},
    //     {'#', '#', '#', '#'},
    // };
    // for (int i = 0; i < 4; i++) {
    //     for (int j = 0; j < 4; j++) {
    //         cout << two_d_arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // int **two_d_pointer_array = static_cast<int **>(malloc(sizeof(int *) * 10));
    // two_d_pointer_array[0] = static_cast<int *>(malloc(sizeof(int) * 10));
    // for (int i = 0; i < 10; i++) {
    //     two_d_pointer_array[0][i] = i;
    // }
    //
    // for (int i = 1; i < 10; i++) {
    //     two_d_pointer_array[i] = static_cast<int *>(malloc(sizeof(int) * 5));
    //     for (int j = 0; j < 5; j++) {
    //         two_d_pointer_array[i][j] = i;
    //     }
    // }
    //
    // for (int i = 0; i < 10; i++) {
    //     if (i == 0) {
    //         for (int j = 0; j < 10; j++) {
    //             cout << two_d_pointer_array[i][j] << " ";
    //         }
    //     } else {
    //         for (int j = 0; j < 5; j++) {
    //             cout << two_d_pointer_array[i][j] << " ";
    //         }
    //     }
    //     cout << endl;
    // }
    //
    // free(two_d_pointer_array);
    // cout << two_d_arr;

    // int szybka = 2;
    // int *szybkaPtr = &szybka;
    // int test_var = test2(szybkaPtr);
    // cout << "Szybka: " << szybka << endl;
    // cout << "Test var: " << test_var << endl;
    //
    // int some_variable = 0;
    // int* pointer = &some_variable;
    //
    // int test_var_to_save;
    // scanf("%d", &test_var_to_save);
    // cout << "test var " << test_var_to_save << endl;

    // cout << *pointer << endl;

    return 0;
}