//Jessica Maria Martinez Monterrosa 
//00606503
//Ingenieria en animacion digital
#include <iostream>
#include <string>
using namespace std;
int main() {
	string ideEst, nomEst, apeEst, idEstMay = "", nomEstMay = "", apeEstMay = "", codMat;
	char opc, seg = 's';
	float not1, not2, not3, notDef, sunNotDef, proEst, sumNotPro = 0, proGru, proEstMay = 0;
	int conMat, conEst = 0;

	while (seg != 'n') {
		cout << "Identidicacion del estudiante: ";
		cin >> ideEst;
		cout << "apellidos del estudiante: ";
		getline(cin, apeEst);
		cout << "nombres del estudiante: ";
		getline(cin, nomEst);

		cin.ignore();

		conMat = 0;
		sunNotDef = 0;
		opc = 's';

		while (opc != 'n') {
			cout << "Codigo de la materia: ";
			cin >> codMat;
			cout << "Nota 1 30%: ";
			cin >> not1;
			cout << "Nota 2 30%: ";
			cin >> not2;
			cout << "Nota 3 40%: ";
			cin >> not3;

			notDef = (not1 * 0.3) + (not2 * 0.3) + (not3 * 0.4);
			conMat = conMat + 1;
			sunNotDef = sunNotDef + notDef;

			cout << "Nota definitiva: " << notDef << endl;
			cout << "Desea ingresar otra materia? (s/n): ";
			cin >> opc;
		}

		proEst = sunNotDef / conMat;
		sumNotPro = sumNotPro + proEst;
		conEst = conEst + 1;

		if (proEst > proEstMay) {
			proEstMay = proEst;
			idEstMay = ideEst;
			nomEstMay = nomEst;
			apeEstMay = apeEst;
		}

		cout << "" << endl;
		cout << "Promedio del estudiante: " << proEst << endl;
		cout << "Desea ingresar otro estudiante? (s/n): ";
		cin >> seg;
	}

	proGru = sumNotPro / conEst;
	cout << "numero de estudiantes: " << conEst << endl;
	cout << "Promedio del grupo: " << proGru << endl;
	cout << " El estudiante con el mejor promedio es: " << idEstMay << " " << nomEstMay << " " << apeEstMay << " con un promedio de: " << proEstMay << endl;
	return 0;
}