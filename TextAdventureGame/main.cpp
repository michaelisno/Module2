#include <iostream>

int main()
{
	std::cout << "You reach a fork in the road, do you go:\n\n1 North - To the forest\n";
	std::cout << "2 East - To the mines\n3 South - To the desert\n4 West - To the city\n";

	int firstChoice;
	std::cin >> firstChoice;

	switch (firstChoice)
	{
		case 1:
		{
			
		}
		case 2:
		{

		}
		case 3:
		{

		}
		case 4:
		{
			std::cout << "As you stroll through the alleyways of the city you are attacked by bandits! What do you do?\n\n";
			std::cout << "1 Fight!\n2 Throw a smoke bomb!\n3 Try to negotiate\n4 Flee!\n";

			int secondChoice;
			std::cin >> secondChoice;

			if (secondChoice == 1)
			{
				std::cout << "You're too weak to defeat the bandits, you loose this battle.\n";
			}
			else if (secondChoice == 2)
			{
				std::cout << "You through the bomb, but they chase after, and catch up to you anyway.\n";
			}
			else if (secondChoice == 3)
			{
				std::cout << "You can't talk your way out of this one, your attackers take all your belongings!\n";
			}
			else
			{
				std::cout << "The bandits are faster than you! They catch up to you and end your journey.\n";
			}
			break;
		}
		default:
		{
			std::cout << "That is not a valid path.\n";
			break;
		}
	}

	std::cout << "Game Over.\n";

	return 0;
}