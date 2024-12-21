#include <iostream>
#include <string>
#include <fstream>
#include <conio.h>
using namespace std;

void clearScreen();
void mainMenu(void);
void adminInterface(void);

int main(){
    clearScreen();//clear screen
    mainMenu();
}

void mainMenu(void){
    char pressedKey;

    int attempts = 0;
    do{
        cout<<"Press 1 to login as admin\nPress 2 to login as user";
        pressedKey = getch();
        if(pressedKey == '1'){
            clearScreen();
            adminInterface();
            break;
        } else if(pressedKey == '2'){
            clearScreen();
            cout<<"User has been logined"<<endl;
            //userInterface();
            break;
        } else{
            clearScreen();
            attempts++;
            cout<<"Invalid key"<<endl;
        }
    } while(attempts < 4);
}

void adminInterface(void){
    //Ask admin to enter name and password
    //If password correct ask him to read/write
    //show him options 
    //supossing name and pass for admin right now
    string adminName = "shamveelahmed06";
    string adminPass = "@0923";
    string name, pass;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your password: ";
    cin>>pass;
    for(int attempts = 0;attempts < 4;attempts++){
        if(name == adminName && pass == adminPass){
            char adminPressedKey;
            clearScreen();
            cout<<"Login successfully"<<endl;
            cout<<"Press 1 to check user information"<<endl;
            cout<<"Press 2 to add new user"<<endl;
            cout<<"Press e to stop the programe"<<endl;
            cout<<"Press b to go back to login page"<<endl;
            adminPressedKey = getch();
            switch (adminPressedKey){
            case '1':
                clearScreen();
                cout<<"Here is the users ";
                //set read to true
                //make function to read write user
                break;
            case '2':
                clearScreen();
                cout<<"Add user";
                //set write to true
                //make function to read write user
            case 'e':
                clearScreen();
                cout<<"Exited";
                break;
            case 'b':
                clearScreen();
                mainMenu();
                break;
            default:
                cout<<"Press the given keys!"<<endl;
                continue;
            }
            break;
        } else{
            cout<<"Wrong information! Enter agein"<<endl;
        }
    }
}


void clearScreen(void) {
    std::cout << "\033[2J\033[1;1H"; // Clears the screen and moves the cursor to the top left
}
