#include <iostream>
#include <limits>
#include "Movies.hpp"
using namespace std;
int main(int argc, char const *argv[])
{
    Movies movies {};
    std::string movie_name {}, rating {}, opt {};
    int watch_count {0};
    cout << "keep entering the movie name, rating and watch count and when done," \
     << "press \'q\'" << endl;
    
    while (opt!="q")
    {
    cout << "enter movie_name: ";
    getline(cin, movie_name);
    cout << '\n' << "enter the rating: ";
    cin >> rating;
    cout << '\n' << "enter the number of times watched: ";
    cin >> watch_count; 
    movies.add_movie(&movie_name, &rating, &watch_count);
    cout << "do you want to continue??" << endl;
    cin >> opt;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    movies.display_movies();
    // opt = '\0';
    // cout << "do you want to watch a movie more than once??" << endl;

    cout << movies.get_num_movies() << endl;
    return 0;
}
