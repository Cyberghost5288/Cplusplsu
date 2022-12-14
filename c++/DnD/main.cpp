#include <iostream>

int welcome();

using  namespace std;

int main() {
    welcome();
}
int welcome() {
    // gender input
    string w_i;
    cout << "are you a boy or a girl: " << endl;
    cin >> w_i;
    cout << "ok, you are a " << w_i << "\n"<< endl;
    // name input
    string name;
    cout << "now what is your name: "<< endl;
    cin >> name;
    cout << " so you are " << name << " nice name \n"<< endl;

    // race input
    string race;
    cout << "what is your race gonna be knights or wizard/witches: \n"<< endl;
    cin >> race;
    cout << "ok " << name << " "<< endl;
    cout << "you are a " << race << "\n"<< endl;

    cout << "press enter to start your game " << name<< endl;


    if (race == "wizard" )  {
        cout << " you are from the city of wizardy and witchcraft"<< endl;
    }
    string que;
     cout << "you got a recomendation to a guild do you want to go? yes or no" << endl;
     cin >> que;

    else if (race == "witch") {
        cout << " you are from the city of wizardy and witchcraft"<< endl;
    }
  string que;
     cout << "you got a recomendation to a guild do you want to go? yes or no" << endl;
     cin >> que;


    else if (que == "yes"){
        cout << "your option, you enter the guild house "<< endl;
        cout << "a guy suddenly pops up and says"<< endl;
        cout << "are you the new recruitment"<< endl;
        cout << "hi, im ronzalo im also a memeber of the guild"<< endl;
        cout << "here fill this form and you will also be a oficial member"<< endl;
        string que_fr;
        cout << "what type of element do you use fire ,water,lightning or earth: "<< endl;
        cin >> que_fr;
        cout << "oh so you use " << que_fr << "\n"<< endl;
        cout << "well thats the only question \n"<< endl;
        cout << " so what are you going to do \n"<< endl;
        string que_fr_2;
        cout << " go for a mission or story line ";
        cin >> que_fr_2;
        return 0;
    }

    else {
            cout << "sorry wrong race, try again";
             return 0;
    }

    return 0;
}
