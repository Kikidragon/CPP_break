//MOVIE TRACKER
//#include "Movies.h"
//#include <iostream>
//
//Movies::Movies(){}
//
//Movies::~Movies(){}
//
//bool Movies::add_movie(std::string name, std::string rating, int watched){
//    for (const Movie &movie: *movies){
//        if (movie.get_name() == name)
//            return false;
//    }
//    Movie temp {name, rating, watched};
//    movies->push_back(temp);
//    return true;
//}
//
//bool Movies::increment_watched(std::string name){
//    for (Movie &movie:*movies){
//        if (movie.get_name() == name) {
//            movie.increment_watched();
//            return true;
//        }
//    }
//    return false;
//}
//
//void Movies::display() const {
//    if (movies->size() == 0){
//        std::cout<<"sorry no movies to display"<<std::endl;
//    }else{
//        std::cout<<'\n';
//        for(const auto &movie: *movies)
//            movie.display();
//        std::cout<<'\n';
//    }
//}