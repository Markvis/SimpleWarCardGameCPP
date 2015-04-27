class card
{
	int pip;
	char suit;
public:
	card(int a = 0, char b = 'C'){pip = a; suit = b;}
	int higher();
	void setcard(int, char);
	int getpip(){return pip;}
	char getsuit(){return suit;}
};
class deck
{
	card c[52];
	int d[52];
public:
	deck();
	void resetdeck();
	card dealacard();
};