#ifndef KPPSound_HPP_
#define KPPSound_HPP_

class KPPSound {

    public:
        KPPSound() {}; // Default constructor
        KPPSound(std::string); // Constructor that loads file passed as argument
        ~KPPSound() {};
        void KPPLoad(std::string); // Function loads sounds
        void KPPPlay(); // Plays loaded sound
        void KPPMute(); // Stops sound
        sf::SoundSource::Status KPPStatus();

    private:
        sf::SoundBuffer buffer;
        sf::Sound sound;
};

#endif


