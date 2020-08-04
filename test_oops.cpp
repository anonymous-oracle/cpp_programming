#include <iostream>
#include <string>
#include <vector>
#include "Movies.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Movies mov_vec;
    mov_vec.add_movie("ra one");
    mov_vec.add_movie("rush hour", "PG");
    mov_vec.display_movies();
    
    mov_vec.add_movie("deadpool 2016", "R", 2);
    cout << "the movie count is: ";
    PRINT(mov_vec.get_movie_count());
    
    mov_vec.increment_watch_count("ra one");
    mov_vec.display_movies();
    return 0;
}
