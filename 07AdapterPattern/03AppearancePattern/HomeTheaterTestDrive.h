#ifndef HOME_THEATER_TEST_DRIVE_H_
#define HOME_THEATER_TEST_DRIVE_H_
#include "HomeTheaterFacade.h"
struct HomeTheatertestDrive {
    static void main(const char **args = nullptr) {
        HomeTheaterFacade *homeTheater = new HomeTheaterFacade(
            new Amplifier(),
            new Tuner(),
            new DvdPlayer(),
            new CdPlayer(),
            new Projector(),
            new Screen(),
            new TheaterLights(),
            new PopcornPopper()
        );
        homeTheater->watchMovie("Raiders of the Lost Ark");
        homeTheater->endMovie();
    } 
};
#endif