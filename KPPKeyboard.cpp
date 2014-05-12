#include <SFML/Audio.hpp>
#include <string>

#include "KPPKeyboard.hpp"


KPPKeyboard::KPPKeyboard() {
    a1.KPPLoad("resources/samples/keyboard/keyboard1/a1.wav");
    aSharp1.KPPLoad("resources/samples/keyboard/keyboard1/aSharp1.wav");
    b1.KPPLoad("resources/samples/keyboard/keyboard1/b1.wav");
    c1.KPPLoad("resources/samples/keyboard/keyboard1/c1.wav");
    cSharp1.KPPLoad("resources/samples/keyboard/keyboard1/cSharp1.wav");
    d1.KPPLoad("resources/samples/keyboard/keyboard1/d1.wav");
    dSharp1.KPPLoad("resources/samples/keyboard/keyboard1/dSharp1.wav");
    e1.KPPLoad("resources/samples/keyboard/keyboard1/e1.wav");
    f1.KPPLoad("resources/samples/keyboard/keyboard1/f1.wav");
    fSharp1.KPPLoad("resources/samples/keyboard/keyboard1/fSharp1.wav");
    g1.KPPLoad("resources/samples/keyboard/keyboard1/g1.wav");
    gSharp1.KPPLoad("resources/samples/keyboard/keyboard1/gSharp1.wav");
    a2.KPPLoad("resources/samples/keyboard/keyboard1/a2.wav");
    aSharp2.KPPLoad("resources/samples/keyboard/keyboard1/aSharp2.wav");
    b2.KPPLoad("resources/samples/keyboard/keyboard1/b2.wav");
    c2.KPPLoad("resources/samples/keyboard/keyboard1/c2.wav");
    cSharp2.KPPLoad("resources/samples/keyboard/keyboard1/cSharp2.wav");
    d2.KPPLoad("resources/samples/keyboard/keyboard1/d2.wav");
    dSharp2.KPPLoad("resources/samples/keyboard/keyboard1/dSharp2.wav");
    e2.KPPLoad("resources/samples/keyboard/keyboard1/e2.wav");
    f2.KPPLoad("resources/samples/keyboard/keyboard1/f2.wav");
    fSharp2.KPPLoad("resources/samples/keyboard/keyboard1/fSharp2.wav");
    g2.KPPLoad("resources/samples/keyboard/keyboard1/g2.wav");
    gSharp2.KPPLoad("resources/samples/keyboard/keyboard1/gSharp2.wav");
    
    currentKeyboard= "keyboard1";
}


KPPKeyboard::KPPKeyboard(std::string keyboard) {
    a1.KPPLoad("resources/samples/keyboard/" + keyboard + "/a1.wav");
    aSharp1.KPPLoad("resources/samples/keyboard/" + keyboard + "/aSharp1.wav");
    b1.KPPLoad("resources/samples/keyboard/" + keyboard + "/b1.wav");
    c1.KPPLoad("resources/samples/keyboard/" + keyboard + "/c1.wav");
    cSharp1.KPPLoad("resources/samples/keyboard/" + keyboard + "/cSharp1.wav");
    d1.KPPLoad("resources/samples/keyboard/" + keyboard + "/d1.wav");
    dSharp1.KPPLoad("resources/samples/keyboard/" + keyboard + "/dSharp1.wav");
    e1.KPPLoad("resources/samples/keyboard/" + keyboard + "/e1.wav");
    f1.KPPLoad("resources/samples/keyboard/" + keyboard + "/f1.wav");
    fSharp1.KPPLoad("resources/samples/keyboard/" + keyboard + "/fSharp1.wav");
    g1.KPPLoad("resources/samples/keyboard/" + keyboard + "/g1.wav");
    gSharp1.KPPLoad("resources/samples/keyboard/" + keyboard + "/gSharp1.wav");
    a2.KPPLoad("resources/samples/keyboard/" + keyboard + "/a2.wav");
    aSharp2.KPPLoad("resources/samples/keyboard/" + keyboard + "/aSharp2.wav");
    b2.KPPLoad("resources/samples/keyboard/" + keyboard + "/b2.wav");
    c2.KPPLoad("resources/samples/keyboard/" + keyboard + "/c2.wav");
    cSharp2.KPPLoad("resources/samples/keyboard/" + keyboard + "/cSharp2.wav");
    d2.KPPLoad("resources/samples/keyboard/" + keyboard + "/d2.wav");
    dSharp2.KPPLoad("resources/samples/keyboard/" + keyboard + "/dSharp2.wav");
    e2.KPPLoad("resources/samples/keyboard/" + keyboard + "/e2.wav");
    f2.KPPLoad("resources/samples/keyboard/" + keyboard + "/f2.wav");
    fSharp2.KPPLoad("resources/samples/keyboard/" + keyboard + "/fSharp2.wav");
    g2.KPPLoad("resources/samples/keyboard/" + keyboard + "/g2.wav");
    gSharp2.KPPLoad("resources/samples/keyboard/" + keyboard + "/gSharp2.wav");
    
    currentKeyboard = keyboard;
}

void KPPKeyboard::loadKeyboard(std::string keyboard) {
    a1.KPPLoad("resources/samples/keyboard/" + keyboard + "/a1.wav");
    aSharp1.KPPLoad("resources/samples/keyboard/" + keyboard + "/aSharp1.wav");
    b1.KPPLoad("resources/samples/keyboard/" + keyboard + "/b1.wav");
    c1.KPPLoad("resources/samples/keyboard/" + keyboard + "/c1.wav");
    cSharp1.KPPLoad("resources/samples/keyboard/" + keyboard + "/cSharp1.wav");
    d1.KPPLoad("resources/samples/keyboard/" + keyboard + "/d1.wav");
    dSharp1.KPPLoad("resources/samples/keyboard/" + keyboard + "/dSharp1.wav");
    e1.KPPLoad("resources/samples/keyboard/" + keyboard + "/e1.wav");
    f1.KPPLoad("resources/samples/keyboard/" + keyboard + "/f1.wav");
    fSharp1.KPPLoad("resources/samples/keyboard/" + keyboard + "/fSharp1.wav");
    g1.KPPLoad("resources/samples/keyboard/" + keyboard + "/g1.wav");
    gSharp1.KPPLoad("resources/samples/keyboard/" + keyboard + "/gSharp1.wav");
    a2.KPPLoad("resources/samples/keyboard/" + keyboard + "/a2.wav");
    aSharp2.KPPLoad("resources/samples/keyboard/" + keyboard + "/aSharp2.wav");
    b2.KPPLoad("resources/samples/keyboard/" + keyboard + "/b2.wav");
    c2.KPPLoad("resources/samples/keyboard/" + keyboard + "/c2.wav");
    cSharp2.KPPLoad("resources/samples/keyboard/" + keyboard + "/cSharp2.wav");
    d2.KPPLoad("resources/samples/keyboard/" + keyboard + "/d2.wav");
    dSharp2.KPPLoad("resources/samples/keyboard/" + keyboard + "/dSharp2.wav");
    e2.KPPLoad("resources/samples/keyboard/" + keyboard + "/e2.wav");
    f2.KPPLoad("resources/samples/keyboard/" + keyboard + "/f2.wav");
    fSharp2.KPPLoad("resources/samples/keyboard/" + keyboard + "/fSharp2.wav");
    g2.KPPLoad("resources/samples/keyboard/" + keyboard + "/g2.wav");
    gSharp2.KPPLoad("resources/samples/keyboard/" + keyboard + "/gSharp2.wav");
    
    currentKeyboard = keyboard;
}

std::string KPPKeyboard::getKeyboard() {
	return this->currentKeyboard;
}

void KPPKeyboard::playA1() {
    muteAll();
    a1.KPPPlay();
}
void KPPKeyboard::playASharp1() {
    muteAll();
    aSharp1.KPPPlay();
}
void KPPKeyboard::playB1() {
    muteAll();
    b1.KPPPlay();
}
void KPPKeyboard::playC1() {
    muteAll();
    c1.KPPPlay();
}
void KPPKeyboard::playCSharp1() {
    muteAll();
    cSharp1.KPPPlay();
}
void KPPKeyboard::playD1() {
    muteAll();
    d1.KPPPlay();
}
void KPPKeyboard::playDSharp1() {
    muteAll();
    dSharp1.KPPPlay();
}
void KPPKeyboard::playE1() {
    muteAll();
    e1.KPPPlay();
}
void KPPKeyboard::playF1() {
    muteAll();
    f1.KPPPlay();
}
void KPPKeyboard::playFSharp1() {
    muteAll();
    fSharp1.KPPPlay();
}
void KPPKeyboard::playG1() {
    muteAll();
    g1.KPPPlay();
}
void KPPKeyboard::playGSharp1() {
    muteAll();
    gSharp1.KPPPlay();
}
void KPPKeyboard::playA2() {
    muteAll();
    a2.KPPPlay();
}
void KPPKeyboard::playASharp2() {
    muteAll();
    aSharp2.KPPPlay();
}
void KPPKeyboard::playB2() {
    muteAll();
    b2.KPPPlay();
}
void KPPKeyboard::playC2() {
    muteAll();
    c2.KPPPlay();
}
void KPPKeyboard::playCSharp2() {
    muteAll();
    cSharp2.KPPPlay();
}
void KPPKeyboard::playD2() {
    muteAll();
    d2.KPPPlay();
}
void KPPKeyboard::playDSharp2() {
    muteAll();
    dSharp2.KPPPlay();
}
void KPPKeyboard::playE2() {
    muteAll();
    e2.KPPPlay();
}
void KPPKeyboard::playF2() {
    muteAll();
    f2.KPPPlay();
}
void KPPKeyboard::playFSharp2() {
    muteAll();
    fSharp2.KPPPlay();
}
void KPPKeyboard::playG2() {
    muteAll();
    g2.KPPPlay();
}
void KPPKeyboard::playGSharp2() {
    muteAll();
    gSharp2.KPPPlay();
}

void KPPKeyboard::muteAll() {
    
    a1.KPPMute();
    aSharp1.KPPMute();
    b1.KPPMute();
    c1.KPPMute();
    cSharp1.KPPMute();
    d1.KPPMute();
    dSharp1.KPPMute();
    e1.KPPMute();
    f1.KPPMute();
    fSharp1.KPPMute();
    g1.KPPMute();
    gSharp1.KPPMute();
    a2.KPPMute();
    aSharp2.KPPMute();
    b2.KPPMute();
    c2.KPPMute();
    cSharp2.KPPMute();
    d2.KPPMute();
    dSharp2.KPPMute();
    e2.KPPMute();
    f2.KPPMute();
    fSharp2.KPPMute();
    g2.KPPMute();
    gSharp2.KPPMute();

}

void KPPKeyboard::muteNote(sf::Keyboard::Key keyReleased) {
	
	switch (keyReleased) {
		
		case sf::Keyboard::Z:
			c1.KPPMute();
			break;
		case sf::Keyboard::S:
			cSharp1.KPPMute();
			break;
		case sf::Keyboard::X:
			d1.KPPMute();
			break;
		case sf::Keyboard::D:
			dSharp1.KPPMute();
			break;
		case sf::Keyboard::C:
			e1.KPPMute();
			break;
		case sf::Keyboard::V:
			f1.KPPMute();
			break;
		case sf::Keyboard::G:
			fSharp1.KPPMute();
			break;
		case sf::Keyboard::B:
			g1.KPPMute();
			break;
		case sf::Keyboard::H:
			gSharp1.KPPMute();
			break;
		case sf::Keyboard::N:
			a1.KPPMute();
			break;
		case sf::Keyboard::J:
			aSharp1.KPPMute();
			break;
		case sf::Keyboard::M:
			b1.KPPMute();
			break;
		case sf::Keyboard::Q:
			c2.KPPMute();
			break;
		case sf::Keyboard::Num2:
			cSharp2.KPPMute();
			break;
		case sf::Keyboard::W:
			d2.KPPMute();
			break;
		case sf::Keyboard::Num3:
			dSharp2.KPPMute();
			break;
		case sf::Keyboard::E:
			e2.KPPMute();
			break;
		case sf::Keyboard::R:
			f2.KPPMute();
			break;
		case sf::Keyboard::Num5:
			fSharp2.KPPMute();
			break;
		case sf::Keyboard::T:
			g2.KPPMute();
			break;
		case sf::Keyboard::Num6:
			gSharp2.KPPMute();
			break;
		case sf::Keyboard::Y:
			a2.KPPMute();
			break;
		case sf::Keyboard::Num7:
			aSharp2.KPPMute();
			break;
		case sf::Keyboard::U:
			b2.KPPMute();
			break;
		
		default:
			break;
			
	}
}
			
