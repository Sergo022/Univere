//реалізація дружньої функції


/*#include <iostream>
using namespace std;

using namespace std;

class Humidity;

class Temperature
{
private:
    int m_temp;
public:
    Temperature(int temp = 0) { m_temp = temp; }

    friend void outWeather(const Temperature& temperature, const Humidity& humidity);
};

class Humidity
{
private:
    int m_humidity;
public:
    Humidity(int humidity = 0) { m_humidity = humidity; }

    friend void outWeather(const Temperature& temperature, const Humidity& humidity);
};

void outWeather(const Temperature& temperature, const Humidity& humidity)
{
    cout << "The temperature is " << temperature.m_temp <<
        " and the humidity is " << humidity.m_humidity << '\n';
}

int main()
{
    Temperature temp(15);
    Humidity hum(11);
    outWeather(temp, hum);

    return 0;
}*/




//реалізація дружньго  класу


/*#include <iostream>
 using namespace std;
class Values
{
private:
    int m_intValue;
    double m_dValue;
public:
    Values(int intValue, double dValue)
    {
        m_intValue = intValue;
        m_dValue = dValue;
    }
 
    friend class Display;
};
 
class Display
{
private:
    bool m_displayIntFirst;
 
public:
    Display(bool displayIntFirst) { m_displayIntFirst = displayIntFirst; }
 
    void displayItem(Values &value)
    {
            cout << value.m_intValue << " " << value.m_dValue << '\n';
    }
};
 
int main()
{
    Values value(7, 8.4);
    Display display(false);
 
    display.displayItem(value);
 
    return 0;
}*/



//реалізація дружнього методу 


/*#include <iostream>
 using namespace std;
class Values; 
 
class Display
{
private:
	bool m_displayIntFirst;
 
public:
	Display(bool displayIntFirst) { m_displayIntFirst = displayIntFirst; }
	
	void displayItem(Values &value);
};
 
class Values 
{
private:
	int m_intValue;
	double m_dValue;
public:
	Values(int intValue, double dValue)
	{
		m_intValue = intValue;
		m_dValue = dValue;
	}
 
	friend void Display::displayItem(Values& value);
};
 
void Display::displayItem(Values &value)
{
		cout << value.m_intValue << " " << value.m_dValue << '\n';
}
 
int main()
{
    Values value(7, 8.4);
    Display display(false);
 
    display.displayItem(value);
 
    return 0;
}*/