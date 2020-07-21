#include "Movies.hpp"
#include <iostream>


Movies::Movies():movies{new std::vector <Movie> {}} {}
Movies::~Movies() {delete this->movies; std::cout << "called movie list destructor" << std::endl;}

void Movies::add_movie(std::string *name, std::string *rating, int *times_watched){
    for(Movie &m:*(this->movies)){
        if(*(m.get_movie_name())==*name){
            return;
        }
        this->movies->push_back(Movie{*name, *rating, *times_watched});
    }
}

void Movies::increment_watch_count(std::string *name)
{
    for(Movie &m:*(this->movies)){
        if(*(m.get_movie_name())==*name){
            m.watched++;
        }
}
}

int Movies::get_num_movies()
{
    return this->movies->size();
}

void Movies::display_movies(){
    for (Movie &m: *this->movies){
    std::cout << "\n===============";
    std::cout << "\nMovie: " << m.name << "\nRating: " << m.rating << "\nwatched: " << m.watched\
    << " times" << std::endl;
    std::cout << "\n===============" << std::endl;
    }
}