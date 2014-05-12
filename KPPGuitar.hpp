#ifndef KPPGUITAR_HPP_
#define KPPGUITAR_HPP_

#include "KPPSound.hpp"

#include <SFML/Graphics.hpp>

class KPPGuitar {
    
public:
    KPPGuitar(); // Default constructor
    KPPGuitar(std::string); // Constructor to specify other guitars
    ~KPPGuitar() {};
    void loadGuitar(std::string);
    // Functions to play sounds
    void playA1();
    void playASharp1();
    void playA2();
    void playASharp2();
    void playB1();
    void playB2();
    void playC2();
    void playC3();
    void playCSharp1();
    void playCSharp2();
    void playCSharp3();
    void playD2();
    void playD3();
    void playDSharp2();
    void playDSharp3();
    void playE1();
    void playE2();
    void playE3();
    void playF1();
    void playF2();
    void playF3();
    void playFSharp1();
    void playFSharp2();
    void playFSharp3();
    void playG1();
    void playG2();
    void playG3();
    void playGSharp1();
    void playGSharp2();
    
    void switchLetRing();
    int getLetRing();
    std::string getGuitar();
    void muteNote(sf::Keyboard::Key keyReleased);
    void muteEString();
    void muteAString();
    void muteDString();
    void muteGString();
    void muteAll();
private:
    int letRing;
    std::string currentGuitar;
    //sounds
    KPPSound a1;
    KPPSound aSharp1;
    KPPSound b1;
    KPPSound c1;
    KPPSound cSharp1;
    KPPSound d2;
    KPPSound dSharp1;
    KPPSound dSharp2;
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
    KPPSound fSharp3;
    KPPSound g2;
    KPPSound g3;
    KPPSound gSharp2;
    KPPSound cSharp2;
    KPPSound c3;
    KPPSound cSharp3;
    KPPSound d3;
    KPPSound dSharp3;
    KPPSound e3;
    KPPSound f3;
};


#endif
