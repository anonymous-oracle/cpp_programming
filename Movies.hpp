#include <vector>
#include "Movie.hpp"
#ifndef MOVIES_HPP
#define MOVIES_HPP

class Movies {
    private:
        std::vector <Movie> *movies;
    public:
        Movies();
        ~Movies();
        void add_movie(std::string *movie, std::string *rating, int *times_watched);
        void increment_watch_count(std::string *name);
        int get_num_movies();
        void display_movies();
        
};


#endif