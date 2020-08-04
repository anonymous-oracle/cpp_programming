#include <vector>
#include "Movie.h"
#ifndef _MOVIES_H_
#define _MOVIES_H_
class Movies {
    private:
        std::vector <Movie> movies;
    public:
        Movies();
//        Movies(Movies &&source);
        void add_movie(std::string movie="None", std::string rating="G", int times_watched=0);
        void increment_watch_count(std::string name);
        int get_movie_count();
        void display_movies();
        
};


#endif