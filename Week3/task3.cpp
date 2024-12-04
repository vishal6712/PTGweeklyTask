#include<iostream>
#include<queue>
#include <cstdlib>
#include <ctime>
using namespace std;

enum EventType
{
    Tap,
    Swipe
};

class Event
{
public:
    EventType eventType;
    int x;
    int y;
    time_t timestamp;

    Event(EventType type, int xPos, int yPos)
    {
        eventType = type;
        x = xPos;
        y = yPos;
        //timestamp(time(nullptr))
    }
};
class EventProcessor
{
    queue<Event> eventQueue;
public:
    void addEvents(const Event& event)
    {
        eventQueue.push(event);
    }

    void processEvent()
    {
        while (!eventQueue.empty())
        {
            Event event = eventQueue.front();
            eventQueue.pop();
            handleEvent(event);
        }
    }

    void handleEvent(const Event& event)
    {
        if (event.eventType == Tap) {
            cout << "Tap detected at position (" << event.x << ", " << event.y << ")\n";
        }
        else if (event.eventType == Swipe) {
            string direction;
            if (event.x > 0 && event.y == 0) direction = "Right";
            else if (event.x < 0 && event.y == 0) direction = "Left";
            else if (event.y > 0 && event.x == 0) direction = "Down";
            else if (event.y < 0 && event.x == 0) direction = "Up";
            else if (event.x > 0 && event.y > 0) direction = "Down Right";
            else if (event.x < 0 && event.y > 0) direction = "Down Left";
            else if (event.x > 0 && event.y < 0) direction = "Up Right";
            else if (event.x < 0 && event.y < 0) direction = "Up Left";
            cout << "Swipe detected in direction: " << direction << "\n";
        }
    }
};
Event generateRandomeEvent()
{
    EventType type = static_cast<EventType>(rand() % 2); //only 0 or 1
    int x = rand() % 21 - 10; //between -10 to 10
    int y = rand() % 21 - 10;
    return Event(type, x, y);//passing to constructor
}
int main()
{
    srand(static_cast<unsigned>(time(0))); // Seed for random number generation

    EventProcessor processor;

    for (int i = 0; i < 10; i++)
    {
        Event event = generateRandomeEvent();
        processor.addEvents(event);
    }
    processor.processEvent();
}
