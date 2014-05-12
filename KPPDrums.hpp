#ifndef KPPDRUMS_HPP_
#define KPPDRUMS_HPP_

#include "KPPSound.hpp"

class KPPDrums {

    public:
        KPPDrums();
        KPPDrums(std::string); // Constructor to specify other kits
        ~KPPDrums() {};
        void loadKit(std::string); // Load new kit.
        void muteAll(); // Mute all sounds when leaving drums
        std::string getKit();

        // Functions to play sounds
        void playClosedHiHat();
        void playOpenHiHat();
        void playCrash1();
        void playCrash2();
        void playRide();
        void playSnare();
        void playTomHigh();
        void playTomMid();
        void playTomLow();
        void playBass();
        void playCowbell();

    private:
        KPPSound closedHiHat;
        KPPSound openHiHat;
        KPPSound crash1;
        KPPSound crash2;
        KPPSound ride;
        KPPSound snare;
        KPPSound tomHigh;
        KPPSound tomMid;
        KPPSound tomLow;
        KPPSound bass;
        KPPSound cowbell;
        std::string currentKit;
};

#endif

