#include<string>

class EuropeanOption {
    private:
        void init();
        void copy();

        double CallPrice() const;
        double PutPrice() const;
        double CallDelta() const;
        double PutDelta() const;

    public:
        double r;
        double sig;
        double k;
        double T;
        double U;
        double b;
        
        string opType;
    public:
    //constructors
        EuropeanOption();
        EuropeanOption(const EuropeanOption& option2);
        EuropeanOption(const string& optionType);

        virtual ~EuropeanOption();

        EuropeanOption& operator = (const EuropeanOption& option2);

        double Price() const;
        double Delta() const;

        void toggle();
};
