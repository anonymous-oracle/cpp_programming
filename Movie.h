#include <string>
#include <iostream>
#ifndef _MOVIE_H_
#define _ MOVIE_H_
#define PRINT(sent)\
 std::cout << sent << std::endl
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
//        Movie(Movie &&source);
        ~Movie();
        std::string get_movie_name();
        static int get_num_movies();
};


#endif