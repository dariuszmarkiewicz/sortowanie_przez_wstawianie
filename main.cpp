//algorytm.edu.pl
#include<iostream>
using namespace std;

void sortowanie_przez_wstawianie(int n, int *tab)
{
     int pom, j;

     int licz = 0, wstawianie=0;

     for(int i=1; i<n; i++)
     {

             cout << "petla nr: " << i << endl << endl;

             //wstawienie elementu w odpowiednie miejsce
             pom = tab[i]; //ten element b�dzie wstawiony w odpowiednie miejsce
             j = i-1;

             //przesuwanie element�w wi�kszych od pom
             while(j>=0 && tab[j]>pom)
             {
                        tab[j+1] = tab[j]; //przesuwanie element�w
                        --j;

                        cout << endl;
                        licz++;
                        cout << "licz nr: " << licz << endl << endl;
             }

             wstawianie++;
             cout << "wstawianie: " << wstawianie << endl;

             tab[j+1] = pom; //wstawienie pom w odpowiednie miejsce
     }
}

int main()
{
    int n, *tab;
    cout<<"Podaj wielko�� zbioru: ";
    cin>>n;

    tab = new int [n];

    for(int i=0; i<n; i++)
    {
            cout<<"Podaj "<<i+1<<" element: ";
            cin>>tab[i];
    }

    cout<<"Elementy przed sortowaniem:\n";
    for(int i=0; i<n; i++)
            cout<<tab[i]<<" ";

    sortowanie_przez_wstawianie(n, tab);

    cout<<"\nElementy posortowaniem:\n";
    for(int i=0; i<n; i++)
            cout<<tab[i]<<" ";

    cin.ignore();
    cin.get();
    return 0;
}
