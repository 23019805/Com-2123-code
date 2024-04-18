#include <iostream>
#include <string>
using namespace std;

int
main ()
{
  int Age, Gender;
  cout <<
	"Welcome to Nextdoor Single and mingle, here we are going to hook you up with a date please choose options available to you coz We got you xoxo!!!";
  cout << "\n Please Enter your Age:";
  std::cin >> Age;
  if (Age > 17)
	{

	  cout << "\n What is your Gender?\n1.Male \n2.Female";
	std:cin >> Gender;
	  if (Gender == 1)
		{
		  int Color, bodyType, worth, height, group;
		  cout << "\n What is your Montly Income?";
		  cin >> worth;
		  cout <<
			"\n What is your skin color preferance? \n1.Light Skin \n2.Brown Skin \n3.Dark Skin";
		  std::cin >> Color;
		  cout <<
			"\n What is your body type preferance? \n1.Slender \n2.Thick \n3.Chubby(BBW)";
		  std::cin >> bodyType;
		  cout <<
			"\n What your prefered height? \n1.Short \n2.Avarage \n2.Tall";
		  cout <<
			"\n What is your prefered age group? 1. 18-25 2. \n24-30 3. \n30-40 4. \n40+";
		  if (worth > 5000)
			{
			  cout << "\nChances on finding a date are greater than 60%";
			  cout <<
				"\n Horray!!! there are 126 girls that meet your criteria, we will send you a catalog";


			}
		  else
			{
			  cout << "\nChances on finding a date are less than 30%";
			  cout <<
				"\n Congrats there are 3 girls that meet your criteria we will send you a catalog";
			}

		}
	  if (Gender == 2)
		{
		  int money, Skin, beaty, age, height;
		  cout <<
			"\nHow much is your prefered man has to earn? \n1. 5 000+\n2. 10 000+ \n3. 50 000+";
		  cin >> money;
		  cout <<
			"\nWhat skin color is your prefered man? \n1. Dark skin \n2. Brown Skin \n3. Light Skin";
		  cin >> Skin;
		  cout <<
			"\nHow Tall is your prefered man?? \n1. Short \n2.Medium \n3. Tall";
		  cin >> height;
		  if (money == 1)
			{
			  cout <<
				"\nThere about 233 males that meet your criteria \nwe will send you the catalog";

			}
		  if (money == 2)
			{
			  cout <<
				"\nThere about 76 males that meet your criteria \nwe will send you the catalog";
			}
		  if (money == 3)
			{
			  cout <<
				"\nThere about 7 male that meet your criteria \nwe will send you the catalog";
			  cout << "\nBut first rate your beaty level from 1-10:";
			  cin >> beaty;
			  if (beaty < 7)
				{
				  cout << "\nReally? Goody luck";
				}
			}


		}
	}
  else
	{
	  cout << "You are a Minor!!!....Goodbye";
	}
  return 0;
}
