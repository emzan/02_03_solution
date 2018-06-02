

#ifndef MOVIE_H_
#define MOVIE_H_
#include <string>

class Movie
{
private:
    std::string movieName;
    int year;
    std::string rating;
public:
    Movie();
    Movie(std::string, int, std::string);
    ~Movie();
    void setName(std::string);
    std::string getName();
    void setYear(int);
    int getYear();
    void setRating(std::string);
    std::string getRating();
};
#endif

