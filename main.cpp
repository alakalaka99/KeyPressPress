#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <string>

#include "KPPDrums.hpp"
#include "KPPBass.hpp"
#include "KPPGuitar.hpp"
#include "KPPKeyboard.hpp"

void buttonSetUp(sf::RectangleShape &button, int x, int y, sf::Color buttonColor, int thickness, sf::Color borderColor,
				 sf::Text &buttonText, sf::Font &font, std::string buttonString) {
	// set position and color of button
	button.setPosition(x, y);
	button.setFillColor(buttonColor);
	button.setOutlineThickness(thickness);
	button.setOutlineColor(borderColor);
	// set button text
	buttonText.setFont(font);
	buttonText.setString(buttonString);
	buttonText.setCharacterSize(20);
	buttonText.setColor(sf::Color::Black);
	buttonText.setStyle(sf::Text::Bold);
	buttonText.setPosition(x + (button.getSize().x / 7), y + (button.getSize().y / 3));
}

int main() {

    sf::RenderWindow window(sf::VideoMode(800, 600), "Key Press Press");

    sf::Texture menuBG;
    sf::Texture drumsBG;
    sf::Texture bassBG;
    sf::Texture keyboardBG;
    sf::Texture guitarBG;

    //    if (!menuBG.loadFromFile(resourcePath() + "menuBG_1.png")) { FJM
    if (!menuBG.loadFromFile("resources/images/menuBG.png")) {
        return EXIT_FAILURE;
    }
    if (!drumsBG.loadFromFile("resources/images/drumBG.png")) {
        return EXIT_FAILURE;
    }
    if (!bassBG.loadFromFile("resources/images/bassBG.png")) {
        return EXIT_FAILURE;
    }
    if (!keyboardBG.loadFromFile("resources/images/keyboardBG.png")) {
        return EXIT_FAILURE;
    }
    if (!guitarBG.loadFromFile("resources/images/guitarBG.png")) {
        return EXIT_FAILURE;
    }
    sf::Texture muteStringTexture;
    if (!muteStringTexture.loadFromFile("resources/images/mute_graphic.png")) {
        return -1;
    }
    sf::Texture letRingTexture;
    if (!letRingTexture.loadFromFile("resources/images/letRing_graphic.png")) {
        return -1;
    }


	// main menu background image
    sf::Sprite menuBackground;
    menuBackground.setTexture(menuBG);

    sf::Sprite drumsBackground;
    drumsBackground.setTexture(drumsBG);

    sf::Sprite bassBackground;
    bassBackground.setTexture(bassBG);

    sf::Sprite keyboardBackground;
    keyboardBackground.setTexture(keyboardBG);

    sf::Sprite guitarBackground;
    guitarBackground.setTexture(guitarBG);

    sf::Sprite muteStringsSprite;
    muteStringsSprite.setTexture(muteStringTexture);
    muteStringsSprite.setPosition(sf::Vector2f(645, 490));

    sf::Sprite letRingSprite;
    letRingSprite.setTexture(letRingTexture);
    letRingSprite.setPosition(sf::Vector2f(645, 485));

    // main menu buttons font
    sf::Font buttonFont;
    if (!buttonFont.loadFromFile("resources/fonts/arial.ttf")) {
		return EXIT_FAILURE;
	}

	// main menu button shapes
	sf::RectangleShape drumButton(sf::Vector2f(150, 60));
	sf::RectangleShape keysButton(sf::Vector2f(150, 60));
	sf::RectangleShape bassButton(sf::Vector2f(150, 60));
	sf::RectangleShape guitarButton(sf::Vector2f(150, 60));
	sf::RectangleShape backButton(sf::Vector2f(75, 75));
	sf::RectangleShape bassSwitch(sf::Vector2f(150, 75));
        sf::RectangleShape kitSwitch(sf::Vector2f(150, 35));
	sf::RectangleShape keysSwitch(sf::Vector2f(250, 75));	
	sf::RectangleShape guitarSwitch(sf::Vector2f(200, 75));	

	// main menu button text
	sf::Text drumText;
	sf::Text keysText;
	sf::Text bassText;
	sf::Text guitarText;
	sf::Text backText;
	sf::Text bassSwitchText;
	sf::Text kitSwitchText;
        sf::Text guitarSwitchText;
	sf::Text keysSwitchText;

	// handle menu button setup
	buttonSetUp(drumButton, 35, 450, sf::Color::Red, 5, sf::Color::Black, drumText, buttonFont, "Drums");
	buttonSetUp(guitarButton, 230, 450, sf::Color::Green, 5, sf::Color::Black, guitarText, buttonFont, "Guitar");
	buttonSetUp(bassButton, 425, 450, sf::Color::Blue, 5, sf::Color::Black, bassText, buttonFont, "Bass");
	buttonSetUp(keysButton, 620, 450, sf::Color::Yellow, 5, sf::Color::Black, keysText, buttonFont, "Keyboard");
	buttonSetUp(backButton, 25, 25, sf::Color::White, 2, sf::Color::Black, backText, buttonFont, "Menu");
	buttonSetUp(bassSwitch, 250, 25, sf::Color::Blue, 2, sf::Color::Black, bassSwitchText, buttonFont, "Switch Bass");
    buttonSetUp(guitarSwitch, 125, 25, sf::Color::Green, 2, sf::Color::Black, guitarSwitchText, buttonFont, "Switch Guitar");
    
	buttonSetUp(bassSwitch, 250, 25, sf::Color::Blue, 2, sf::Color::Black, bassSwitchText, buttonFont, "Switch Bass");
        buttonSetUp(kitSwitch, 125, 25, sf::Color::Red, 2, sf::Color::Black, kitSwitchText, buttonFont, "Switch Kit");
	buttonSetUp(keysSwitch, 250, 25, sf::Color::Yellow, 2, sf::Color::Black, keysSwitchText, buttonFont, "Switch Keyboard");


	// set up instruments
	KPPDrums drums;
	KPPBass bass;
    KPPGuitar guitar;
    KPPKeyboard keyboard;


	int mainMenu = 1;
	int guitarInterface = 0;
	int bassInterface = 0;
	int drumInterface = 0;
	int keysInterface = 0;

	window.setKeyRepeatEnabled(false);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

			// handle main menu events
			if (mainMenu) {
				if (event.type == event.MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left) {
					// mouse position variable
					sf::Vector2i position = sf::Mouse::getPosition(window);
					// drum button
					if (position.x >= 35 && position.x <= 185 && position.y >= 450 && position.y <= 510) {
						mainMenu = 0;
                        drumInterface = 1;
					}
					// guitar button
					else if (position.x >= 230 && position.x <= 380 && position.y >= 450 && position.y <= 510) {
                        mainMenu = 0;
                        guitarInterface = 1;
                    }
                    // bass button
                    else if (position.x >= 425 && position.x <= 575 && position.y >= 450 && position.y <= 510) {
                        mainMenu = 0;
                        bassInterface = 1;
                    }
                    // keyboard button
                    else if (position.x >= 620 && position.x <= 770 && position.y >= 450 && position.y <= 510) {
                        mainMenu = 0;
                        keysInterface = 1;
                    }
                }
			}

            // handle drum events
            else if (drumInterface) {
				if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::J) drums.playClosedHiHat();
				if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::N) drums.playClosedHiHat();
				if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::K) drums.playOpenHiHat();
				if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::I) drums.playCrash1();
				if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::O) drums.playCrash2();
				if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::L) drums.playRide();
				if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::S) drums.playSnare();
				if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::X) drums.playSnare();
				if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::A) drums.playBass();
				if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Z) drums.playBass();
				if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::R) drums.playTomHigh();
				if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::F) drums.playTomHigh();
				if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::T) drums.playTomMid();
				if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::G) drums.playTomMid();
				if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Y) drums.playTomLow();
				if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::H) drums.playTomLow();
				if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::P) drums.playCowbell();


				// menu button
				if (event.type == event.MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left) {
					// mouse position variable
					sf::Vector2i position = sf::Mouse::getPosition(window);
					if (position.x >= 25 && position.x <= 100 && position.y >= 25 && position.y <= 100) {
                        drums.muteAll();
						drumInterface = 0;
                        mainMenu = 1;
					}
					if (position.x >= 125 && position.x <= 275 && position.y >= 25 && position.y <= 60) {
						if (drums.getKit() == "kit1") {
                                drums.muteAll();
                                drums.loadKit("kit2");
						}
						else {
                            drums.muteAll();
                            drums.loadKit("kit1");
						}
					}
				}
			}

			// handle bass events
			else if (bassInterface) {

				bool strumming = (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Left) ||
                (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Right);

				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z) && strumming) bass.playE1();
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::X) && strumming) bass.playF1();
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::C) && strumming) bass.playFSharp1();
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::V) && strumming) bass.playG1();
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::B) && strumming) bass.playGSharp1();
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) && strumming) bass.playA1();
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) && strumming) bass.playASharp1();
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) && strumming) bass.playB1();
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::F) && strumming) bass.playC1();
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::G) && strumming) bass.playCSharp1();
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q) && strumming) bass.playD1();
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) && strumming) bass.playDSharp1();
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::E) && strumming) bass.playE2();
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::R) && strumming) bass.playF2();
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::T) && strumming) bass.playFSharp2();
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1) && strumming) bass.playG2();
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2) && strumming) bass.playGSharp2();
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num3) && strumming) bass.playA2();
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num4) && strumming) bass.playASharp2();
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num5) && strumming) bass.playB2();
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num6) && strumming) bass.playC2();
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) bass.muteAll();

				// menu button
				if (event.type == event.MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left) {
					// mouse position variable
					sf::Vector2i position = sf::Mouse::getPosition(window);
					if (position.x >= 25 && position.x <= 100 && position.y >= 25 && position.y <= 100) {
						bass.muteAll();
						bassInterface = 0;
                        mainMenu = 1;
					}
					if (position.x >= 250 && position.x <= 400 && position.y >= 25 && position.y <= 100) {
						if (bass.getBass() == "bass1") bass.loadBass("bass2");
						else bass.loadBass("bass1");
					}
				}
			}

            // Handle guitar events
			else if (guitarInterface) {
                bool strumming = (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Left) || (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Right);
                //mutes note if key is released
                if (event.type == sf::Event::KeyReleased)
                {
                    guitar.muteNote(event.key.code);
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z) && strumming) guitar.playE1();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::X) && strumming)  guitar.playF1();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::C) && strumming)  guitar.playFSharp1();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::V) && strumming)  guitar.playG1();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::B) && strumming)  guitar.playGSharp1();
                if ((sf::Keyboard::isKeyPressed(sf::Keyboard::A) && strumming)  )guitar.playA1();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) && strumming)  guitar.playASharp1();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) && strumming)  guitar.playB1();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::F) && strumming)  guitar.playC2();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::G) && strumming)  guitar.playCSharp2();
                if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Q)&& strumming)  )guitar.playD2();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) && strumming)  guitar.playDSharp2();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::E) && strumming)  guitar.playE2();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::R) && strumming)  guitar.playF2();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::T) && strumming)  guitar.playFSharp2();
                if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Num1) && strumming)  )guitar.playG2();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2) && strumming)  guitar.playGSharp2();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num3) && strumming)  guitar.playA2();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num4) && strumming)  guitar.playASharp2();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num5) && strumming)  guitar.playB2();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num6) && strumming)  guitar.playC3();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num7) && strumming)  guitar.playCSharp3();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num8) && strumming)  guitar.playD3();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num9) && strumming)  guitar.playDSharp3();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num0) && strumming)  guitar.playE3();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Subtract) && strumming)  guitar.playF3();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) guitar.switchLetRing();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) guitar.muteAll();
                
                // menu button
				if (event.type == event.MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left) {
					// mouse position variable
					sf::Vector2i position = sf::Mouse::getPosition(window);
					if (position.x >= 25 && position.x <= 100 && position.y >= 25 && position.y <= 100) {
						guitarInterface = 0;
                        mainMenu = 1;
					}
                    if (position.x >= 125 && position.x <= 325 && position.y >= 25 && position.y <= 100) {
				guitar.muteAll();
						if (guitar.getGuitar() == "guitar1") {
                            guitar.loadGuitar("guitar2");
						}
						else {
                            guitar.loadGuitar("guitar1");
                        }
                    }
                }
            }
            // Handle keyboard events
			else if (keysInterface) {

				if (event.type == sf::Event::KeyReleased)
                {
                    keyboard.muteNote(event.key.code);
                }

				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Y)) keyboard.playA2();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num7)) keyboard.playASharp2();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::U)) keyboard.playB2();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q)) keyboard.playC2();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2)) keyboard.playCSharp2();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) keyboard.playD2();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num3)) keyboard.playDSharp2();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::E)) keyboard.playE2();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::R)) keyboard.playF2();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num5)) keyboard.playFSharp2();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::T)) keyboard.playG2();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num6)) keyboard.playGSharp2();

                if (sf::Keyboard::isKeyPressed(sf::Keyboard::N)) keyboard.playA1();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::J)) keyboard.playASharp1();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::M)) keyboard.playB1();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z)) keyboard.playC1();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) keyboard.playCSharp1();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::X)) keyboard.playD1();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) keyboard.playDSharp1();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::C)) keyboard.playE1();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::V)) keyboard.playF1();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::G)) keyboard.playFSharp1();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::B)) keyboard.playG1();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::H)) keyboard.playGSharp1();


				// menu button
				if (event.type == event.MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left) {
					// mouse position variable
					sf::Vector2i position = sf::Mouse::getPosition(window);
					if (position.x >= 25 && position.x <= 100 && position.y >= 25 && position.y <= 100) {
						keyboard.muteAll();
						keysInterface = 0;
                        mainMenu = 1;
					}
                    if (position.x >= 250 && position.x <= 500 && position.y >= 25 && position.y <= 100) {
						if (keyboard.getKeyboard() == "keyboard1") keyboard.loadKeyboard("keyboard2");
						else keyboard.loadKeyboard("keyboard1");
					}
				}
			}
        }

        window.clear();

		if (mainMenu) {
			// draw all buttons and text
			window.draw(menuBackground);
			window.draw(drumButton);
			window.draw(keysButton);
			window.draw(bassButton);
			window.draw(guitarButton);
			window.draw(drumText);
			window.draw(keysText);
			window.draw(bassText);
			window.draw(guitarText);
		}

		else if (guitarInterface) {
            window.draw(guitarBackground);
            if (guitar.getLetRing() == -1) {
                window.draw(muteStringsSprite);
            } else {
                window.draw(letRingSprite);
            }
			window.draw(backButton);
            window.draw(guitarSwitch);
			window.draw(guitarSwitchText);
			window.draw(backText);
		}

		else if (bassInterface) {
            window.draw(bassBackground);
			window.draw(backButton);
			window.draw(backText);
			window.draw(bassSwitch);
			window.draw(bassSwitchText);
		}

		else if (drumInterface) {
            window.draw(drumsBackground);
			window.draw(backButton);
			window.draw(backText);
			window.draw(kitSwitch);
			window.draw(kitSwitchText);
		}

		else if (keysInterface) {
			window.draw(keyboardBackground);
			window.draw(backButton);
			window.draw(backText);
			window.draw(keysSwitch);
			window.draw(keysSwitchText);
		}


        window.display(); // Display in window
    }

    return 0;
}
