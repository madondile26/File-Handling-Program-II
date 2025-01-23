/* TEST  4 File Handling Program(Part 1).cpp : This file contains the 'main' function. Program execution begins and ends there.
  Name: X-Nardo
  Surname: Madondile
  Occupation: Programming Agent
  Rank: General
  Place of Work: Skhotheni Empire University of Artifitial and Criminal Intellegence
  For More Info on How to Become a Programming Lord Contact Me at This Phone Number: 0646621730
  If My Phone Goes to Voicemail Then SORRY!!!....Try Again Next Year....
*/

#include <fstream>
#include <math.h>
#include <iostream>

using namespace std;

void areaAndResistance(double copperWires[], int size)
{
    double resistance[13];
    const double resistivity = 1.723e-8;
    double radius = 0.002;
    double crossSectionalArea;

    crossSectionalArea = 3.14 * pow(radius, 2);

    ofstream fout;
    fout.open("file.txt", ios::out); // Open the file in write mode.

    if (!fout)
    {
        cout << "ERROR OPENING FILE!!!...."; // Display this message if the file cannot be accessed.
        exit(1);
    }
    else {

        // Print out this message to the screen if no errors occured while trying to open the file.
        cout << "File write operation performed successfully!!!....\n" << endl;

        // Write all your results in table format to the file.txt file.
        fout << "-----------------------------------------" << endl;
        fout << "Wire length Values\t\tResistance Values" << endl;
        fout << "-----------------------------------------" << endl;
        for (int i = 0; i < size; i++)
        {
            resistance[i] = resistivity * (copperWires[i] / crossSectionalArea);
            fout << copperWires[i] << "\t\t\t\t\t\t" << resistance[i] << endl;
        }
        fout << "-----------------------------------------" << endl;

        fout.close();
    }
   
}
int main()
{
    double copperWires[13];
    char Option = ' ';
    
    while (Option != 'c')
    {
        cout << "\nPlease select one of the following options and press Enter:\n" << endl;
        cout << "(a) Enter 13 positive length values of copper-wires." << endl;
        cout << "(b) Calculate the uniform cross-sectional area and the resistance of the 13 copper-wire values." << endl;
        cout << "(c) Exit the program!!!...\n" << endl;
        cin >> Option;
        
        if (Option == 'a')
        {
            // Prompt the use to enter 13 values of copper wires.
            cout << "\nEnter 13 length value of copper wires:\n" << endl;

            for (int i = 0; i < 13; i++)
            {
                cout << "Copper length value # " << i + 1 << ": ";
                cin >> copperWires[i];

                while (copperWires[i] < 0) // Input validation while loop to check whether the user has entered a positive value or not.
                { 
                    cout << "Error!!!...The length value you've just entered does not satisfy validation..." << endl;
                    cout << "Please enter a positive length value: ";
                    cin >> copperWires[i];
                }
            }
        }

        if (Option == 'b')
        {
            // Call the function while passing the name of the array and the size.
            areaAndResistance(copperWires, 13);
        }

        if (Option == 'c')
        {
            // Provides the only point of exit from the program.
            cout << "-------------------------YOU'VE JUST EXITED THE PROGRAM!!!...-------------------------" << endl;
        }
    }
}

