#include <SFML/Audio.hpp>
#include "KPPSound.hpp"

KPPSound::KPPSound(std::string sFile) {
    buffer.loadFromFile(sFile); // Load sound
    sound.setBuffer(buffer);    // Set buffer to sound
};

void KPPSound::KPPLoad(std::string sFile) {
	sound.resetBuffer();
    buffer.loadFromFile(sFile); // Load sound
    sound.setBuffer(buffer);    // Set buffer to sound
};

void KPPSound::KPPPlay() {
    sound.play(); // Play sound
}

void KPPSound::KPPMute() {
	sound.stop();
}

sf::SoundSource::Status KPPSound::KPPStatus() {
	return sound.getStatus();
}


