#ifndef KPPBASS_HPP_
#define KPPBASS_HPP_

#include "KPPSound.hpp"
#include <string>

class KPPBass {

    public:
        KPPBass();
        KPPBass(std::string); // Constructor to specify other bass guitars
        ~KPPBass() {};
        void loadBass(std::string);
        std::string getBass();

        // Functions to play sounds
        void playA1();
        void playASharp1();
        void playB1();
        void playC1();
        void playCSharp1();
        void playD1();
        void playDSharp1();
        void playE1();
        void playF1();
        void playFSharp1();
        void playG1();
        void playGSharp1();
        void playA2();
        void playASharp2();
        void playB2();
        void playC2();
        void playE2();
        void playF2();
        void playFSharp2();
        void playG2();
        void playGSharp2();
        
        void muteEString();
        void muteAString();
        void muteDString();
        void muteGString();
        void muteAll();

    private:
        KPPSound a1;
        KPPSound aSharp1;
        KPPSound b1;
        KPPSound c1;
        KPPSound cSharp1;
        KPPSound d1;
        KPPSound dSharp1;
        KPPSound e1;
        KPPSound f1;
        KPPSound fSharp1;
        KPPSound g1;
        KPPSound gSharp1;
        KPPSound a2;
        KPPSound aSharp2;
        KPPSound b2;
        KPPSound c2;
        KPPSound e2;
        KPPSound f2;
        KPPSound fSharp2;
        KPPSound g2;
        KPPSound gSharp2;
        
        std::string currentBass;

};

#endif
