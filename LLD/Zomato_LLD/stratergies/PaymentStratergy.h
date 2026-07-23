#ifndef PAYMENT_STRATERGY_H
#define PAYMENT_STRATERGY_H

class PaymentStratergy {
public:
    virtual void pay(double total) = 0;
    virtual ~PaymentStratergy() = default;
};

#endif // PAYMENT_STRATERGY_H