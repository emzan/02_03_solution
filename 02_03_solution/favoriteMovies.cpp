/*
#include <iostream>
#include "Movie.h"

int main()
{
    char moviename[50], movierating[6];
    int year;
    int numMovies;
    std::cout << "What is the title: \n";
    std::cin.getline(moviename, 50);
    std::cout << "What year was it released? \n";
    std::cin >> year;
    std::cin.ignore();
    std::cout << "What is the rating (G, PG, PG-13, R, M): \n";
    std::cin.getline(movierating, 6);
    Movie movie1(moviename, year, movierating);
    std::cout << "\nWhat is the next title: \n";
    std::cin.getline(moviename, 50);
    std::cout << "What year was it released: \n";
    std::cin >> year;
    std::cin.ignore();
    std::cout << "What is the rating (G, PG, PG-13, R, M): \n";
    std::cin.getline(movierating, 6);
    Movie movie2(moviename, year, movierating);
    std::cout << "\nWhat is the next title: \n";
    std::cin.getline(moviename, 50);
    std::cout << "What year was it released: \n";
    std::cin >> year;
    std::cin.ignore();
    std::cout << "What is the rating (G, PG, PG-13, R, M): \n";
    std::cin.getline(movierating, 6);
    Movie movie3(moviename, year, movierating);
    std::cout << "Your top three favorite movies are: \n";
    std::cout << "Movie title: " << movie1.getName();
    std::cout << "\nIt was released in: " << movie1.getYear() << "\n";
    std::cout << "It was rated: " << movie1.getRating() << std::endl << std::endl;
    std::cout << "Movie title: " << movie2.getName();
    std::cout << "\nIt was released in: " << movie2.getYear() << "\n";
    std::cout << "It was rated: " << movie2.getRating() << std::endl << std::endl;
    std::cout << "Movie title: " << movie3.getName();
    std::cout << "\nIt was released in: " << movie3.getYear() << "\n";
    std::cout << "It was rated: " << movie3.getRating() << std::endl << std::endl;
}
*/
