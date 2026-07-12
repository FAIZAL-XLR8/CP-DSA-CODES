    #include<iostream>

    using namespace std;
    //invariant is synonym of rules
    // Class Invariant of a parent class Object should not be broken by child class Object.
    // Hence child class can either maintain or strengthen the invariant but never narrows it down.
    // subclass must maintain or strengthen the parent's invariants — it must never weaken or remove them.
    //Invariant : Balance cannot be negative --> so child class should also implement the rule of parent class
    class BankAccount {
    protected:
        double balance;
    public:
        BankAccount(double b) {
            try{
            if (b < 0) throw invalid_argument("Balance can't be negative");
            balance = b;
            }
            catch(const invalid_argument& err)
            {
                cout << err.what() << endl;
            }
        }
        virtual void withdraw(double amount) { 
            if (balance - amount < 0) throw runtime_error("Insufficient funds");
            balance -= amount;
            cout<< "Amount withdrawn. Remaining balance is " << balance << endl;
        }
    };

    //Brakes invariant : Should not be allowed.
    class CheatAccount : public BankAccount {
    public:
        CheatAccount(double b) : BankAccount(b) {}

        void withdraw(double amount) override {
            this->balance -= amount; // LSP break! Negative balance allowed //balance can never be negative but child class allws it without check
            cout<< "Amount withdrawn. Remaining balance is " << balance << endl;
        }
    };
    class Client{

        private : 
        BankAccount* ptr;
        public :
        Client (BankAccount* ptr) : ptr(ptr){
            cout <<"contsructor called \n";
        } // this is supposed to be constructor
        void execute()
        {
        ptr ->withdraw(100);
        }

    };

    int main() {
        CheatAccount* ct = new CheatAccount(20);
        Client* cl = new Client(ct);
        cl->execute();
        BankAccount* bankAccount = new BankAccount(-100);
        bankAccount->withdraw(100);
    }
        
