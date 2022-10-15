#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "WELCOME TO THE CONTRI CALCULATOR, Designed by Krishnansh Sharma";
    cout << "\nPress enter to continue";
    cin.ignore();
    cout << "Enter the number of friends: ";
    cin >> n;
    string arr[n];
    cout << "Enter their names one by one: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "We have created an array of the names of all your " << n << " friends! Have a look\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // // Real Shit begins here
    // // Now, I want to fetch an input that tells me the amount each friend contributed.
    cout << "\n********************************************************\n";
    cout << "\nNow, we will need to know about the contributions of each friend (in Rupees)";
    cout << "\nContribution in our software means the amount of Rupees a person has payed on behalf of everyone\n";
    int con[n]; // This array stores the contributions by each member
    for (int i = 0; i < n; i++)
    {
        cout << "Amount contributed by " << arr[i] << " is: ";
        cin >> con[i];
    }
    int share[n]; // This array stores the amount each person needs to pay to the contributer
    for (int i = 0; i < n; i++)
    {
        share[i] = (con[i]) / n;
    }

    cout << "Everyone needs to pay ";
    for (int i = 0; i < n; i++)
    {
        if (share[i]!=0)
        {
            cout <<"Rupees "<<share[i] << " to " << arr[i] << "," ;
        }
        
        
    }

    return 0;
}

// Limitation of this program: It gives practically correct results only when we consider the contributions made by one person is made on behalf of all the members.
// This program was created by Krishnansh Sharma on 14.10.2002