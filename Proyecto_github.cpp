#include <iostream>
#include <cstdlib>
using namespace std;
string Computer() {
    int valor = rand() % 3;
    if (valor == 0){
        return "piedra";
	}else if (valor == 1){
        return "papel";
	}else{
        return "tijeras";
    }
}

string ganador(string usuario, string computer) {
    if (usuario == computer){
        return "Empate";
	} else if ((usuario == "piedra" && computer == "tijeras") ||
             (usuario == "papel" && computer == "piedra") ||
             (usuario == "tijeras" && computer == "papel")){
        return "Usuario";
	}else{
        return "Computadora";
}
}

int main() {
    srand(20);
    int user_g = 0;
    int computer_g = 0;
    while (user_g < 3 && computer_g < 3) {
        string jugador;
        cout << "Elige piedra, papel o tijeras (Escribe): ";
        cin >> jugador;

        if (jugador != "piedra" && jugador!= "papel" && jugador != "tijeras") {
            cout << "Eleccion Invalida.....(Intente de nuevo)" << endl;
            continue;
        }

        string maquina = Computer();

        cout << "Usuario: " << jugador << endl;
        cout << "Computadora : " << maquina << endl;

        string winner = ganador(jugador,maquina);

        if (winner == "Usuario") {
            user_g++;
        } else if (winner == "Computadora") {
            computer_g++;
        } else {
            cout << "Es un empate!" << endl;
        }
        cout << "Marcador: Usuario " << user_g << " - " << computer_g<< " Computadora" << endl;
        cout << "****************************************************" << endl;
    }

    string letraW = 'Winner';
    string letraF = 'Game Over';
    if (user_g ==3){
    cout << letraW;
    for (int i = 0; i < 5; ++i) {
        cout << "*";
    }
    cout << " ";
    } else {
    cout << letraF;
    for (int i = 0; i < 5; ++i) {
        cout << "*";
    }
    cout << endl;
	}
    return 0;
}
