#include "Movie.h"
#include <iostream>

int Movie::num_movies{0};

Movie::Movie(std::string movie_name, std::string movie_rating, int movie_watched):
name{movie_name}, rating{movie_rating}, watched{movie_watched}
{
//PRINT("Movie constructor called for: ");
//PRINT(this->get_movie_name());
//PRINT(" ");
++num_movies;
}

Movie::~Movie(){
    --num_movies;
//   PRINT("Movie destructor called for: ");
//   PRINT(this->get_movie_name());
//   PRINT(" ");
}

std::string Movie::get_movie_name() {return this->name;}

// Movie::Movie(Movie &&source):name{source.name}, rating{source.rating}, watched{source.watched} {
// }
 int Movie::get_num_movies() {
     return num_movies;
 }