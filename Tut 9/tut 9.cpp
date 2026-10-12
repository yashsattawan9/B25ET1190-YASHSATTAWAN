#include <iostream>
using namespace std;

class Notification
{
public:
    virtual void notify()
    {
        cout << "General Notification" << endl;
    }
};

class AppNotification : public Notification
{
public:
    void notify() override
    {
        cout << "App Notification: You have a new app update."
             << endl;
    }
};

class EmailNotification : public Notification
{
public:
    void notify() override
    {
        cout << "Email Notification: You have received a new email."
             << endl;
    }
};

class SMSNotification : public Notification
{
public:
    void notify() override
    {
        cout << "SMS Notification: You have received a new message."
             << endl;
    }
};

int main()
{
    AppNotification app;
    EmailNotification email;
    SMSNotification sms;

    Notification *n;

    n = &app;
    n->notify();

    n = &email;
    n->notify();

    n = &sms;
    n->notify();

    return 0;
}
