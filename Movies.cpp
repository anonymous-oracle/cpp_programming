#include "Movies.h"
#include <iostream>


Movies::Movies(){
    std::vector <Movie> movies;
}
//Movies::Movies(Movies &&source): movies(source.movies){}

void Movies::add_movie(std::string name, std::string rating, int times_watched){
    for(Movie &m:this->movies){
        if(m.get_movie_name()==name){
            return;
        }
    }
        this->movies.push_back(Movie{name, rating, times_watched});

}

void Movies::increment_watch_count(std::string name)
{
    for(Movie &m:this->movies){
        if(m.get_movie_name()==name){
            m.watched++;
        }
}
}

int Movies::get_movie_count()
{
    if (this->movies.size() < 1){
        return 0;
    }
    else{
        return this->movies.size();
    }
}

void Movies::display_movies(){
    for (Movie &m: this->movies){
    std::cout << "\n===============";
    std::cout << "\nMovie: " << m.name << "\nRating: " << m.rating << "\nwatched: " << m.watched\
    << " times" << std::endl;
    std::cout << "===============" << std::endl;
    }
}