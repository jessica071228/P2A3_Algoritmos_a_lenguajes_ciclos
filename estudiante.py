#Jessica Maria Martinez Monterrosa
#ID: 00606503
#Ingenieria en animacion digital

conEst = 0
sumNotPro = 0
ideEstMay = ""
nomEstMay = ""
apeEstMay = ""
proEstMay = 0
seg = "s"

while seg != "n":
    print("identificacion del estudiante: ")
    ideEst = str(input())
    print("apellidos del estudiante: ")
    apeEst = str(input())
    print("nombres del estudiante: ")
    nomEst = str(input())

    conMat = 0
    sumNotDef = 0
    opc = "s"

    while opc != "n":
        print("codigo de la materia: ")
        codMat = str(input())
        print("nota 1 30%: ")
        not1 = float(input())
        print("nota 2 30%: ")
        not2 = float(input())
        print("nota 3 40%: ")
        not3 = float(input())

        notDef = not1 * 0.3 + not2 * 0.3 + not3 * 0.4
        conMat = conMat + 1
        sumNotDef = sumNotDef + notDef

        print("nota definitiva: ", notDef)
        print("desea ingresar otra materia? s/n: ")
        opc = str(input())

    proEst = sumNotDef / conMat
    sumNotPro = sumNotPro + proEst
    conEst = conEst + 1

    if proEst > proEstMay:
        ideEstMay = ideEst
        apeEstMay = apeEst
        nomEstMay = nomEst
        proEstMay = proEst

    print("promedio del estudiante: ", proEst)
    print("desea ingresar otro estudiante? s/n: ")
    seg = str(input())

proGru = sumNotPro / conEst

print("numero de estudiantes: ", conEst)
print("promedio del grupo: ", proGru)
print("estudiante con mejor promedio: ", ideEstMay, apeEstMay, nomEstMay, "con un promedio de: ", proEstMay)
