#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include "KPPGuitar.hpp"

KPPGuitar::KPPGuitar() {
    letRing = -1;
    currentGuitar = "guitar1";
    a1.KPPLoad("resources/samples/guitar/guitar1/a1.wav");
    a2.KPPLoad("resources/samples/guitar/guitar1/a2.wav");
    aSharp1.KPPLoad("resources/samples/guitar/guitar1/aSharp1.wav");
    aSharp2.KPPLoad("resources/samples/guitar/guitar1/aSharp2.wav");
    b1.KPPLoad("resources/samples/guitar/guitar1/b1.wav");
    b2.KPPLoad("resources/samples/guitar/guitar1/b2.wav");
    c2.KPPLoad("resources/samples/guitar/guitar1/c2.wav");
    c3.KPPLoad("resources/samples/guitar/guitar1/c3.wav");
    cSharp2.KPPLoad("resources/samples/guitar/guitar1/cSharp2.wav");
    cSharp3.KPPLoad("resources/samples/guitar/guitar1/cSharp3.wav");
    d2.KPPLoad("resources/samples/guitar/guitar1/d2.wav");
    d3.KPPLoad("resources/samples/guitar/guitar1/d3.wav");
    dSharp2.KPPLoad("resources/samples/guitar/guitar1/dSharp2.wav");
    dSharp3.KPPLoad("resources/samples/guitar/guitar1/dSharp3.wav");
    e1.KPPLoad("resources/samples/guitar/guitar1/e1.wav");
    e2.KPPLoad("resources/samples/guitar/guitar1/e2.wav");
    e3.KPPLoad("resources/samples/guitar/guitar1/e3.wav");
    f1.KPPLoad("resources/samples/guitar/guitar1/f1.wav");
    f2.KPPLoad("resources/samples/guitar/guitar1/f2.wav");
    f3.KPPLoad("resources/samples/guitar/guitar1/f3.wav");
    fSharp1.KPPLoad("resources/samples/guitar/guitar1/fSharp1.wav");
    fSharp2.KPPLoad("resources/samples/guitar/guitar1/fSharp2.wav");
    g1.KPPLoad("resources/samples/guitar/guitar1/g1.wav");
    g2.KPPLoad("resources/samples/guitar/guitar1/g2.wav");
    gSharp1.KPPLoad("resources/samples/guitar/guitar1/gSharp1.wav");
    gSharp2.KPPLoad("resources/samples/guitar/guitar1/gSharp2.wav");
}

KPPGuitar::KPPGuitar(std::string guitar) {
    letRing = -1;
    currentGuitar = guitar;
    a1.KPPLoad("resources/samples/guitar/" + guitar + "/a1.wav");
    a2.KPPLoad("resources/samples/guitar/" + guitar + "/a2.wav");
    aSharp1.KPPLoad("resources/samples/guitar/" + guitar + "/aSharp1.wav");
    aSharp2.KPPLoad("resources/samples/guitar/" + guitar + "/aSharp2.wav");
    b1.KPPLoad("resources/samples/guitar/" + guitar + "/b1.wav");
    b2.KPPLoad("resources/samples/guitar/" + guitar + "/b2.wav");
    c2.KPPLoad("resources/samples/guitar/" + guitar + "/c2.wav");
    c3.KPPLoad("resources/samples/guitar/" + guitar + "/c3.wav");
    cSharp2.KPPLoad("resources/samples/guitar/" + guitar + "/cSharp2.wav");
    cSharp3.KPPLoad("resources/samples/guitar/" + guitar + "/cSharp3.wav");
    d2.KPPLoad("resources/samples/guitar/" + guitar + "/d2.wav");
    d3.KPPLoad("resources/samples/guitar/" + guitar + "/d3.wav");
    dSharp2.KPPLoad("resources/samples/guitar/" + guitar + "/dSharp2.wav");
    dSharp3.KPPLoad("resources/samples/guitar/" + guitar + "/dSharp3.wav");
    e1.KPPLoad("resources/samples/guitar/" + guitar + "/e1.wav");
    e2.KPPLoad("resources/samples/guitar/" + guitar + "/e2.wav");
    e3.KPPLoad("resources/samples/guitar/" + guitar + "/e3.wav");
    f1.KPPLoad("resources/samples/guitar/" + guitar + "/f1.wav");
    f2.KPPLoad("resources/samples/guitar/" + guitar + "/f2.wav");
    f3.KPPLoad("resources/samples/guitar/" + guitar + "/f3.wav");
    fSharp1.KPPLoad("resources/samples/guitar/" + guitar + "/fSharp1.wav");
    fSharp2.KPPLoad("resources/samples/guitar/" + guitar + "/fSharp2.wav");
    g1.KPPLoad("resources/samples/guitar/" + guitar + "/g1.wav");
    g2.KPPLoad("resources/samples/guitar/" + guitar + "/g2.wav");
    gSharp1.KPPLoad("resources/samples/guitar/" + guitar + "/gSharp1.wav");
    gSharp2.KPPLoad("resources/samples/guitar/" + guitar + "/gSharp2.wav");
}

void KPPGuitar::loadGuitar(std::string guitar) {
    letRing = -1;
    currentGuitar = guitar;
    a1.KPPLoad("resources/samples/guitar/" + guitar + "/a1.wav");
    a2.KPPLoad("resources/samples/guitar/" + guitar + "/a2.wav");
    aSharp1.KPPLoad("resources/samples/guitar/" + guitar + "/aSharp1.wav");
    aSharp2.KPPLoad("resources/samples/guitar/" + guitar + "/aSharp2.wav");
    b1.KPPLoad("resources/samples/guitar/" + guitar + "/b1.wav");
    b2.KPPLoad("resources/samples/guitar/" + guitar + "/b2.wav");
    c2.KPPLoad("resources/samples/guitar/" + guitar + "/c2.wav");
    c3.KPPLoad("resources/samples/guitar/" + guitar + "/c3.wav");
    cSharp2.KPPLoad("resources/samples/guitar/" + guitar + "/cSharp2.wav");
    cSharp3.KPPLoad("resources/samples/guitar/" + guitar + "/cSharp3.wav");
    d2.KPPLoad("resources/samples/guitar/" + guitar + "/d2.wav");
    d3.KPPLoad("resources/samples/guitar/" + guitar + "/d3.wav");
    dSharp2.KPPLoad("resources/samples/guitar/" + guitar + "/dSharp2.wav");
    dSharp3.KPPLoad("resources/samples/guitar/" + guitar + "/dSharp3.wav");
    e1.KPPLoad("resources/samples/guitar/" + guitar + "/e1.wav");
    e2.KPPLoad("resources/samples/guitar/" + guitar + "/e2.wav");
    e3.KPPLoad("resources/samples/guitar/" + guitar + "/e3.wav");
    f1.KPPLoad("resources/samples/guitar/" + guitar + "/f1.wav");
    f2.KPPLoad("resources/samples/guitar/" + guitar + "/f2.wav");
    f3.KPPLoad("resources/samples/guitar/" + guitar + "/f3.wav");
    fSharp1.KPPLoad("resources/samples/guitar/" + guitar + "/fSharp1.wav");
    fSharp2.KPPLoad("resources/samples/guitar/" + guitar + "/fSharp2.wav");
    g1.KPPLoad("resources/samples/guitar/" + guitar + "/g1.wav");
    g2.KPPLoad("resources/samples/guitar/" + guitar + "/g2.wav");
    gSharp1.KPPLoad("resources/samples/guitar/" + guitar + "/gSharp1.wav");
    gSharp2.KPPLoad("resources/samples/guitar/" + guitar + "/gSharp2.wav");
}

std::string KPPGuitar::getGuitar() {
	return this->currentGuitar;
}

void KPPGuitar::playA1() {
    a1.KPPPlay();
}
void KPPGuitar::playASharp1() {
    aSharp1.KPPPlay();
}

void KPPGuitar::playA2() {
    a2.KPPPlay();
}
void KPPGuitar::playASharp2() {
    aSharp2.KPPPlay();
}
void KPPGuitar::playB1() {
    b1.KPPPlay();
}
void KPPGuitar::playB2() {
    b2.KPPPlay();
}
void KPPGuitar::playC2() {
    c2.KPPPlay();
}
void KPPGuitar::playC3() {
    c3.KPPPlay();
}
void KPPGuitar::playCSharp2() {
    cSharp2.KPPPlay();
}
void KPPGuitar::playCSharp3() {
    cSharp3.KPPPlay();
}
void KPPGuitar::playD2() {
    d2.KPPPlay();
}
void KPPGuitar::playD3() {
    d3.KPPPlay();
}
void KPPGuitar::playDSharp2() {
    dSharp2.KPPPlay();
}
void KPPGuitar::playDSharp3() {
    dSharp3.KPPPlay();
}
void KPPGuitar::playE1() {
    e1.KPPPlay();
}
void KPPGuitar::playE2() {
    e2.KPPPlay();
}
void KPPGuitar::playE3() {
    e3.KPPPlay();
}
void KPPGuitar::playF1() {
    f1.KPPPlay();
}
void KPPGuitar::playF2() {
    f2.KPPPlay();
}
void KPPGuitar::playF3() {
    f3.KPPPlay();
}
void KPPGuitar::playFSharp1() {
    fSharp1.KPPPlay();
}
void KPPGuitar::playFSharp2() {
    fSharp2.KPPPlay();
}
void KPPGuitar::playFSharp3() {
    fSharp3.KPPPlay();
}
void KPPGuitar::playG1() {
    g1.KPPPlay();
}
void KPPGuitar::playG2() {
    g2.KPPPlay();
}
void KPPGuitar::playG3() {
    g3.KPPPlay();
}
void KPPGuitar::playGSharp1() {
    gSharp1.KPPPlay();
}
void KPPGuitar::playGSharp2() {
    gSharp2.KPPPlay();
}

void KPPGuitar::switchLetRing() {
    this->letRing *= -1;
}

int KPPGuitar::getLetRing() {
    return this->letRing;
}

void KPPGuitar::muteNote(sf::Keyboard::Key keyReleased) {
    //if letRing is not set
    if (letRing == -1) {
        switch (keyReleased) {
            case sf::Keyboard::Z:
                e1.KPPMute();
                break;
            case sf::Keyboard::X:
                f1.KPPMute();
                break;
            case sf::Keyboard::C:
                fSharp1.KPPMute();
                break;
            case sf::Keyboard::V:
                g1.KPPMute();
                break;
            case sf::Keyboard::B:
                gSharp1.KPPMute();
                break;
            case sf::Keyboard::A:
                a1.KPPMute();
                break;
            case sf::Keyboard::S:
                aSharp1.KPPMute();
                break;
            case sf::Keyboard::D:
                b1.KPPMute();
                break;
            case sf::Keyboard::F:
                c2.KPPMute();
                break;
            case sf::Keyboard::G:
                cSharp2.KPPMute();
                break;
            case sf::Keyboard::Q:
                d2.KPPMute();
                break;
            case sf::Keyboard::W:
                dSharp2.KPPMute();
                break;
            case sf::Keyboard::E:
                e2.KPPMute();
                break;
            case sf::Keyboard::R:
                f2.KPPMute();
                break;
            case sf::Keyboard::T:
                fSharp2.KPPMute();
                break;
            case sf::Keyboard::Num1:
                g2.KPPMute();
                break;
            case sf::Keyboard::Num2:
                gSharp2.KPPMute();
                break;
            case sf::Keyboard::Num3:
                a2.KPPMute();
                break;
            case sf::Keyboard::Num4:
                aSharp2.KPPMute();
                break;
            case sf::Keyboard::Num5:
                b2.KPPMute();
                break;
            case sf::Keyboard::Num6:
                c3.KPPMute();
                break;
            case sf::Keyboard::Num7:
                cSharp3.KPPMute();
                break;
            case sf::Keyboard::Num8:
                d3.KPPMute();
                break;
            case sf::Keyboard::Num9:
                dSharp3.KPPMute();
                break;
            case sf::Keyboard::Num0:
                e3.KPPMute();
                break;
            case sf::Keyboard::Subtract:
                f3.KPPMute();
                break;
                
            default:
                //do nothing
                break;
        }
    } //do nothing if let ring is on.
}


void KPPGuitar::muteEString() {
	e1.KPPMute();
	f1.KPPMute();
	fSharp1.KPPMute();
	g1.KPPMute();
	gSharp1.KPPMute();
}

void KPPGuitar::muteAString() {
	a1.KPPMute();
	aSharp1.KPPMute();
	b1.KPPMute();
	c1.KPPMute();
	cSharp1.KPPMute();
}

void KPPGuitar::muteDString() {
	d2.KPPMute();
	dSharp1.KPPMute();
	e2.KPPMute();
	f2.KPPMute();
	fSharp2.KPPMute();
}

void KPPGuitar::muteGString() {
	g2.KPPMute();
	gSharp2.KPPMute();
	a2.KPPMute();
	aSharp2.KPPMute();
	b2.KPPMute();
	c2.KPPMute();
}

void KPPGuitar::muteAll() {
	muteAString();
	muteDString();
	muteEString();
	muteGString();
}



