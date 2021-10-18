//zad1
#include <iostream>

using namespace std;

int main()
{
    string album;
    cout << "Podaj numer albumu:" << endl;
    cin >> album;
    cout <<"Numer albumu studenta to:"<<album<<endl;
    return 0;
}

//zad2
#include <iostream>

using namespace std;
int liczba;
int main()
{
    cout << "Podaj liczbe:" << endl;
    cin >> liczba;

    if (liczba%2==0)

        cout <<"Liczba jest parzysta";
    else
        cout <<"Liczba jest nieparzysta";
    return 0;
}

//zad3
#include <iostream>

using namespace std;
double liczba1, liczba2;
int main()
{
    cout << "Podaj pierwsza liczbe:" << endl;
    cin >>liczba1;

    cout <<"Podaj druga liczbe:";
    cin >>liczba2;

    if (liczba1>liczba2)
        cout << "Liczba 1 jest wieksza niz liczba 2";
    else
        cout <<"Liczba 2 jest wieksza niz liczba 1";
    return 0;
}

//zad4
#include <iostream>
using namespace std;
int main()
{
    double wartosc1, wartosc2, wartosc3, wartosc4,x, srednia;

    cout << "Podaj pierwsza wartosc:";
    cin >>wartosc1;

    cout <<"Podaj druga wartosc:";
    cin >>wartosc2;

    cout <<"Podaj trzecia wartosc:";
    cin >>wartosc3;

    cout <<"Podaj czwarta wartosc:";
    cin >>wartosc4;

    if(x>0)
    {
        x=(wartosc1+wartosc2+wartosc3+wartosc4);
        srednia = (wartosc1+wartosc2+wartosc3+wartosc4)/4;
        cout <<"Srednia arytmetyczna z podanych wartosci jest rowna:"<<srednia;
    }

    else
        cout <<"Nie mozna obliczyc sredniej arytmetycznej z liczby ujemnej";
}

//zad5
#include <iostream>

using namespace std;

int main()
{
    int wybor;
    float a, b;

    cout << "Podaj a:";
    cin >> a;

    cout << "Podaj b:";
    cin >> b;

    cout <<"\n================"\n;
    cout <<"\n1. Suma\n2. Roznica\n3. Iloczyn\n4. Iloraz";
    cout <<"Wybierz dzialanie", cin >>wybor;

    switch (wybor)
    {
    case 1:

        cout << "Suma: " << a << " + " << b << " = " << a + b << endl;
        break;

    case 2:

        cout << "Roznica: " << a << "-" << b << " = " << a - b << endl;
        break;

    case 3:

        cout << " Iloczyn: " << a << " * " << b << " = " << a * b << endl;
        break;

    case 4:

        cout << "Iloraz:" << a << " / " << b << " = " << a / b << endl;
        break;

    default:

        cout << "Nie ma takiej opcji";
        break;
    }
}
