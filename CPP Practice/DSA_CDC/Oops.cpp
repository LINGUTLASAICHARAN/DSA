#include <iostream>
using namespace std;
class Binary
{
    string s;
    void checkBin();

public:
    void read();
    void onesComplement();
    void display();
};
void Binary::read()
{
    cout<<"Enter the num"<<endl;
    cin >> s;
}
void Binary::checkBin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '1' && s.at(i) != '0')
        {
            cout << "Entered num is not binary";
            exit(0);
        }
    }
}
void Binary::onesComplement()
{
    checkBin();
    for(int i =0;i<s.length();i++){
        if(s.at(i)== '1') s.at(i) = '0';
        else{
            s.at(i) = '1';
        }
    }
    cout<<"the one's compliment is " <<s<<endl;
}
void Binary::display()
{
    cout <<"The entered num is "<<s<<endl;
}
int main()
{
    Binary num;
    num.read();
    num.display();
    num.onesComplement();
    
    return 0;
}