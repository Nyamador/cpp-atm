#include <iostream>
#include <stdlib.h> // For mods
#include <windows.h> // for sleep()
#include <ctime> //For system time

using namespace std;


    //Table of contents
    //  1.0 - Welcome Page
    //  2.0 - Secret PIN Page
    //  3.0 - Main Menu
    //



int main(){
    system("Color A");

        ////////////************ 1.0 == Welcome Page **************////////////




cout<<"\t               _____                     _                      _______ __  __\n";
cout<<"\t              / ____|                   | |                  /\\|__   __|  \\/  |\n";
cout<<"\t             | |     _____   _____ _ __ | |_ _ __ _   _     /  \\  | |  | \\  / |\n";
cout<<"\t             | |    / _ \\ \ / / _ \\ '_ \\| __| '__| | | |    / /\\ \\ | |  | |\\/| |\n";
cout<<"\t             | |___| (_) \\ V /  __/ | | | |_| |  | |_| |  / ____ \\| |  | |  | |\n";
cout<<"\t              \\_____\\___/ \\_/ \\___|_| |_|\\__|_|   \\__, | /_/    \\_\\_|  |_|  |_|\n";
cout<<"\t                                                  __/ |\n";
cout<<"\t                                                 |___/\n";

cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" <<endl;
cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" <<endl;


    cout << "\t                                           WELCOME TO COVENTRY ATM"          <<endl;
    cout << "\t                                             INSERT YOU CARD AND"          <<endl;
    cout << "\t                                             TYPE OK TO CONTINUE"            <<endl;

    //Accepting input
    string accept;
    getline(cin, accept);

    // Accepting only okay as input
    if (accept == "ok"){

        //Requesting Account PIN
        system ("CLS");
        float pin  ;
        pin = 398;
        cout << "\tEnter PIN: " <<endl;
        cin >> pin;

        //Ensuring pin is correct
        while(pin != 398){
          cout << "Sorry Invalid Pin" <<endl;
        cout << "Enter Pin" <<endl;
         cin >> pin ;
        cout << "\n" ;
        }


    }

   //Displaying the options to the user
    system("CLS");
    float number;   // Number = Options for main menu
    cout << "" <<endl;
    cout << "\tHello, Desmond!" <<endl;
    cout << "                 " <<endl;
    cout << "\tCHOOSE AN OPTION" << endl;
    cout << "\t============" << endl;
    cout << "\t            " << endl;
    cout << "\t1. Withdrawal"  <<endl;
    cout << "\t2. Check Balance" <<endl;
    cout << "\t3. Frequently Asked Questions" <<endl;
    cin>>number;

    system("CLS");

    //Declaring Variables for Withdrawal
    //float balance;
    float balance = 5000.00 ;  // Current Balance in account
    float option;               // Available options for withdrawal
    float custom_amount;        // Custom amount for option 6 (User cannot withdraw above 2000)

    //For Withdrawal

    if  (number == 1 ){
        // Simple Loading animation
        std::cout << '-' << std::flush;
        for (;;) {
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoading   " << std::flush;
        Sleep(100);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLOading   " << std::flush;
        Sleep(100);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoAding   " << std::flush;
        Sleep(100);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoaDing   " << std::flush;
        Sleep(100);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoadIng   " << std::flush;
        Sleep(100);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoadiNg   " << std::flush;
        Sleep(100);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoadinG   " << std::flush;
        Sleep(100);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoading.  " << std::flush;
        Sleep(100);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoading.." << std::flush;
        Sleep(100);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoading..." << std::flush;
        Sleep(100);
        system ("CLS");
        cout << "" <<endl;
        cout << "\tENTER AMOUNT" << endl;
        cout << "\t============" << endl;
        cout << "\t            " << endl;
        cout << " \t1. 50 " << endl;
        cout << " \t2. 100" <<endl;
        cout << " \t3. 200" <<endl;
        cout << " \t4. 500" <<endl;
        cout << " \t5. 1000" <<endl;
        cout << " \t6. Other " <<endl;
        cin >> option;
        goto a;


    }


 //Checking the account balance

        // For 50
        a:
        if (option == 50 ){
            while ( option > balance ) {
            cout << "Sorry you have insufficient funds to process this transaction" <<endl;
            break;
             }
            system("CLS");
            //Generating a receipt for the customer
            cout << "\n\t==== Transactional Receipt=======" <<endl;
            time_t now = time(0);
            char* dt = ctime(&now);
            cout << "\n";
            cout << "\tTransaction time : " << dt <<endl;
            cout << "\n";
            cout << "\tThank you for banking with us!" <<endl;
            cout << "\tAmount Withdrawn : " << option <<endl;
            cout << "\tInternet Banking Charge: GHC " << 0.03 * option << endl;
            cout << "\tYour new balance is: " <<  balance - ( 50 + 50 * 0.03 ) << endl;
        }

        //For 100
        else if (option == 100){
            cout << "Your transaction was successful" <<endl;
            cout << "Your cash is dispensing" <<endl;
            system("CLS");
            cout << "\n\t==== Transactional Receipt=======" <<endl;
            time_t now = time(0);
            char* dt = ctime(&now);
            cout << "\n";
            cout << "\tTransaction time : " << dt <<endl;
            cout << "\n";
            cout << "\tThank you for banking with us!" <<endl;
            cout << "\tAmount Withdrawn : " << option <<endl;
            cout << "\tInternet Banking Charge: GHC " << 0.03 * option << endl;
            cout << "New Balance is: " <<  balance - ( 100 + 100 * 0.03 ) << endl;

        }

        // For 200
         else if (option == 200){
            cout << "Your transaction was successful" <<endl;
            cout << "Your cash is dispensing" <<endl;
            system("CLS");
            cout << "\n\t==== Transactional Receipt=======" <<endl;
            time_t now = time(0);
            char* dt = ctime(&now);
            cout << "\n";
            cout << "\tTransaction time : " << dt <<endl;
            cout << "\n";
            cout << "\tThank you for banking with us!" <<endl;
            cout << "\tAmount Withdrawn : " << option <<endl;
            cout << "\tInternet Banking Charge: GHC " << 0.03 * option << endl;
            cout << "New Balance is: " <<  balance - ( 200 + (200 * 0.030) ) << endl;
        }

        //For 500
         else if (option == 500){
            cout << "Your transaction was successful" <<endl;
            cout << "Your cash is dispensing" <<endl;
            system("CLS");
            cout << "\n\t==== Transactional Receipt=======" <<endl;
            time_t now = time(0);
            char* dt = ctime(&now);
            cout << "\n";
            cout << "\tTransaction time : " << dt <<endl;
            cout << "\n";
            cout << "\tThank you for banking with us!" <<endl;
            cout << "\tAmount Withdrawn : " << option <<endl;
            cout << "\tInternet Banking Charge: GHC " << 0.03 * option << endl;
            cout << "New Balance is: " <<  balance - ( 500 + (500 * 0.03) ) << endl;
        }

        //For 1000
         else if (option == 1000){
            cout << "Your transaction was successful" <<endl;
            cout << "Your cash is dispensing" <<endl;
            system("CLS");
            cout << "\n\t==== Transactional Receipt=======" <<endl;
            time_t now = time(0);
            char* dt = ctime(&now);
            cout << "\n";
            cout << "\tTransaction time : " << dt <<endl;
            cout << "\n";
            cout << "\tThank you for banking with us!" <<endl;
            cout << "\tAmount Withdrawn : " << option <<endl;
            cout << "\tInternet Banking Charge: GHC " << 0.03 * option << endl;
            cout << "New Balance is: " <<  balance - ( 1000 + (1000* 0.03) ) << endl;
        }

        //Custom Amount
        else if (option == 6){
            system("CLS");
        cout  << "Enter new amount\n" <<endl;
        cout << "Threshold = 2000 " <<endl;
        cin >> custom_amount;
                if ( custom_amount > balance ) {
                cout << "Sorry you have insufficient funds to process this transaction" <<endl;
                }

        system("CLS");
            cout << "\n\t==== Transactional Receipt=======" <<endl;
            time_t now = time(0);
            char* dt = ctime(&now);
            cout << "\n";
            cout << "\tTransaction time : " << dt <<endl;
            cout << "\n";
            cout << "\tThank you for banking with us!" <<endl;
            cout << "\tAmount Withdrawn : " << custom_amount <<endl;
            cout << "\tInternet Banking Charge: GHC " << 0.03 * custom_amount
             << endl;
        cout << "\nNew Balance is :" << balance - ( custom_amount + (0.3 * custom_amount) ) << endl;


        }


    }

    // For Balance
   else if (number == 2){
        cout << "Current Balance" <<endl;
        cout << "==============" <<endl;
        cout << "Your current balance is :" << balance << endl;

    }

    //For Changing PIN

    //For Help Options
    else if ( number == 3 ){
        cout << "\t======= FAQ ======= " << endl;
        cout << " \n\t 1. Withdrawal" <<endl;
        cout << "\n\t\t To withdraw money from your card insert your card, enter your pin \n \t\tand select preferred amount."<<endl;
        cout << "\n\t  2. Balance" <<endl;
        cout << "\n\t\t To check your account balance, enter your pin \n \t\tand select option two in the main menu."<<endl;
        cout << "\n\t 3.Why does by account balance reduce more than the amount I withdraw?" <<endl;
        cout << "\n\t\t 3% of any amount transacted is deducted from your account after a successful transaction" <<endl;
        cout << "\n\t 4. I can't access my account " <<endl;
        cout << "\n\t\t Kindly check your pin and try again" <<endl;
        cout << "\n\t 5. Got any more questions ? " <<endl;
        cout << "\n\t\t Kindly call us on +233 4839 43592 or send us an email \n\t through customercare@coventry.ac.uk"<<endl;


        cout << "" << endl;
    }

    else {
        cout << "Sorry Invalid Selection" <<endl;
    }








    return 0;
}

