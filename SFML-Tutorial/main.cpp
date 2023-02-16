#include<SFML/Graphics.hpp>
#include<iostream>
int main()
{
	sf::RenderWindow window(sf::VideoMode(1200, 600), "SFML Tutorial"); // making a window
	// Adding a Convex Shape
	sf::ConvexShape shape;
	shape.setPointCount(6);
	shape.setPoint(0, sf::Vector2f(230, 40));
	shape.setPoint(1, sf::Vector2f(220, 50));
	shape.setPoint(2, sf::Vector2f(210, 60));
	shape.setPoint(3, sf::Vector2f(240, 130));
	shape.setPoint(4, sf::Vector2f(250, 120));
	shape.setPoint(5, sf::Vector2f(260, 110));
	//shape.setPoint(6, sf::Vector2f(100, 100));


	// Adding Regular Shape
	/*
	sf::CircleShape polygon(300, 3); // creating triangle, polygon(parameter,shape vertics)
	sf::CircleShape polygon(300, 4); // creating rectangle
	sf::CircleShape polygon(300, 6); // creating hesxagon
	*/


	//Circle Tutorial;
	/*
	sf::CircleShape circle(450);// creating circle shape using diameter as parameter
	circle.setRadius(500); //creating circle shape using radius ae parameter
	circle.setPointCount(1000); // smoothing the edges of the circle using edge points as parameter
	*/


	//RectAngle Tutorial
	/*
	sf::RectangleShape rectangle(sf::Vector2f(600, 400)); // creatiing ractangle shape
	rectangle.setSize(sf::Vector2f(400, 40)); // we can also resize the rectangle shape through the function
	*/


	// Tutorial of adding sprite
	/*
	sf::Texture texture; // creating Texture data type for load image

	//texture.setRepeated(true);   // repeated printing the sprite texture image within the setTextureRect area
	
	if (!texture.loadFromFile("flag.png")) // checking the programe can load the image or not
	{
		std::cout << "Error loading flag texture" << std::endl;
	}

	sf::Sprite sprite(texture); // add the texture image on the sprite to draw
	sprite.setTexture(texture); // you can also add texture image like this

	//sprite.move(sf::Vector2f(40, 50)); // move the sprite image according to axis

	//sprite.setScale(sf::Vector2f(2, 2 )); // scaling the x axis and y axis of the sprite
	
	//sprite.scale(sf::Vector2f(2, 2)); // we can also scaling the x axis and y axis of the sprite through this function

	//sprite.setRotation(45); // rotate the sprite according the perameter of degree

	//sprite.rotate(50); // we can also rotate the sprite through this function

	//std::cout << sprite.getRotation() << std::endl; // we can read the rotation degree from it
	
	//sprite.setOrigin(sf::Vector2f(-600,-300));// set the origin position of the sprite image
	
	//sprite.setPosition(sf::Vector2f(300,300));// set the position of the sprite image

	//sprite.setColor(sf::Color(0, 0, 250,10)); // set color by this function,  the parameter of the Color(RED,GREEN,BLUE,OPACITY) function

	//sprite.setTextureRect(sf::IntRect(0, 0, 600, 600));// rearrange sprite size to show in window or you can say resize the showing windows object

	*/

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
		//window.draw(sprite);// showing the sprite image in the window
		//window.draw(rectangle); // showing the rectangle shape int the window
		//window.draw(circle); // showing the circle shape
		//window.draw(polygon); //showing the polygon
		window.draw(shape); // showing the convex shape
		window.display();
	}
}