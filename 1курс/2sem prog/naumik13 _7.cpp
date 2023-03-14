#include <iostream>
#include <string>  
#include <map>

using namespace std;

namespace cinema {
	enum Channels {
		None, FirstTime, Reality, HowToCook, AbstractDrawing, TheTruth, Pyramids
	};
	map<Channels, string> ChannelNames{
		{None, "None"},
		{FirstTime, "FirstTime"},
		{Reality, "Reality"},
		{HowToCook, "HowToCook"},
		{AbstractDrawing, "AbstractDrawing"},
		{TheTruth, "TheTruth"},
		{Pyramids, "Pyramids"}
	};
}

class Tuner {
	cinema::Channels current_channel;
public:
	Tuner(cinema::Channels channel) : current_channel(channel) {}
	Tuner() { current_channel = cinema::Channels::None; }
	~Tuner() {}
protected:
	void setChannel(cinema::Channels channel);
	cinema::Channels getCurrentChannel();
	string getCurrentChannelName();
};

class TV {
	bool power;
public:
	TV(bool power) : power(power) {}
	TV() { power = false; }
	~TV() {}
protected:
	void setPower(bool power);
	bool isPower();
};

class Speakers {
	int volume;
public:
	Speakers(int volume) : volume(volume) {}
	Speakers() { volume = 50; }
	~Speakers() {}
protected:
	void setVolume(int volume);
	int getVolume();
};

class Control : protected Tuner, protected TV, protected Speakers{
public:
	Control(cinema::Channels channel, bool power, int volume) : Tuner(channel), TV(power), Speakers(volume) {}
	Control() : Tuner(), TV(), Speakers() {}
	~Control() {}

	void SwitchChannel(cinema::Channels channel);
	void ChangeVolume(int volume);
	void PressPower();

	string toString();
	friend ostream& operator<<(ostream& os, Control control);
};

class Cinema : public Control{
public:
	Cinema(cinema::Channels channel, bool power, int volume) : Control(channel, power, volume) {}
	Cinema() {}
	~Cinema() {}

	friend ostream& operator<<(ostream& os, Cinema cinema);
};



int main() {
	Cinema cinema(cinema::AbstractDrawing, true, 22);
	cout << cinema << endl;
	cinema.ChangeVolume(5);
	cinema.SwitchChannel(cinema::Pyramids);
	cout << cinema << endl;
	cinema.PressPower();
	cout << cinema << endl;
}

void Control::SwitchChannel(cinema::Channels channel)
{
	setChannel(channel);
}

void Control::ChangeVolume(int volume)
{
	setVolume(volume);
}

void Control::PressPower()
{
	setPower(!isPower());
	if (!isPower()) setChannel(cinema::Channels::None);
}

string Control::toString()
{
	string result;
	result += "Channel: " + getCurrentChannelName() + "\n";
	result += "Power: ";
	result += isPower() ? "ON" : "OFF"; 
	result += "\n";
	result += "Volume: " + to_string(getVolume()) + "\n";
	return result;
}

void Speakers::setVolume(int volume)
{
	this->volume = volume;
}

int Speakers::getVolume()
{
	return volume;
}

void TV::setPower(bool power)
{
	this->power = power;
}

bool TV::isPower()
{
	return power;
}

void Tuner::setChannel(cinema::Channels channel)
{
	current_channel = channel;
}

cinema::Channels Tuner::getCurrentChannel()
{
	return current_channel;
}

string Tuner::getCurrentChannelName()
{
	return cinema::ChannelNames[current_channel];
}

ostream& operator<<(ostream& os, Control control)
{
	os << control.toString();

	return os;
}

ostream& operator<<(ostream& os, Cinema cinema)
{
	os << cinema.toString();;
	
	return os;
}
