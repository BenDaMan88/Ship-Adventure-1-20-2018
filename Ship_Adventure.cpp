#include <iostream>
#include <ctime> 
#include <cstdlib> 

using namespace std; 

/***************************************************** 
** Program: Ship_Adventure_exe 
** Author: Ben Johnson 
** Date: 20 January 2018 
** Description: A text based adventure game with
**	over 20 different endings. The game is about
**	an asdventurer exploring the new world and
**	discvering new life. There is also
**	randomized elements.
** Input: User input in the form of numbers that 
**	represent the users chosen path.
** Output: Prompts that explain what is happening in
**	the adventure and prompts that tells the 
**	user what to input.
******************************************************/
int main(){

	//declaring variables
	int choice_1;
	int choice_2;
	int random_1;
	int random_2;
	int path = 0;

	bool jungle = false;
	bool mountains = false;
	bool plains = false;
	bool swamp = false;
	bool desert = false;
	bool rain_forest = false;

	srand(time(NULL)); 

	//initial prompt to user with title
	cout << "\n";
	cout << "***********************************************************" << endl;
	cout << "                The Mayflower Exploration" << endl; 
	cout << "                      By Ben Johnson" << endl;
	cout << "***********************************************************" << endl;
	cout << "\n";

	cout << "You are an english explorer on the Mayflower in the middle \n" 
	     <<	"of the 1600's traveling across the Atlantic Ocean looking \n"
	     <<	"for a place to explore. You can go to North America, South \n"
	     <<	"America or the Carribean. \n\n"
   	     <<	"Enter 1 to go to North America, 2 to go to South America  \n"
	     <<	"or 3 to go to the Carribean: ";
	cin >> choice_1;
	cout << "\n";

	//choice 1
	if(choice_1 == 1)
	{
		//North America
		cout << "You went to North America!" << endl;
		cout << "\n";

		random_1 = rand() % 2;

		//random 1
		if(random_1 == 0)
		{
			//Uninhabited Area
			cout << "It looks like that by random chance the place you \n"
			     << "landed at in North America is uninhabited." << endl;	
			cout << "\n";

			cout << "Would you like to explore the Plains or Swamp?" << endl;
			cout << "\n";

			cout << "Enter 1 to explore the plains or enter 2 to \n"
			     << "explore the swamp: ";
			cin >> choice_2;
			cout << "\n";
		
			//choice 2
			if(choice_2 == 1)
			{
				//Plains
				cout << "You explore the Plains!" << endl;
				cout << "\n";

				plains = true;
				path = 1;
			}
			else
			{
				//Swamp
				cout << "You explore the Swamp!" << endl;
				cout << "\n";

				swamp = true;
				path = 2;
			}

		}
		else
		{
			//Find Native Americans
			cout << "It looks like that by random chance the place you \n"
			     << "landed at in North America is inhabited by a \n"
			     << "native american tribe." << endl;	
			cout << "\n";

			cout << "Would you like to befriend the native american \n" 
			     << "tribe or not?" << endl;
			cout << "\n";

			cout << "Enter 1 to befriend the tribe or enter 2 to \n"
			     << "be mean to them: ";
			cin >> choice_2;
			cout << "\n";
		
			//choice 2
			if(choice_2 == 1)
			{
				//Befriend them
				cout << "You befriended the native american tribe!" << endl;
				cout << "\n";

				path = 3;
			}
			else
			{
				//Be mean to them
				cout << "You were mean to the native american tribe!" << endl;
				cout << "\n";

				path = 4;
			}
	
		}

	}
	else if(choice_1 == 2)
	{
		//South America
		cout << "You went to South America!" << endl;
		cout << "\n";
		
		random_1 = rand() % 2;

		//random 1
		if(random_1 == 0)
		{
			//Uninhabited Area
			cout << "It looks like that by random chance the place you \n"
			     << "landed at in South America is uninhabited." << endl;	
			cout << "\n";

			cout << "Would you like to explore the Desert or Rain Forest?" << endl;
			cout << "\n";

			cout << "Enter 1 to explore the desert or enter 2 to \n"
			     << "explore the rain forest: ";
			cin >> choice_2;
			cout << "\n";
		
			//choice 2
			if(choice_2 == 1)
			{
				//Desert
				cout << "You explore the Desert!" << endl;
				cout << "\n";

				desert = true;
				path = 5;
			}
			else
			{
				//Rain Forest
				cout << "You explore the Rain Forest!" << endl;
				cout << "\n";

				rain_forest = true;
				path = 6;
			}
		}
		else
		{
			//Find Aztec Civilization
			cout << "It looks like that by random chance the place you \n"
			     << "landed at in South America is inhabited by an \n"
			     << "ancient Aztec Civiliazation." << endl;	
			cout << "\n";

			cout << "Would you like to befriend the aztec civilzation \n" 
			     << "or not?" << endl;
			cout << "\n";

			cout << "Enter 1 to befriend the aztecs or enter 2 to \n"
			     << "be mean to them: ";
			cin >> choice_2;
			cout << "\n";
		
			//choice 2
			if(choice_2 == 1)
			{
				//Befriend them
				cout << "You befriended the aztec civilization!" << endl;
				cout << "\n";

				path = 7;
			}
			else
			{
				//Be mean to them
				cout << "You were mean to the aztec civilization!" << endl;
				cout << "\n";

				path = 8;
			}
	
		}

	}
	else
	{
		//The Carribean
		cout << "You went to the Carribean!" << endl;
		cout << "\n";

		random_1 = rand() % 2;

		//random 1
		if(random_1 == 0)
		{
			//Didn't find a new island, go to Tortuga
			cout << "It looks like that after searching the Carribean for a \n"
			     << "while by random chance you didn't find any new island so \n"
			     << "you decide to go to Tortuga, a well known ship port. \n"
			     << "While at Tortuga you meet a fellow explorer named John Smith\n"
			     << "who wants to explore the rest of the island." << endl;	
			cout << "\n";

			cout << "Would you like to befriend John Smith and explore with \n" 
			     << "him or be mean to him and explore on your own?" << endl;
			cout << "\n";

			cout << "Enter 1 to befriend and go with John Smith or enter 2 to \n"
			     << "be mean to John and explore alone: ";
			cin >> choice_2;
			cout << "\n";
		
			//choice 2
			if(choice_2 == 1)
			{
				//Befriend them
				cout << "You befriended and went with John Smith!" << endl;
				cout << "\n";

				path = 9;
			}
			else
			{
				//Be mean to them
				cout << "You were mean to John Smith and explored the island \n"
				     << "on your own!" << endl;
				cout << "\n";

				path = 10;
			}

		}
		else
		{
			//Find new island
			cout << "It looks like that by random chance you discovered a \n"
			     << "new island in the Carribean with both a jungle and \n" 
			     << "mountainous habitat!" << endl;	
			cout << "\n";

			cout << "Would you like to explore the Jungle or the Mountains?" << endl;
			cout << "\n";

			cout << "Enter 1 to explore the jungle or enter 2 to \n"
			     << "explore the mountains: ";
			cin >> choice_2;
			cout << "\n";
		
			//choice 2
			if(choice_2 == 1)
			{
				//Jungle
				cout << "You explore the jungle!" << endl;
				cout << "\n";

				jungle = true;
				path = 11;
			}
			else
			{
				//Moutains
				cout << "You explore the mountains!" << endl;
				cout << "\n";

				mountains = true;
				path = 12;
			}

		}

	}

	//main switch statment for the final path (ending)	
	switch(path)
	{
		case(1):
		{
			//North America - Plains
			random_2 = rand() % 4;
			
			if(random_2 == 0)
			{
				//Buffalo
				cout << "While exploring the plains of North America you randomly \n"
				     << "happen to find a new speices of native buffalo. You like \n"
				     << "the buffalo so much that you decide to bring the buffalo \n"
				     << "with you back home to England as your pet and live happliy \n"
				     << "ever after. \n";
				cout << "\n";
				cout << "The End" << endl;
				cout << "\n";
			}
			else if(random_2 == 1)
			{
				//Owl
				cout << "While exploring the plains of North America you randomly \n"
				     << "happen to find a new speices of native owl. You like the \n"
				     << "owl so much that you decide to bring the owl with you  \n"
				     << "back home to England as your pet and live happliy ever \n"
				     << "after. \n";
				cout << "\n";
				cout << "The End" << endl;
				cout << "\n";
			}
			else if(random_2 == 2)
			{
				//Bobcat
				cout << "While exploring the plains of North America you randomly \n"
				     << "happen to find a new speices of native bobcat. You like \n"
				     << "the bobcat so much that you decide to bring the bobcat \n"
				     << "with you back home to England as your pet and live happliy \n"
				     << "ever after. \n";
				cout << "\n";
				cout << "The End" << endl;
				cout << "\n";
			}
			else
			{
				//Prarie Dog
				cout << "While exploring the plains of North America you randomly \n"
				     << "happen to find a new speices of native prarie dog. You like \n"
				     << "the prarie dog so much that you decide to bring the prarie dog \n"
				     << "with you back home to England as your pet and live happliy \n"
				     << "ever after. \n";
				cout << "\n";
				cout << "The End" << endl;
				cout << "\n";
			}
			
			break;
		}
		case(2):
		{
			//North America - Swamp
			random_2 = rand() % 4;
			
			if(random_2 == 0)
			{
				//Alligator
				cout << "While exploring the swamps of North America you randomly \n"
				     << "happen to find a new speices of native alligator. You like \n"
				     << "the alligator so much that you decide to bring the alligator \n"
				     << "with you back home to England as your pet and live happliy \n"
				     << "ever after. \n";
				cout << "\n";
				cout << "The End" << endl;
				cout << "\n";
			}
			else if(random_2 == 1)
			{
				//Turtle
				cout << "While exploring the swamps of North America you randomly \n"
				     << "happen to find a new speices of native turtle. You like the \n"
				     << "turtle so much that you decide to bring the turtle with you  \n"
				     << "back home to England as your pet and live happliy ever \n"
				     << "after. \n";
				cout << "\n";
				cout << "The End" << endl;
				cout << "\n";
			}
			else if(random_2 == 2)
			{
				//Frog
				cout << "While exploring the swamps of North America you randomly \n"
				     << "happen to find a new speices of native frog. You like \n"
				     << "the frog so much that you decide to bring the frog \n"
				     << "with you back home to England as your pet and live happliy \n"
				     << "ever after. \n";
				cout << "\n";
				cout << "The End" << endl;
				cout << "\n";
			}
			else
			{
				//Beaver
				cout << "While exploring the swamps of North America you randomly \n"
				     << "happen to find a new speices of native beaver. You like \n"
				     << "the beaver so much that you decide to bring the beaver \n"
				     << "with you back home to England as your pet and live happliy \n"
				     << "ever after. \n";
				cout << "\n";
				cout << "The End" << endl;
				cout << "\n";
			}

			break;

		}
		case(3):
		{
			//North America - Befriend Natives
			cout << "Because you are friends with the native tribe they decide \n"
			     << "to help you make a home and find food. After a while you \n"
			     << "decide to stay here, settle down, have a family, and live \n"
			     << "happily ever after. \n";
			cout << "\n";
			cout << "The End" << endl;
			cout << "\n";

			break; 
		}
		case(4):
		{
			//North America - Be mean to natives
			cout << "Because you were mean to the native tribe they decide \n"
			     <<	"to not help you and you have trouble finding food and \n"
			     << "making a home. You eventually run out of supplies and \n"
			     << "are forced to go back home to England with nothing. \n";
			cout << "\n";
			cout << "The End" << endl;
			cout << "\n";

			break; 
		}
		case(5):
		{
			//South America - Desert
			random_2 = rand() % 4;
			
			if(random_2 == 0)
			{
				//Snake
				cout << "While exploring the deserts of South America you randomly \n"
				     << "happen to find a new speices of native snake. You like \n"
				     << "the snake so much that you decide to bring the snake \n"
				     << "with you back home to England as your pet and live happliy \n"
				     << "ever after. \n";
				cout << "\n";
				cout << "The End" << endl;
				cout << "\n";
			}
			else if(random_2 == 1)
			{
				//Armidillo
				cout << "While exploring the deserts of South America you randomly \n"
				     << "happen to find a new speices of native arimdillo. You like the \n"
				     << "armidillo so much that you decide to bring the armidillo \n"
				     << "with you back home to England as your pet and live happliy ever \n"
				     << "after. \n";
				cout << "\n";
				cout << "The End" << endl;
				cout << "\n";
			}
			else if(random_2 == 2)
			{
				//Meerkat
				cout << "While exploring the deserts of South America you randomly \n"
				     << "happen to find a new speices of native meerkat. You like \n"
				     << "the meerkat so much that you decide to bring the meerkat \n"
				     << "with you back home to England as your pet and live happliy \n"
				     << "ever after. \n";
				cout << "\n";
				cout << "The End" << endl;
				cout << "\n";
			}
			else
			{
				//Zebra
				cout << "While exploring the deserts of South America you randomly \n"
				     << "happen to find a new speices of native zebra. You like \n"
				     << "the zebra so much that you decide to bring the zebra \n"
				     << "with you back home to England as your pet and live happliy \n"
				     << "ever after. \n";
				cout << "\n";
				cout << "The End" << endl;
				cout << "\n";
			}
			
			break;
		}
		case(6):
		{
			//South America - Rain Forest
			random_2 = rand() % 4;
			
			if(random_2 == 0)
			{
				//Parrot
				cout << "While exploring the rain forests of South America you randomly \n"
				     << "happen to find a new speices of native parrot. You like \n"
				     << "the parrot so much that you decide to bring the parrot \n"
				     << "with you back home to England as your pet and live happliy \n"
				     << "ever after. \n";
				cout << "\n";
				cout << "The End" << endl;
				cout << "\n";
			}
			else if(random_2 == 1)
			{
				//Sloth
				cout << "While exploring the rain forests of South America you randomly \n"
				     << "happen to find a new speices of native sloth. You like the \n"
				     << "sloth so much that you decide to bring the sloth with you  \n"
				     << "back home to England as your pet and live happliy ever \n"
				     << "after. \n";
				cout << "\n";
				cout << "The End" << endl;
				cout << "\n";
			}
			else if(random_2 == 2)
			{
				//Occelot
				cout << "While exploring the rain forests of South America you randomly \n"
				     << "happen to find a new speices of native occelot. You like \n"
				     << "the occelot so much that you decide to bring the occelot \n"
				     << "with you back home to England as your pet and live happliy \n"
				     << "ever after. \n";
				cout << "\n";
				cout << "The End" << endl;
				cout << "\n";
			}
			else
			{
				//Tiger
				cout << "While exploring the rain forests of South America you randomly \n"
				     << "happen to find a new speices of native tiger. You like \n"
				     << "the tiger so much that you decide to bring the tiger \n"
				     << "with you back home to England as your pet and live happliy \n"
				     << "ever after. \n";
				cout << "\n";
				cout << "The End" << endl;
				cout << "\n";
			}

			break;

		}
		case(7):
		{
			//South America - Befriend Natives
			cout << "Because you are friends with the native aztecs they decide \n"
			     << "to help you make a home and find food. After a while you \n"
			     << "decide to stay here, settle down, have a family, and live \n"
			     << "happily ever after. \n";
			cout << "\n";
			cout << "The End" << endl;
			cout << "\n";

			break; 
		}
		case(8):
		{
			//South America - Be mean to natives
			cout << "Because you were mean to the native aztecs they decide \n"
			     <<	"to not help you and you have trouble finding food and \n"
			     << "making a home. You eventually run out of supplies and \n"
			     << "are forced to go back home to England with nothing. \n";
			cout << "\n";
			cout << "The End" << endl;
			cout << "\n";

			break; 
		}
		case(9):
		{
			//Carribean - Befriend John Smith
			cout << "Because you are friends with John Smith and went exploring \n"
			     << "together you are able to explore long enough to find a new \n"
			     << "species of plant named aloe vera that helps cure burns and \n"
			     << "skin infections. You and John Smith bring this plant back \n"
			     << "to England, patent it, make a lot of money selling the \n"
			     << "antidote and live happily ever after. \n";
			cout << "\n";
			cout << "The End" << endl;
			cout << "\n";

			break; 
		}
		case(10):
		{
			//Carribean - Be mean to John Smith
			cout << "Because you were mean to John Smith and didn't go with \n"
			     <<	"him you explore the island alone but shortly run out of \n"
			     << "supplies and are forced to go back home to England \n"
			     << "having found nothing. \n";
			cout << "\n";
			cout << "The End" << endl;
			cout << "\n";

			break; 
		}
		case(11):
		{
			//Carribean - Jungle
			random_2 = rand() % 4;
			
			if(random_2 == 0)
			{
				//Monkey
				cout << "While exploring the jungles of Tortuga you randomly \n"
				     << "happen to find a new speices of native monkey. You like \n"
				     << "the monkey so much that you decide to bring the monkey \n"
				     << "with you back home to England as your pet and live happliy \n"
				     << "ever after. \n";
				cout << "\n";
				cout << "The End" << endl;
				cout << "\n";
			}
			else if(random_2 == 1)
			{
				//Jaguar
				cout << "While exploring the jungles of Tortuga you randomly \n"
				     << "happen to find a new speices of native jaguar. You like the \n"
				     << "jaguar so much that you decide to bring the jaguar \n"
				     << "with you back home to England as your pet and live happliy ever \n"
				     << "after. \n";
				cout << "\n";
				cout << "The End" << endl;
				cout << "\n";
			}
			else if(random_2 == 2)
			{
				//Lizard
				cout << "While exploring the jungles of Tortuga you randomly \n"
				     << "happen to find a new speices of native lizard. You like \n"
				     << "the lizard so much that you decide to bring the lizard \n"
				     << "with you back home to England as your pet and live happliy \n"
				     << "ever after. \n";
				cout << "\n";
				cout << "The End" << endl;
				cout << "\n";
			}
			else
			{
				//Gecko
				cout << "While exploring the jungles of Tortuga you randomly \n"
				     << "happen to find a new speices of native gecko. You like \n"
				     << "the gecko so much that you decide to bring the gecko \n"
				     << "with you back home to England as your pet and live happliy \n"
				     << "ever after. \n";
				cout << "\n";
				cout << "The End" << endl;
				cout << "\n";
			}
			
			break;
		}
		case(12):
		{
			//Carribean - Mountains
			random_2 = rand() % 4;
			
			if(random_2 == 0)
			{
				//Goat
				cout << "While exploring the mountains of Tortuga you randomly \n"
				     << "happen to find a new speices of native goat. You like \n"
				     << "the goat so much that you decide to bring the goat \n"
				     << "with you back home to England as your pet and live happliy \n"
				     << "ever after. \n";
				cout << "\n";
				cout << "The End" << endl;
				cout << "\n";
			}
			else if(random_2 == 1)
			{
				//Deer
				cout << "While exploring the mountains of Tortuga you randomly \n"
				     << "happen to find a new speices of native deer. You like the \n"
				     << "deer so much that you decide to bring the deer with you  \n"
				     << "back home to England as your pet and live happliy ever \n"
				     << "after. \n";
				cout << "\n";
				cout << "The End" << endl;
				cout << "\n";
			}
			else if(random_2 == 2)
			{
				//Coyote
				cout << "While exploring the mountains of Tortuga you randomly \n"
				     << "happen to find a new speices of native coyote. You like \n"
				     << "the coyote so much that you decide to bring the coyote \n"
				     << "with you back home to England as your pet and live happliy \n"
				     << "ever after. \n";
				cout << "\n";
				cout << "The End" << endl;
				cout << "\n";
			}
			else
			{
				//Bear
				cout << "While exploring the mountians of Tortuga you randomly \n"
				     << "happen to find a new speices of native bear. You like \n"
				     << "the bear so much that you decide to bring the bear \n"
				     << "with you back home to England as your pet and live happliy \n"
				     << "ever after. \n";
				cout << "\n";
				cout << "The End" << endl;
				cout << "\n";
			}

			break;

		}
		default:
		{
			cout  << "There seems to have been an error, " 
			      << "the game will end now." << endl;
		}
	}	

	cout << "***********************************************************" << endl;
	cout << "\n";

	return 0;

}
