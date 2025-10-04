#include <iostream>
#include <string>
using namespace std;

void repetir_linea(const string &linea, int veces) {
    for (int i = 0; i < veces; i++) {
        cout << linea << endl;
    }
}
void Entertainig(){cout<<", is this entertaining?"<<endl;}
void Pre_coro() {
    cout<<"My patience is waning";Entertainig();
    cout<<"Our patience is waning";Entertainig();
    cout << endl;
}
void Magic() {
    cout << "'Cause there's magic in my bones" << endl;
}
void coro() {
    string lines[] = {
        ", yeah, you know",
        "Where I'm losing all control",
        " in my soul",
        "Go ahead and throw your stones"
    };
    int total = sizeof(lines) / sizeof(lines[0]);
    for (int i = 0; i < total; i++) {
        if (i % 2 == 0) {
            cout << "I-I-I got this feeling" << lines[i] << endl;
        } else {
            cout << lines[i] << endl;
            Magic();
        }
    }
    cout << endl;
}

void Verso(int numero) {
    switch (numero) {
        case 1:
            cout << "Gimme, gimme, gimme some time to think" << endl;
            cout << "I'm in the bathroom, looking at me" << endl;
            cout << "Face in the mirror is all I need (Ooh-ooh)" << endl;
            cout << "Wait until the reaper takes my life" << endl;
            cout << "Never gonna get me out alive" << endl;
            cout << "I will live a thousand million lives (Ooh-ooh)" << endl;
            break;

        case 2:
            cout << "Playin' with a stick of dynamite" << endl;
            cout << "There was never gray in black and white" << endl;
            cout << "There was never wrong till there was right (Ooh-ooh)" << endl;
            cout << "Feelin' like a boulder hurtlin'" << endl;
            cout << "Seein' all the vultures circlin'" << endl;
            cout << "Burnin' in the flames, I'm workin' in" << endl;
            cout << "Turnin' in a bed, that's darkenin'" << endl;
            break;

        default:
            cout << "Verso no disponible." << endl;
    }
    cout << endl;
}
void despues_de_coro() {
    Magic();
    cout << endl;
}
void bridge() {
    cout << "Look in the mirror of my mind" << endl;
    cout << "Turnin' the pages of my life" << endl;
    cout << "Walkin' the path so many paced a million times" << endl;
    cout << "Drown out the voices in the air" << endl;
    cout << "Leavin' the ones that never cared" << endl;
    cout << "Pickin' the pieces up and buildin' to the sky" << endl;
    cout << endl;
}
void final() {
    repetir_linea("There goes my mind, (I-I-I) don't mind", 1);
    cout << "There goes my mind (There it goes, there it goes)" << endl;
    cout << "There goes my mind, (I-I-I) don't mind (There it goes)" << endl;
    cout << "There goes my mind (There it goes)" << endl;
    cout << "'Cause there's magic in my bones" << endl;
}
int main() {
    for (int iteracion = 1; iteracion <= 2; iteracion++) {
        Verso(iteracion);
        if (iteracion%2==1){Pre_coro();coro();}
    }
    for (int iteracion = 0; iteracion <=5; iteracion++) {
        if (iteracion==3){bridge();}
        else if (iteracion==2){despues_de_coro();}
        else if (iteracion%2!=0){coro();}
        else if (iteracion%2==0){Pre_coro();}
    }
        final();
        return 0;
    }