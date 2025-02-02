#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;


struct video_store {
    string name,director,genre;
    float cost, rating;

};

void Addfilm(video_store mas[],int size) {
    cout << "Name of the film \t Director\t Film genre\t Film rating\t Film cost\t";
    video_store film;
    cin.ignore();
    getline(cin, film.name);
    getline(cin, film.director);
    getline(cin, film.genre);
    cin >> film.rating;
    cin >> film.cost;
    cin.ignore();
    mas[size++] = film;
}


void show(video_store mas[], int size) {
    size++;
    mas[0] = { "Spider-man","Sam Raimi","Action", 8.3,5.5 };
    for (int i = 0; i < size; i++) cout << mas[i].name << " " << mas[i].director << " " << mas[i].genre << " " << mas[i].rating << " " << mas[i].cost << endl;
}
void searchName(video_store mas[], int size) {
    size++;
    cout << "Enter name: ";
    string name;
    cin.ignore();
    getline(cin, name);
    for (int i = 0; i < size; i++) {
        if (name == mas[i].name) {
            cout<<"The film u searched for: "<<mas[i].name << " " << mas[i].director << " " << mas[i].genre << " " << mas[i].rating << " " << mas[i].cost << endl;
            return;
        }
    }
}
void searchGenre(video_store mas[], int size) {
    size++;
    cout << "Enter genre: ";
    string genre;
    cin.ignore();
    getline(cin, genre);
    for (int i = 0; i < size; i++) {
        if (genre == mas[i].genre) {
            cout<<"genre u searched for: " << mas[i].name << " " << mas[i].director << " " << mas[i].genre << " " << mas[i].rating << " " << mas[i].cost << endl;
        }
    }
}
void searchDirector(video_store mas[], int size) {
    size++;
    cout << "Enter director: ";
    string director;
    cin.ignore();
    getline(cin, director);
    for (int i = 0; i < size; i++) {
        if (director == mas[i].director) {
            cout<<"director u searched for: " << mas[i].name << " " << mas[i].director << " " << mas[i].genre << " " << mas[i].rating << " " << mas[i].cost << endl;
        }
    }
}
void popularFilm(video_store mas[], int size)
{
    int maxRaiting = 0;
    int index = -1;

    size++;

    for (int i = 0; i < size; i++)
    {
        if (mas[i].rating > maxRaiting)
        {
            maxRaiting = mas[i].rating;
            index = i;
        }
    }

    if (index != -1)
    {
        cout << "Popularniy film po reytingu:\n";
        cout << "\nFilm name: " << mas[index].name;
        cout << "\nAuthor name: " << mas[index].director;
        cout << "\nGenre: " << mas[index].genre;
        cout << "\nRating: " << mas[index].rating;
        cout << "\nPrice: " << mas[index].cost << endl;
    }
    else
    {
        cout << "Netu filmov v spiske";
    }
}

int main()
{
    video_store mas[50];
    cout << "Add film: 1\n search by name: 2\n Search by director: 3\n Search by genre: 4\nThe most popular: 5\n Choice: ";
    int switch_on,size=0;
    cin >> switch_on;
    mas[0] = { "Spiderman 2", "Ktoto", "2024", 8.5, 42 };
    switch (switch_on)
    {
        case 1:
            Addfilm(mas, size);
            break;
        case 2:
            searchName(mas, size);
            break;
        case 5:
            popularFilm(mas, size);
            break;
        case 4:
            searchGenre(mas, size);
            break;
        case 3:
            searchDirector(mas, size);
            break;


    }

   

}


