#include<SFML/Graphics.hpp>
#include<iostream>
int main()
{
	sf::RenderWindow window(sf::VideoMode(1200, 600), "SFML Tutorial"); // making a window

	// Tutorial of adding sprite

	sf::Texture texture; // creating Texture data type for load image

	//texture.setRepeated(true);   // repeated printing the sprite texture image within the setTextureRect area
	
	if (!texture.loadFromFile("flag.png")) // checking the programe can load the image or not
	{
		std::cout << "Error loading flag texture" << std::endl;
	}

	sf::Sprite sprite(texture); // add the texture image on the sprite to draw
	sprite.setTexture(texture); // you can also add texture image like this
	
	//sprite.setColor(sf::Color(0, 0, 250,10)); // set color by this function,  the parameter of the Color(RED,GREEN,BLUE,OPACITY) function

	//sprite.setTextureRect(sf::IntRect(0, 0, 600, 600));// rearrange sprite size to show in window or you can say resize the showing windows object

	while (window.isOpen())
	{
		sf::Event event; // making an event 
		while (window.pollEvent(event)) // get the event in the loop
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window.close(); // event will not close untill we close it
				break;

				//Tutorial of Key Press
				/*
				case sf::Event::KeyPressed: // checking keypress with KeyPressed function
					std::cout << "Key has been pressed" << std::endl;
					//break;
					switch (event.key.code)//taking key stroke in switch statement
					{
					case sf::Keyboard::A: // checking A is pressed or not
						std::cout << "A" << std::endl;
						break;
					}
					break;
				case sf::Event::KeyReleased:
					std::cout << "Key has been releassed" << std::endl;
					switch (event.key.code)
					{
					case sf::Keyboard::A:
						std::cout << "A Released" << std::endl;
						break;
					}
					break;
				 */


				 // Tutorial Mouse Event
				 /*
				 case sf::Event::MouseButtonPressed: // checking mouse button is presssed or not using MouseButtonPressed function
					 std::cout << "Mouse button has been pressed" << std::endl;
					 //break;
					 switch (event.key.code)// taking mouse key stroke in switch casse statement
					 {
					 case sf::Mouse::Left: //checking which mouse key is pressed
						 std::cout << "Left key has been pressed" << std::endl;
						 break;
					 }
					 break;
				 case sf::Event::MouseButtonReleased: // checking mouse button is realesed or not using MouseButtonReleased function
					 std::cout << "Mouse button has been Released" << std::endl;
					 //break;
					 switch (event.key.code)// taking mouse key stroke in switch casse statement
					 {
					 case sf::Mouse::Right: //checking which mouse key is released
						 std::cout << "Right key has been released" << std::endl;
						 break;
					 }
					 break;
				 case sf::Event::MouseWheelMoved: // checking mouse wheel is moved or not using MouseWheelMoved function
					 std::cout << "Mouse wheel has been moved" << std::endl;
					 //break;
					 std::cout << event.mouseWheel.delta << std::endl; // checking how first the mouse wheel moved
					 break;
				 case sf::Event::MouseMoved: // checking mouse  is moved or not using MouseMoved function
					 std::cout << "Mouse has been moved" << std::endl;
					 //break;
					 std::cout << event.mouseMove.y << std::endl; // checking how mouse moved according to window's y axis
					 break;
				 case sf::Event::MouseEntered: // checking mouse  is entered into window or not using MouseEntered function
					 std::cout << "Mouse has been entered into window" << std::endl;
					 break;
				 case sf::Event::MouseLeft: // checking mouse  is left out the window or not using MouseEntered function
					 std::cout << "Mouse has been left out the window" << std::endl;
					 break;
				 */


				 // Tutorial Joystic Event
				 /*
				 case sf::Event::JoystickConnected: // checking joystic is connected or not
					 std::cout << "Joystick has been connected" << std::endl;
					 break;
				 case sf::Event::JoystickDisconnected: // checking joystic is disconnected or not
					 std::cout << "Joystick has been disconnected" << std::endl;
					 break;
				 case sf::Event::JoystickButtonPressed: // checking joystic button is pressed or not
					 std::cout << "Joystick has been pressed" << std::endl;
					 break;
				 case sf::Event::JoystickButtonReleased: // checking joystic button is released or not
					 std::cout << "Joystick has been released" << std::endl;
					 break;
				 case sf::Event::JoystickMoved: // checking joystic is moved or not
					 std::cout << "Joystick has been moved" << std::endl;
					 std::cout << event.joystickMove.position << std::endl; // checking joystick position
					 break;
				 */


				 //Tutorial of Window Events
				 /*
				 case sf::Event::Resized: // resize the window
					 std::cout << event.size.width << " : " << event.size.height << std::endl; // checking the ratio
					 break;
				 case sf::Event::LostFocus: // checking the window is currently running or not
					 std::cout << "Lost focus" << std::endl;
					 break;
				 case sf::Event::GainedFocus: // checking the window is currently running or not
					 std::cout << "Gained focus" << std::endl;
					 break;
				 */


				 // Tutorial of Text Events
				 /*
				 case sf::Event::TextEntered:
					 std::cout << "Text has been entered" << std::endl;
					 if (event.text.unicode == 65)
					 {
						 std::cout << "Capital A has been clicked" << std::endl;
					 }
					 break;
				 */

			}
		}


		// Live keyboard event tutorial
		/*
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) // continious printing after clicking space
		{
			std::cout << "Jump Player" << std::endl;
		}
		*/

		// Live mouse input tutorial
		/*
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			std::cout << "Left mouse button has been fire" << std::endl;
		}
		//std::cout << sf::Mouse::getPosition().x << std::endl; // showing mouse position according to x axis
		std::cout << sf::Mouse::getPosition(window).x << std::endl; // showing the mouse position in according to opened window's x axis
		sf::Mouse::setPosition(sf::Vector2i(40, 50));// mouse positioning repositioned using this function within window
		*/

		// Live Joystick input tutorial
		/*
		if (sf::Joystick::isConnected(0)) // 0 is the specific joystick name and the range is (0-7)
		{
			std::cout << "Joystick is connected" << std::endl;
		}
		std::cout << sf::Joystick::ButtonCount << std::endl; // how many button joystick have that count this function

		if (sf::Joystick::isButtonPressed(0, 1)) // 0 is the joystick number and 1 is the joystick button
		{
			std::cout << "Button 1 being pressed" << std::endl;
		}
		*/


		window.clear();
		window.draw(sprite);// showing the sprite image in the window
		window.display();
	}
}