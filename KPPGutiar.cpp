#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include "KPPGutiar.hpp"

KPPGuitar::KPPGuitar(std::string guitar = "guitar1") {
    a1.KPPLoad("resources/samples/guitar/" + guitar + "/gtr1_a1.wav");
    aSharp1.KPPLoad("resources/samples/guitar/" + guitar + "/gtr1_aSharp1.wav");
    b1.KPPLoad("resources/samples/guitar/" + guitar + "/gtr1_b1.wav");
    c1.KPPLoad("resources/samples/guitar/" + guitar + "/gtr1_c1.wav");
    cSharp1.KPPLoad("resources/samples/guitar/" + guitar + "/gtr1_cSharp1.wav");
    d1.KPPLoad("resources/samples/guitar/" + guitar + "/gtr1_d1.wav");
    dSharp1.KPPLoad("resources/samples/guitar/" + guitar + "/gtr1_dSharp1.wav");
    e1.KPPLoad("resources/samples/guitar/" + guitar + "/gtr1_e1.wav");
    f1.KPPLoad("resources/samples/guitar/" + guitar + "/gtr1_f1.wav");
    fSharp1.KPPLoad("resources/samples/guitar/" + guitar + "/gtr1_fSharp1.wav");
    g1.KPPLoad("resources/samples/guitar/" + guitar + "/gtr1_g1.wav");
    gSharp1.KPPLoad("resources/samples/guitar/" + guitar + "/gtr1_gSharp1.wav");
    a2.KPPLoad("resources/samples/guitar/" + guitar + "/gtr1_a2.wav");
    aSharp2.KPPLoad("resources/samples/guitar/" + guitar + "/gtr1_aSharp2.wav");
    b2.KPPLoad("resources/samples/guitar/" + guitar + "/gtr1_b2.wav");
    c2.KPPLoad("resources/samples/guitar/" + guitar + "/gtr1_c2.wav");
    e2.KPPLoad("resources/samples/guitar/" + guitar + "/gtr1_e2.wav");
    f2.KPPLoad("resources/samples/guitar/" + guitar + "/gtr1_f2.wav");
    fSharp2.KPPLoad("resources/samples/guitar/" + guitar + "/gtr1_fSharp2.wav");
    g2.KPPLoad("resources/samples/guitar/" + guitar + "/gtr1_g2.wav");
    gSharp2.KPPLoad("resources/samples/guitar/" + guitar + "/gSharp2.wav");
}

void KPPGuitar::playA1() {
    a1.KPPPlay();
}
void KPPGuitar::playASharp1() {
    aSharp1.KPPPlay();
}
void KPPGuitar::playB1() {
    b1.KPPPlay();
}
void KPPGuitar::playC1() {
    c1.KPPPlay();
}
void KPPGuitar::playCSharp1() {
    cSharp1.KPPPlay();
}
void KPPGuitar::playD1() {
    d1.KPPPlay();
}
void KPPGuitar::playDSharp1() {
    dSharp1.KPPPlay();
}
void KPPGuitar::playE1() {
    e1.KPPPlay();
}
void KPPGuitar::playF1() {
    f1.KPPPlay();
}
void KPPGuitar::playFSharp1() {
    fSharp1.KPPPlay();
}
void KPPGuitar::playG1() {
    g1.KPPPlay();
}
void KPPGuitar::playGSharp1() {
    gSharp1.KPPPlay();
}
void KPPGuitar::playA2() {
    a2.KPPPlay();
}
void KPPGuitar::playASharp2() {
    aSharp2.KPPPlay();
}
void KPPGuitar::playB2() {
    b2.KPPPlay();
}
void KPPGuitar::playC2() {
    c2.KPPPlay();
}
void KPPGuitar::playE2() {
    e2.KPPPlay();
}
void KPPGuitar::playF2() {
    f2.KPPPlay();
}
void KPPGuitar::playFSharp2() {
    fSharp2.KPPPlay();
}
void KPPGuitar::playG2() {
    g2.KPPPlay();
}
void KPPGuitar::playGSharp2() {
    gSharp2.KPPPlay();
}



