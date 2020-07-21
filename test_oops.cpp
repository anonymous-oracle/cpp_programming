#include<iostream>
#include<string>
#include<vector>
#include "Movie.hpp"

int main(int argc, char const *argv[])
{
    std::vector <Movie> *movies = new std::vector <Movie> {};
    Movie temp {"hi", "G", 3};
    movies->push_back(temp);
    std::cout << *movies->at(0).get_movie_name() <<std::endl;
    delete movies;
    return 0;
}
