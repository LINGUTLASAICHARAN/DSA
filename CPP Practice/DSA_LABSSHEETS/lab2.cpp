#include <iostream>
#include <vector>
using namespace std;

// bool checkConseq(const int arr[], int n) // waste function
//                     {
//                         for (int i = 0; i < n - 1; i++)
//                         {
//                             if ((arr[i + 1] - arr[i]) != 1)
//                                 cout << "returned false" << endl;
//                             return false;
//                         }
//                         return true;
//                     }
// void mysort(int a[], int n)  // waste function infact insertion sort
//                     {

//                         for (int i = 1; i < n; i++)
//                         {
//                             int j, temp = a[i];
//                             for (j = i - 1; j >= 0 && temp < a[j]; j--)
//                             {
//                                 a[i] = a[j];
//                             }
//                             a[j + 1] = temp;
//                         }
//                     }
class Logbook  // actual class
                    {
                    public:
                        int logMonth;
                        int logYear;
                        int daysInMonth;
                        std::vector<int> entries;
                        bool isLeapYear(int year);
                        Logbook(int month, int year);
                        void putEntry(int day, int value);
                        int getEntry(int day);
                        int getDaysInMonth();
                        int getMonth();
                        int getYear();
                        bool hasTargetBeenReached(int target);
                        int longestConsecutiveSubsequence();
                        int operator [] (int day);
                        Logbook operator + (const Logbook &rightLogbook );
                        void print();
                    
                    };
                //    ----------------------operator overloading function overloading doubt-----------------------
Logbook Logbook::  operator + (const Logbook &rightLogbook)
                    {
                        Logbook res(rightLogbook.logMonth ,rightLogbook.logYear );
                        for (int i = 1; i <= daysInMonth; i++)
                        {
                        res.entries[i] =  entries[i] + rightLogbook.entries[i];
                        }
                        return res;
                    }
void Logbook :: print()
                    {
                        
                        cout<<"Printing "<<endl;
                        for (int i = 1; i <= daysInMonth; i++)
                        {
                            cout << entries[i] << " ";
                        }
                        cout << endl;
                    }
int Logbook:: operator [] (int day)
                    {
                        return entries[day];
                    }
    
    int Logbook::longestConsecutiveSubsequence() // task-1 code
                    {

                        int answer = 1 , noOfZeros = 0;
                        vector<int> copy = entries;

                        for (int i = 2; i <= copy.size(); i++) // sorting  vector
                        {
                            int j, temp = copy[i];
                            for (j = i - 1; j >= 0 && temp < copy[j]; j--)
                            {
                                copy[i] = copy[j];
                            }
                            copy[j + 1] = temp;
                        }
                        // counting zeros
                        for (int i = 1; copy[i] == 0 && i< copy.size(); i++)
                        {
                            noOfZeros++;
                        }
                        

                        for (int i = 1+noOfZeros; i <= copy.size();)
                        {
                            int count = 1;
                            for (int j = i; copy[j] + 1 == copy[j + 1]; j++)
                            {
                                count++;
                            }
                            if (count > answer)
                                answer = count;
                            i = i + count;
                        }
                        return answer;
                    }

bool Logbook::isLeapYear(int year)
                    {
                        if (year % 4 == 0)
                        {
                            if (year % 100 == 0)
                            {

                                if (year % 400 == 0)
                                {

                                    return true;
                                }

                                else
                                    return false;
                            }
                            else
                                return true;
                        }
                        else
                            return false;
                    }
bool Logbook::hasTargetBeenReached(int target)  // task-1 code
                    {
                        int sum = 0;
                        for (int i = 1; i <= daysInMonth; i++)
                        {
                            sum += entries[i];
                        }
                        if (sum >= target)
                            return true;
                        else
                        {
                            return false;
                        }
                    }
Logbook::Logbook(int month, int year)
                        {
                              cout<<"Constructor has been called"<<endl;
                            logMonth = month;

                            logYear = year;
                            std::vector<int> daysList = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

                            if (month == 2 && isLeapYear(logYear) == true)
                            {

                                daysInMonth = 29;
                                cout<<"days havebenn set" <<endl;
                            }

                            else
                            {
                                daysInMonth = daysList[logMonth - 1];
                                cout<<"Days have been seet"<<endl;
                            }
                            entries.resize(daysInMonth + 1, 0);
                        }

void Logbook::putEntry(int day, int value)
                        {
                            entries[day] = value;
                        }
int Logbook::getEntry(int day)
                        {
                            return entries[day];
                            }

int Logbook::getMonth()
                        {
                            return logMonth;
                        }

int Logbook::getYear()
                        {
                            return logYear;
                        }

int Logbook::getDaysInMonth()
                        {

                            return daysInMonth;
                        }

int main()
                                {
                                    // task1
                                    Logbook testLogbook(2, 2020);
                                    for (int i = 1; i <= 29; i += 4)
                                        testLogbook.putEntry(i, i + 5);
                                    if (testLogbook.hasTargetBeenReached(160))
                                        std::cout << "YES\n";
                                    if (testLogbook.hasTargetBeenReached(120))
                                        std::cout << "NO\n";
                                    for (int i = 1; i <= 29; i++)
                                    {
                                        if (i % 2 == 0)
                                            testLogbook.putEntry(i, i / 2);
                                        else
                                            testLogbook.putEntry(i, i + 100);
                                    }
                                    cout << "Longest Consecutive Subsequence is of length: "
                                        << testLogbook.longestConsecutiveSubsequence() << endl;


                                    // task2
                                    cout<<"Task -2 ------------------------"<<endl;
                                    Logbook Logbook1(2 , 2020) ,Logbook2(2,2020);
                                    
                                    
                                for (int i = 1; i <= 29; i += 4){

                                        Logbook1.putEntry(i, i + 5);
                                        Logbook2.putEntry(i, i + 5);
                                }
                                // Logbook1.print()
                                Logbook Logbook3 = Logbook1 + Logbook2;
                                  Logbook1.print();
                                  Logbook3.print();

                                cout<<"-----------------Task3---------------- "<<endl;
                                    return 0;
                                }