#include <iostream>

using namespace std;


void maleMenu();
void femaleMenu();
void Construction();
void Finance();
void Engineering();
void Childcare();
void Nursing();
void Veterinarian();

class Profession
{
    private:
    
    string jobTitle;
    double wageGap;
    
    public:
    
    Profession(string t, double w)
    {
        jobTitle = t;
        wageGap = w;
    }

    string getTitle()
    { 
        return jobTitle; 
    }
    
    double getWageGap()
    {
        return wageGap; 
    }
   
    void setTitle(string t)
    {
        jobTitle = t;
        
    }
    
    void setWageGap(double w)
    {
        wageGap = w;
    }
    
    //~Profession();
};

double Percentage(Profession p)
{
    double percent = p.getWageGap();
    percent = percent * 100;
    return percent;
}

void mainMenu()
{
    int choice = 0;
    cout << "Choose a category:" << endl;
    cout << "1) Male-Dominated Professions" << endl;
    cout << "2) Female-Dominated Professions" << endl;
    cout << "3) Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    
    if(choice < 1 || choice > 3)
    {
        cout << "Invalid choice. Please select again: ";
        cin >> choice;
    }
    else
    {
        switch(choice)
        {
            case 1:
            maleMenu();
            break;
            
            case 2:
            femaleMenu();
            break;
            
            case 3:
            cout << "Exiting Program" << endl;
            break;
        }
    }
}

void maleMenu()
{
    int choice = 0;
    
    cout << "Choose a Male-Dominated Profession:" << endl;
    cout << "1) Construction" << endl;
    cout << "2) Finance" << endl;
    cout << "3) Engineering" << endl;
    cout << "4) Return" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    
    if(choice < 1 || choice > 4)
    {
        cout << "Invalid choice. Please select again: ";
        cin >> choice;
    }
    else
    {
        switch(choice)
        {
            case 1:
            Construction();
            break;
            
            case 2:
            Finance();
            break;
            
            case 3:
            Engineering();
            break;
                        
            case 4:
            mainMenu();
            break;
        }
    }
}

void femaleMenu()
{
    int choice = 0;
    
    cout << "Choose a Female-Dominated Profession:" << endl;
    cout << "1) Childcare" << endl;
    cout << "2) Nursing" << endl;
    cout << "3) Veterinarian" << endl;
    cout << "4) Return" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    
    if(choice < 1 || choice > 4)
    {
        cout << "Invalid choice. Please select again: ";
        cin >> choice;
    }
    else
    {
        switch(choice)
        {
            case 1:
            Childcare();
            break;
            
            case 2:
            Nursing();
            break;
            
            case 3:
            Veterinarian();
            break;
                        
            case 4:
            mainMenu();
            break;
        }
    }
}

void Construction()
{
    int choice = 0;
    
    Profession p("Construction", 0.74);
    
    cout << "In the field of " << p.getTitle() << ", women earn " << Percentage(p) << "% " << "of men in the United States." << endl;
    cout << "1) View Country Data" << endl;
    cout << "2) Return" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
                    
    if(choice < 1 || choice > 2)
    {
        cout << "Invalid choice. Please select again: ";
        cin >> choice;
    }
    else
    {
        switch(choice)
        {
            case 1:
            cout << "Percentages for other countries:" << endl;
            cout << "Canada: 95%" << endl;
            cout << "United Kingdom: 77%" << endl;
            cout << "China: 74%" << endl;
            cout << "Returning to previous menu..." << endl;
            maleMenu();
            break;
            
            case 2:
            maleMenu();
            break;
        }
    }
}

void Finance()
{
    int choice = 0;
    
    Profession p("Finance", 0.87);
    
    cout << "In the field of " << p.getTitle() << ", women earn " << Percentage(p) << "% " << "of men in the United States." << endl;
    cout << "1) View Country Data" << endl;
    cout << "2) Return" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
                    
    if(choice < 1 || choice > 2)
    {
        cout << "Invalid choice. Please select again: ";
        cin >> choice;
    }
    else
    {
        switch(choice)
        {
            case 1:
            cout << "Percentages for other countries:" << endl;
            cout << "Canada: 82%" << endl;
            cout << "United Kingdom: 70%" << endl;
            cout << "Australia: 26%" << endl;
            cout << "Returning to previous menu..." << endl;
            maleMenu();
            break;
            
            case 2:
            maleMenu();
            break;
        }
    }
}

void Engineering()
{
    int choice = 0;
    
    Profession p("Engineering", 0.84);
    
    cout << "In the field of " << p.getTitle() << ", women earn " << Percentage(p) << "% " << "of men in the United States." << endl;
    cout << "1) View Country Data" << endl;
    cout << "2) Return" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
                    
    if(choice < 1 || choice > 2)
    {
        cout << "Invalid choice. Please select again: ";
        cin >> choice;
    }
    else
    {
        switch(choice)
        {
            case 1:
            cout << "Percentages for other countries:" << endl;
            cout << "Canada: 94%" << endl;
            cout << "United Kingdom: 78%" << endl;
            cout << "Australia: 21.2%" << endl;
            cout << "Returning to previous menu..." << endl;
            maleMenu();
            break;
            
            case 2:
            maleMenu();
            break;
        }
    }
}

void Childcare()
{
    int choice = 0;
    
    Profession p("Childcare", 0.92);
    
    cout << "In the field of " << p.getTitle() << ", women earn " << Percentage(p) << "% " << "of men in the United States." << endl;
    cout << "1) View Country Data" << endl;
    cout << "2) Return" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
                    
    if(choice < 1 || choice > 2)
    {
        cout << "Invalid choice. Please select again: ";
        cin >> choice;
    }
    else
    {
        switch(choice)
        {
            case 1:
            cout << "Percentages for other countries:" << endl;
            cout << "Canada: 68%" << endl;
            cout << "Australia: 68%" << endl;
            cout << "Returning to previous menu..." << endl;
            femaleMenu();
            break;
            
            case 2:
            femaleMenu();
            break;
        }
    }
}

void Nursing()
{
    int choice = 0;
    
    Profession p("Nursing", 0.84);
    
    cout << "In the field of " << p.getTitle() << ", women earn " << Percentage(p) << "% " << "of men in the United States." << endl;
    cout << "1) View Country Data" << endl;
    cout << "2) Return" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
                    
    if(choice < 1 || choice > 2)
    {
        cout << "Invalid choice. Please select again: ";
        cin >> choice;
    }
    else
    {
        switch(choice)
        {
            case 1:
            cout << "Percentages for other countries:" << endl;
            cout << "Canada: 86%" << endl;
            cout << "United Kingdom: 83%" << endl;
            cout << "Australia: 85.8%" << endl;
            cout << "Returning to previous menu..." << endl;
            femaleMenu();
            break;
            
            case 2:
            femaleMenu();
            break;
        }
    }
}

void Veterinarian()
{
    int choice = 0;
    
    Profession p("Veterinarian", 0.80);
    
    cout << "In the field of " << p.getTitle() << ", women earn " << Percentage(p) << "% " << "of men in the United States." << endl;
    cout << "1) View Country Data" << endl;
    cout << "2) Return" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
                    
    if(choice < 1 || choice > 2)
    {
        cout << "Invalid choice. Please select again: ";
        cin >> choice;
    }
    else
    {
        switch(choice)
        {
            case 1:
            cout << "Percentages for other countries:" << endl;
            cout << "Canada: 71%" << endl;
            cout << "United Kingdom: 84.5%" << endl;
            cout << "Australia: 69.22%" << endl;
            cout << "Returning to previous menu..." << endl;
            femaleMenu();
            break;
            
            case 2:
            femaleMenu();
            break;
        }
    }
}

int main() 
{
    mainMenu();

    return 0;
}
