#include <iostream>

class Tier
{
public:
    float _gewicht;
    int _beine;
public:
    virtual ~Tier() { std::cout << "~Tier\n"; }

    virtual void Sprechen() { std::cout << "Tier::Sprechen()\n"; }
protected:
    int _alter;
};

class Hund : public Tier
{
public:
    ~Hund() { std::cout << "~Hund\n"; }

    void Sprechen() override { std::cout << "Hund::Sprechen()\n"; }

    void SetAlter(int alter)
    {
        _alter = alter;
    }
};

int main(int argc, const char *argv[])
{
    Hund* h = new Hund();
    h->_gewicht;
    h->_beine;
    h->SetAlter(20);

    h->Sprechen();

    delete h;

    return 0;
}