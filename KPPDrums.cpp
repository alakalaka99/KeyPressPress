#include <SFML/Audio.hpp>
#include "KPPDrums.hpp"

KPPDrums::KPPDrums() {
    closedHiHat.KPPLoad("resources/samples/drums/kit1/closedHiHat.wav");
    openHiHat.KPPLoad("resources/samples/drums/kit1/openHiHat.wav");
    crash1.KPPLoad("resources/samples/drums/kit1/crash1.wav");
    crash2.KPPLoad("resources/samples/drums/kit1/crash2.wav");
    ride.KPPLoad("resources/samples/drums/kit1/ride.wav");
    snare.KPPLoad("resources/samples/drums/kit1/snare.wav");
    tomHigh.KPPLoad("resources/samples/drums/kit1/tomHigh.wav");
    tomMid.KPPLoad("resources/samples/drums/kit1/tomMid.wav");
    tomLow.KPPLoad("resources/samples/drums/kit1/tomLow.wav");
    bass.KPPLoad("resources/samples/drums/kit1/bass.wav");
    cowbell.KPPLoad("resources/samples/drums/kit1/cowbell.wav");

    currentKit = "kit1";
}

KPPDrums::KPPDrums(std::string kit) {
    closedHiHat.KPPLoad("resources/samples/drums/" + kit + "/closedHiHat.wav");
    openHiHat.KPPLoad("resources/samples/drums/" + kit + "/openHiHat.wav");
    crash1.KPPLoad("resources/samples/drums/" + kit + "/crash1.wav");
    crash2.KPPLoad("resources/samples/drums/" + kit + "/crash2.wav");
    ride.KPPLoad("resources/samples/drums/" + kit + "/ride.wav");
    snare.KPPLoad("resources/samples/drums/" + kit + "/snare.wav");
    tomHigh.KPPLoad("resources/samples/drums/" + kit + "/tomHigh.wav");
    tomMid.KPPLoad("resources/samples/drums/" + kit + "/tomMid.wav");
    tomLow.KPPLoad("resources/samples/drums/" + kit + "/tomLow.wav");
    bass.KPPLoad("resources/samples/drums/" + kit + "/bass.wav");
    cowbell.KPPLoad("resources/samples/drums/" + kit + "/cowbell.wav");

    currentKit = kit;
}

void KPPDrums::loadKit(std::string kit) {
    closedHiHat.KPPLoad("resources/samples/drums/" + kit + "/closedHiHat.wav");
    openHiHat.KPPLoad("resources/samples/drums/" + kit + "/openHiHat.wav");
    crash1.KPPLoad("resources/samples/drums/" + kit + "/crash1.wav");
    crash2.KPPLoad("resources/samples/drums/" + kit + "/crash2.wav");
    ride.KPPLoad("resources/samples/drums/" + kit + "/ride.wav");
    snare.KPPLoad("resources/samples/drums/" + kit + "/snare.wav");
    tomHigh.KPPLoad("resources/samples/drums/" + kit + "/tomHigh.wav");
    tomMid.KPPLoad("resources/samples/drums/" + kit + "/tomMid.wav");
    tomLow.KPPLoad("resources/samples/drums/" + kit + "/tomLow.wav");
    bass.KPPLoad("resources/samples/drums/" + kit + "/bass.wav");
    cowbell.KPPLoad("resources/samples/drums/" + kit + "/cowbell.wav");

    currentKit = kit;
}

std::string KPPDrums::getKit() {
	return currentKit;
}

void KPPDrums::muteAll() {
    closedHiHat.KPPMute();
    openHiHat.KPPMute();
    crash1.KPPMute();
    crash2.KPPMute();
    ride.KPPMute();
    snare.KPPMute();
    tomHigh.KPPMute();
    tomMid.KPPMute();
    tomLow.KPPMute();
    bass.KPPMute();
    cowbell.KPPMute();
}

void KPPDrums::playClosedHiHat() {
    closedHiHat.KPPPlay();
    openHiHat.KPPMute();
}
void KPPDrums::playOpenHiHat() {
    openHiHat.KPPPlay();
    closedHiHat.KPPMute();
}
void KPPDrums::playCrash1() {
    crash1.KPPPlay();
}
void KPPDrums::playCrash2() {
    crash2.KPPPlay();
}
void KPPDrums::playRide() {
    ride.KPPPlay();
}
void KPPDrums::playSnare() {
    snare.KPPPlay();
}
void KPPDrums::playTomHigh() {
    tomHigh.KPPPlay();
}
void KPPDrums::playTomMid() {
    tomMid.KPPPlay();
}
void KPPDrums::playTomLow() {
    tomLow.KPPPlay();
}
void KPPDrums::playBass() {
    bass.KPPPlay();
}
void KPPDrums::playCowbell() {
    cowbell.KPPPlay();
}

