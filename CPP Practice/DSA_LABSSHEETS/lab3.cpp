#include <bits/stdc++.h>
using namespace std;
// template <class T>
// class C;-----This is the way to forward declare a templated class---------
template <class T>
class List
{
private:
    int length, cursorPosition = -1, numberOfElements = 0;
    vector<T> array;

public:
    List();

public:
    List(int listSize);
    void insert(const T &newDataItem);
    void remove();
    void replace(const T &newDataItem);
    void clear();
    bool isEmpty();
    bool isFull();
    void gotoBeginning();
    void gotoEnd();
    bool gotoNext();
    bool gotoPrior();
    T getCursor();
    void showStructure();
    void uniqueify();

   
};
template<>
void List<int>::uniqueify(){
while (true)
{
    int temp = getCursor();
    if(!gotoPrior()) break;
    if(temp == getCursor()) { replace(temp -1 );}
}



}

template <class T>
List<T>::List(int i)
{
    array.resize(i);
    length = i;
}
template <typename DataType>
void List<DataType>::insert(const DataType &newDataItem)
{
    // shifting all the necessary elements to the right
    for (int i = numberOfElements - 1; i > cursorPosition; i--)
    {
        array[i + 1] = array[i];
    }

    array[cursorPosition + 1] = newDataItem;
    cursorPosition++;
    numberOfElements++;
}
template <typename DataType>
void List<DataType>::remove()
{
    // shifting required elements to the left
    for (int i = cursorPosition; i < numberOfElements - 1; i++)
    {
        array[i] = array[i + 1];
    }

    if (cursorPosition == numberOfElements - 1)
    {
        cursorPosition--;
    }
    else
    {
        cursorPosition++;
    }
    numberOfElements--;
}

template <typename DataType>
void List<DataType>::replace(const DataType &newDataItem)
{
    array[cursorPosition] = newDataItem;
}

template <typename DataType>
void List<DataType>::clear()
{
    // easy way to clear vectors in C++
    array.clear();

    // however, this sets the size to 0, so we reset the size
    array.resize(length);
}

template <typename DataType>
bool List<DataType>::isEmpty()
{
    return numberOfElements == 0;
}

template <typename DataType>
bool List<DataType>::isFull()
{
    return numberOfElements == length;
}

template <typename DataType>
void List<DataType>::gotoBeginning()
{
    cursorPosition = 0;
}

template <typename DataType>
void List<DataType>::gotoEnd()
{
    cursorPosition = numberOfElements - 1;
}

template <typename DataType>
bool List<DataType>::gotoNext()
{
    if (cursorPosition == numberOfElements - 1)
    {
        return false;
    }

    else
    {
        cursorPosition++;
        return true;
    }
}

template <typename DataType>
bool List<DataType>::gotoPrior()
{
    if (cursorPosition == 0)
    {
        return false;
    }

    else
    {
        cursorPosition--;
        return true;
    }
}

template <typename DataType>
DataType List<DataType>::getCursor()
{
    return array[cursorPosition];
}

template <typename DataType>
void List<DataType>::showStructure()
{
    if (numberOfElements == 0)
    {
        std::cout << "Empty List\n";
        return;
    }

    else
    {
        // note that this only works for data types compatible with std::cout
        std::cout << "The number of elements in the list is " << numberOfElements << std::endl;
        for (int i = 0; i < numberOfElements; i++)
        {
            std::cout << array[i] << std::endl;
        }
    }
}

template <typename T>
vector<T> merge(List<T> &l1, List<T> &l2)
{ // Task-1
    bool check = false;
    vector<T> result;
    l1.gotoBeginning();
    l2.gotoBeginning();
    while (true)
    {
        if (l1.getCursor() < l2.getCursor())
        {
            result.push_back(l1.getCursor());

            if (!l1.gotoNext())
            {
                check = true;
                break;
            }
        }
        else
        {
            result.push_back(l2.getCursor());
            if (!l2.gotoNext())
                break;
        }
    }
    if (!check)
        while (true)
        {
            result.push_back(l1.getCursor());
            if (!l1.gotoNext())
                break;
        }
    if (check)
        while (true)
        {
            result.push_back(l2.getCursor());
            if (!l2.gotoNext())
                break;
        }
    return result;
}

int main()
{
    // task -1
    List<string> l1(5);
    List<string> l2(3);
    l1.insert("aay");
    l1.insert("aaz");
    l1.insert("abx");
    l1.insert("aby");
    l1.insert("abz");
    l2.insert("aax");
    l2.insert("aazz");
    l2.insert("az");
    vector<string> ans = merge(l1, l2);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;


    // task-2
    List<int> tempList(10);
for(int i=0;i<10;i++) tempList.insert(1);
// print elements before calling the function
tempList.showStructure();
// call the function and then print elements to compare
tempList.uniqueify();
tempList.showStructure();
}
