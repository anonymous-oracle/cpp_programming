#include "Movie.hpp"
#include <iostream>
using std::cout; using std::endl;

int Movie::num_movies{0};

Movie::Movie(std::string movie_name, std::string movie_rating, int movie_watched):
name{movie_name}, rating{movie_rating}, watched{movie_watched}
{
// cout << "Constructor for " << this->name << " called" << endl;
++num_movies;
}

Movie::~Movie(){
    --num_movies;
    cout << "called " << this->name << " Movie destructor" << endl;
}

std::string *Movie::get_movie_name() {return &(this->name);}

// Movie::Movie(Movie &&source):name{source.name}, rating{source.rating}, watched{source.watched} {
//     source.name = nullptr;
//     source.rating = nullptr;
// }