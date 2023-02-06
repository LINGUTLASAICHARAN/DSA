#include <iostream>
using namespace std;
class shop
{
    int itemId[100];
    int itemCost[100];
    int counter;

public:
    void intitcounter(void)
    {
        counter = 0;
    }
    void dispPrice(void);
    void setPrice(void);
};
void shop ::setPrice(void)
{
    cout << "Enter the id of item number " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter the item price" << endl;
    cin >> itemCost[counter];
    counter++;
}
void shop::dispPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of the item with id " << itemId[i] << " is " << itemCost[i] << endl;
    }
}
int main()
{
    int total;
    cout << "Enter the number of items in you shop max of 100" << endl;
    cin >> total;
    shop shop_1;
    shop_1.intitcounter();
    for (int i = 0; i < total; i++)
    {
        shop_1.setPrice();
    }
    shop_1.dispPrice();

    return 0;
}