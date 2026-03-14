//Jessica Maria Martinez Monterrosa
//ID: 00606503
//Ingenieria en animacion sigital
#include <iostream>
#include <string>
using namespace std;
int main() {
	string idEmp, nomEmp, apeEmp;
	float salBas, porBon, valBon, bonTot = 0, porEmp1, porEmp2, porEmp3, porEmp4, porEmp5, porEmp6, porEmp7;
	int tieSer, conEmp1 = 0, conEmp2 = 0, conEmp3 = 0, conEmp4 = 0, conEmp5 = 0, conEmp6 = 0, conEmp7 = 0, empTot;
	char opc;

	cout << "Ingrese el ID del empleado: ";
	cin >> idEmp;
	cout << "Ingrese el nombre del empleado: ";
	cin >> nomEmp;
	cout << "Ingrese el apellido del empleado: ";
	cin >> apeEmp;
	cout << "Ingrese el salario base del empleado: ";
	cin >> salBas;
	cout << "Ingrese el tiempo de servicio del empleado (en años): ";
	cin >> tieSer;

	if (tieSer < 5) {
		porBon = 5;
		conEmp1 = conEmp1 + 1;
	}
	else
		if (tieSer < 10) {
			porBon = 10;
			conEmp2 = conEmp2 + 1;
		}
		else
			if (tieSer < 15) {
				porBon = 15;
				conEmp3 = conEmp3 + 1;
			}
			else
				if (tieSer < 20) {
					porBon = 20;
					conEmp4 = conEmp4 + 1;
				}
				else
					if (tieSer < 25) {
						porBon = 25;
						conEmp5 = conEmp5 + 1;
					}
					else
						if (tieSer < 30) {
							porBon = 35;
							conEmp6 = conEmp6 + 1;
						}
						else {
							porBon = 50;
							conEmp7 = conEmp7 + 1;
						}
	valBon = (salBas * porBon) / 100;
	bonTot = bonTot + valBon;

	cout << "identificacion del empleado: " << idEmp << endl;
	cout << "nombre del empleado: " << nomEmp << endl;
	cout << "apellido del empleado: " << apeEmp << endl;
	cout << "porcentaje de bonificacion: " << porBon << "%" << endl;
	cout << "valor de la bonificacion: " << valBon << endl;

	cout << "desea ingresar nuevos datos? (s/n): ";
	cin >> opc;

	while (opc == 'n' || opc == 'n') {
		empTot = conEmp1 + conEmp2 + conEmp3 + conEmp4 + conEmp5 + conEmp6 + conEmp7;
		porEmp1 = (conEmp1 * 100) / empTot;
		porEmp2 = (conEmp2 * 100) / empTot;
		porEmp3 = (conEmp3 * 100) / empTot;
		porEmp4 = (conEmp4 * 100) / empTot;
		porEmp5 = (conEmp5 * 100) / empTot;
		porEmp6 = (conEmp6 * 100) / empTot;
		porEmp7 = (conEmp7 * 100) / empTot;

		cout << "empleados con menos de 5 anios: " << conEmp1 << " " << (porEmp1 * 100) / 100 << "%" << endl;
		cout << "empleados con 5 a 9 anios: " << conEmp2 << " " << (porEmp2 * 100) / 100 << "%" << endl;
		cout << "empleados con 10 a 14 anios: " << conEmp3 << " " << (porEmp3 * 100) / 100 << "%" << endl;
		cout << "empleados con 15 a 19 anios: " << conEmp4 << " " << (porEmp4 * 100) / 100 << "%" << endl;
		cout << "empleados con 20 a 24 anios: " << conEmp5 << " " << (porEmp5 * 100) / 100 << "%" << endl;
		cout << "empleados con 25 a 29 anios: " << conEmp6 << " " << (porEmp6 * 100) / 100 << "%" << endl;
		cout << "empleados con 30 o mas anios: " << conEmp7 << " " << (porEmp7 * 100) / 100 << "%" << endl;
		break;
	}

	return 0;
}