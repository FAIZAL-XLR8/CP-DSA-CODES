#include<bits/stdc++.h>
using namespace std;
//SRp means one class will do one work yaani shopping cart will only calculate prices 
class Product{
    public:
    int prod_no;
    double price;
    string name;
    Product(string name, double price, int prod_no) : name(name), price(price), prod_no(prod_no){};
};
class ShoppingCart{
    private:
    vector<Product*> Products;
    public:
    double total_price;
    void add_to_cart(Product* prod)
    {
    Products.push_back(prod);
    }
    vector<Product*> get_prod() 
    {
        return Products;
    }
    double addTotal(ShoppingCart* st)
    {
        double ans = 0.0;
        for(auto ele : st->get_prod()) ans += (ele -> price);
        return ans;
    }
    ~ShoppingCart()
    {
        for (auto prod : Products)
        delete prod;

    }
};
class SaveToDB{
    public :
    ShoppingCart* cart;
    SaveToDB(ShoppingCart* cart) :cart(cart){};
    void save()
    {
        this -> cart = cart;
        cout <<"saved to DB\n";
    }
    ~SaveToDB()
    {
        delete cart;
    }
};
class Invoice{
    public :
    ShoppingCart* cart;
    Invoice(ShoppingCart* cart) : cart(cart){};
    void display()
    {
        for (auto ele : cart->get_prod())
        cout <<"added "<< ele->name <<" and with tag of " << ele -> price << endl;
    }
    ~Invoice(){
        delete cart;
    }
};
int main()
{
    Product a = Product("key", 10.0, 01);
    Product b = Product("value", 20.0, 02);
    ShoppingCart* ct = new ShoppingCart();
    ct -> add_to_cart(&a);
    ct -> add_to_cart(&b);
    Invoice *iv = new Invoice(ct);
    iv ->display();
    SaveToDB *st = new SaveToDB(ct);
    st->save();
    delete ct;
    delete st;
    delete iv;

}