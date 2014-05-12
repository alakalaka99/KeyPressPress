#include <SFML/Audio.hpp>

#include "KPPBass.hpp"
#include <string>

KPPBass::KPPBass() {
    a1.KPPLoad("resources/samples/bass/bass1/a1.wav");
    aSharp1.KPPLoad("resources/samples/bass/bass1/aSharp1.wav");
    b1.KPPLoad("resources/samples/bass/bass1/b1.wav");
    c1.KPPLoad("resources/samples/bass/bass1/c1.wav");
    cSharp1.KPPLoad("resources/samples/bass/bass1/cSharp1.wav");
    d1.KPPLoad("resources/samples/bass/bass1/d1.wav");
    dSharp1.KPPLoad("resources/samples/bass/bass1/dSharp1.wav");
    e1.KPPLoad("resources/samples/bass/bass1/e1.wav");
    f1.KPPLoad("resources/samples/bass/bass1/f1.wav");
    fSharp1.KPPLoad("resources/samples/bass/bass1/fSharp1.wav");
    g1.KPPLoad("resources/samples/bass/bass1/g1.wav");
    gSharp1.KPPLoad("resources/samples/bass/bass1/gSharp1.wav");
    a2.KPPLoad("resources/samples/bass/bass1/a2.wav");
    aSharp2.KPPLoad("resources/samples/bass/bass1/aSharp2.wav");
    b2.KPPLoad("resources/samples/bass/bass1/b2.wav");
    c2.KPPLoad("resources/samples/bass/bass1/c2.wav");
    e2.KPPLoad("resources/samples/bass/bass1/e2.wav");
    f2.KPPLoad("resources/samples/bass/bass1/f2.wav");
    fSharp2.KPPLoad("resources/samples/bass/bass1/fSharp2.wav");
    g2.KPPLoad("resources/samples/bass/bass1/g2.wav");
    gSharp2.KPPLoad("resources/samples/bass/bass1/gSharp2.wav");
    
    currentBass = "bass1";
    
}

KPPBass::KPPBass(std::string bass) {
    a1.KPPLoad("resources/samples/bass/" + bass + "/a1.wav");
    aSharp1.KPPLoad("resources/samples/bass/" + bass + "/aSharp1.wav");
    b1.KPPLoad("resources/samples/bass/" + bass + "/b1.wav");
    c1.KPPLoad("resources/samples/bass/" + bass + "/c1.wav");
    cSharp1.KPPLoad("resources/samples/bass/" + bass + "/cSharp1.wav");
    d1.KPPLoad("resources/samples/bass/" + bass + "/d1.wav");
    dSharp1.KPPLoad("resources/samples/bass/" + bass + "/dSharp1.wav");
    e1.KPPLoad("resources/samples/bass/" + bass + "/e1.wav");
    f1.KPPLoad("resources/samples/bass/" + bass + "/f1.wav");
    fSharp1.KPPLoad("resources/samples/bass/" + bass + "/fSharp1.wav");
    g1.KPPLoad("resources/samples/bass/" + bass + "/g1.wav");
    gSharp1.KPPLoad("resources/samples/bass/" + bass + "/gSharp1.wav");
    a2.KPPLoad("resources/samples/bass/" + bass + "/a2.wav");
    aSharp2.KPPLoad("resources/samples/bass/" + bass + "/aSharp2.wav");
    b2.KPPLoad("resources/samples/bass/" + bass + "/b2.wav");
    c2.KPPLoad("resources/samples/bass/" + bass + "/c2.wav");
    e2.KPPLoad("resources/samples/bass/" + bass + "/e2.wav");
    f2.KPPLoad("resources/samples/bass/" + bass + "/f2.wav");
    fSharp2.KPPLoad("resources/samples/bass/" + bass + "/fSharp2.wav");
    g2.KPPLoad("resources/samples/bass/" + bass + "/g2.wav");
    gSharp2.KPPLoad("resources/samples/bass/" + bass + "/gSharp2.wav");
    
    currentBass = bass;
    
}

void KPPBass::loadBass(std::string bass) {
    a1.KPPLoad("resources/samples/bass/" + bass + "/a1.wav");
    aSharp1.KPPLoad("resources/samples/bass/" + bass + "/aSharp1.wav");
    b1.KPPLoad("resources/samples/bass/" + bass + "/b1.wav");
    c1.KPPLoad("resources/samples/bass/" + bass + "/c1.wav");
    cSharp1.KPPLoad("resources/samples/bass/" + bass + "/cSharp1.wav");
    d1.KPPLoad("resources/samples/bass/" + bass + "/d1.wav");
    dSharp1.KPPLoad("resources/samples/bass/" + bass + "/dSharp1.wav");
    e1.KPPLoad("resources/samples/bass/" + bass + "/e1.wav");
    f1.KPPLoad("resources/samples/bass/" + bass + "/f1.wav");
    fSharp1.KPPLoad("resources/samples/bass/" + bass + "/fSharp1.wav");
    g1.KPPLoad("resources/samples/bass/" + bass + "/g1.wav");
    gSharp1.KPPLoad("resources/samples/bass/" + bass + "/gSharp1.wav");
    a2.KPPLoad("resources/samples/bass/" + bass + "/a2.wav");
    aSharp2.KPPLoad("resources/samples/bass/" + bass + "/aSharp2.wav");
    b2.KPPLoad("resources/samples/bass/" + bass + "/b2.wav");
    c2.KPPLoad("resources/samples/bass/" + bass + "/c2.wav");
    e2.KPPLoad("resources/samples/bass/" + bass + "/e2.wav");
    f2.KPPLoad("resources/samples/bass/" + bass + "/f2.wav");
    fSharp2.KPPLoad("resources/samples/bass/" + bass + "/fSharp2.wav");
    g2.KPPLoad("resources/samples/bass/" + bass + "/g2.wav");
    gSharp2.KPPLoad("resources/samples/bass/" + bass + "/gSharp2.wav");
    
    currentBass = bass;
    
}

std::string KPPBass::getBass() {
	return this->currentBass;
}

void KPPBass::playA1() {
	muteAString();
    a1.KPPPlay();
}
void KPPBass::playASharp1() {
	muteAString();
    aSharp1.KPPPlay();
}
void KPPBass::playB1() {
	muteAString();
    b1.KPPPlay();
}
void KPPBass::playC1() {
	muteAString();
    c1.KPPPlay();
}
void KPPBass::playCSharp1() {
	muteAString();
    cSharp1.KPPPlay();
}
void KPPBass::playD1() {
	muteDString();
    d1.KPPPlay();
}
void KPPBass::playDSharp1() {
	muteDString();
    dSharp1.KPPPlay();
}
void KPPBass::playE1() {
	muteEString();
    e1.KPPPlay();
}
void KPPBass::playF1() {
	muteEString();
    f1.KPPPlay();
}
void KPPBass::playFSharp1() {
	muteEString();
    fSharp1.KPPPlay();
}
void KPPBass::playG1() {
	muteEString();
    g1.KPPPlay();
}
void KPPBass::playGSharp1() {
	muteEString();
    gSharp1.KPPPlay();
}
void KPPBass::playA2() {
	muteGString();
    a2.KPPPlay();
}
void KPPBass::playASharp2() {
	muteGString();
    aSharp2.KPPPlay();
}
void KPPBass::playB2() {
	muteGString();
    b2.KPPPlay();
}
void KPPBass::playC2() {
	muteGString();
    c2.KPPPlay();
}
void KPPBass::playE2() {
	muteDString();
    e2.KPPPlay();
}
void KPPBass::playF2() {
	muteDString();
    f2.KPPPlay();
}
void KPPBass::playFSharp2() {
	muteDString();
    fSharp2.KPPPlay();
}
void KPPBass::playG2() {
	muteGString();
    g2.KPPPlay();
}
void KPPBass::playGSharp2() {
	muteGString();
    gSharp2.KPPPlay();
}

void KPPBass::muteEString() {
	e1.KPPMute();
	f1.KPPMute();
	fSharp1.KPPMute();
	g1.KPPMute();
	gSharp1.KPPMute();
}

void KPPBass::muteAString() {
	a1.KPPMute();
	aSharp1.KPPMute();
	b1.KPPMute();
	c1.KPPMute();
	cSharp1.KPPMute();
}

void KPPBass::muteDString() {
	d1.KPPMute();
	dSharp1.KPPMute();
	e2.KPPMute();
	f2.KPPMute();
	fSharp2.KPPMute();
}

void KPPBass::muteGString() {
	g2.KPPMute();
	gSharp2.KPPMute();
	a2.KPPMute();
	aSharp2.KPPMute();
	b2.KPPMute();
	c2.KPPMute();
}

void KPPBass::muteAll() {
	muteAString();
	muteDString();
	muteEString();
	muteGString();
}

