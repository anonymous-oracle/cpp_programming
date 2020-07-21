#include <string>
#ifndef MOVIE_HPP
#define MOVIE_HPP

class Movie
{
    private:
        friend class Movies;
        static int num_movies;
        std::string name;
        std::string rating;
        int watched;
    public:
        Movie(std::string movie_name="None", std::string movie_rating="G", int movie_watched=0);
        ~Movie();
        // Movie(Movie &&source);
        std::string *get_movie_name();
};


#endif