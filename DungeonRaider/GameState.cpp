#include "GameState.h"

/*
void GameState::getInput(double frameTime)
{
	//GameState::getInput
	// *brief: gets keyStates, mouseState, and mousePosition and passes them to Controller
	// *detail:
	//This function gets all input from the player, whether that be from the keyboard, mouse, 
	//or any joysticks and peripheries that the player might have connected. It then handles
	//all crucial input events, which include pausing/resuming the game, bringing up a debug console,
	//and exiting the game. After handling these events, the function then passes on all
	//non-crucial input events in an array to the PlayerController.

	//get latest window event
	//see if user pressed window exit button
	sf::Event latestWindowEvent;
	while (window.pollEvent(latestWindowEvent)) //snag events from window event queue until none left
	{
		switch (latestWindowEvent.type)
		{
		case sf::Event::Closed:
			close();
			break;
		case sf::Event::LostFocus:
			//todo: pause the game
			break;
		case sf::Event::GainedFocus:
			//todo: resume the game if paused earlier
			break;
		case sf::Event::MouseWheelMoved:
			//todo: do stuff
			break;
		default:
			//do nothing
			break;
		}
	}

	//get mouse position
	sf::Vector2i mouseLocalPos = sf::Mouse::getPosition(window); //position of the mouse relative to the window
	bool leftMousePressed = sf::Mouse::isButtonPressed(sf::Mouse::Left);
	bool rightMousePressed = sf::Mouse::isButtonPressed(sf::Mouse::Right);
	bool middleMousePressed = sf::Mouse::isButtonPressed(sf::Mouse::Middle);


	//
	//
	//todo: pass inputs to the PlayerController
	//
	//
}
*/
