#ifndef _HOME_THEATER_FACADE_H_
#define _HOME_THEATER_FACADE_H_
#include "Devices.h"
#include <string>
class HomeTheaterFacade {
public:
    HomeTheaterFacade(
        Amplifier *amp,
        Tuner *tuner,
        DvdPlayer *dvdPlayer,
        CdPlayer *cdPlayer,
        Projector *projector,
        Screen *screen,
        TheaterLights *lights,
        PopcornPopper *popper
    ) : 
    _amp(amp), 
    _tuner(tuner), 
    _dvd(dvdPlayer), 
    _cd(cdPlayer), 
    _projector(projector), 
    _lights(lights),
    _screen(screen),
    _popper(popper)
    {
    }
    void watchMovie(std::string movie) {
        std::cout << "Get ready to watch a movie ... \n";
        _popper->on();
        _popper->pop();
        _lights->dim(10);
        _screen->down();
        _projector->on();
        _projector->wideScreenMode();
        _amp->on();
        _amp->setDvd(_dvd);
        _amp->setSurroundSound();
        _amp->setVolume(5);
        _dvd->on();
        _dvd->play(movie);
    }
    void endMovie() {
        std::cout << "Shutting movie theater down...\n";
        _popper->off();
        _lights->on();
        _screen->up();
        _projector->off();
        _amp->off();
        _dvd->stop();
        _dvd->eject();
        _dvd->off();
    }
private:
    Amplifier *_amp;
    Tuner *_tuner;
    DvdPlayer *_dvd;
    CdPlayer *_cd;
    Projector *_projector;
    TheaterLights *_lights;
    Screen *_screen;
    PopcornPopper *_popper;
};
#endif