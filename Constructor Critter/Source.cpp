#include <iostream>
using namespace std;
class Critter
{
public:
	int m_Hunger;
	Critter(int hunger = 0);
	void Greed();
};
Critter::Critter(int hunger)
{
	cout << "A new critter has been born!" << endl;
	m_Hunger = hunger;
}
void Critter::Greed()
{
	cout << "Hi, I'm a critter. My hunger level is " << m_Hunger << ".\n\n";
}
int main()
{
	Critter crit(7);
	crit.Greed();
	return 0;
}