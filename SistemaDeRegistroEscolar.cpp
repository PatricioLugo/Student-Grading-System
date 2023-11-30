#include <iostream>
#include <string>
#include <vector>
//#include "PlanDeEvaluacion.h"
#include "Estudiante.h"
#include "Maestro.h"
#include "Admin.h"
//#include "Usuario.h"
//#include "Curso.h"

using namespace std;

int main(){

    Admin admin("Admin", 0, "Administrador", 1234);
    vector<Curso> cursosExistentes;
    bool continuar = true;
    while (continuar == true){
        int opcion;
        cout << "1. Admin \n 2. Maestro \n Estudiante" << endl;
        cout << "Ingresa el tipo de usuario (1/2/3)";
        cin >> opcion;
        if (opcion == 1){
            int iniciarSesion;
            cout << "\nIngresa la contraseña del usuario administrador: ";
            cin >> iniciarSesion;
            if (iniciarSesion == 1234){
                bool continuarAdmin = true;
                while (continuarAdmin == true){
                    cout << "\nBienvenido" << endl;
                    int opcionesAdmin;
                    cout << "Elige una opción (1/2/3): " << endl << "1. Añadir un curso" <<
                    endl << "2. Cambiar contraseña" << endl << "3. Salir" << endl;
                    cin >> opcionesAdmin;
                    if (opcionesAdmin == 1){
                        string nombreCurso_;
                        cout << "Ingrese el nombre del curso: ";
                        cin >> nombreCurso_;
                        int idCurso_;
                        cout << "\n Ingrese la ID del curso: ";
                        cin >> idCurso_;
                        PlanDeEvaluacion planDeEvaluacion_;
                        Curso cursoCreado(nombreCurso_, idCurso_, planDeEvaluacion_);
                        int preguntaPlanDeEvaluacion;
                        cout << "Desea cambiar el plan de evaluación del curso o usar los valores predeterminados? (1 = sí, 2 = no): ";
                        cin >> preguntaPlanDeEvaluacion;
                        if (preguntaPlanDeEvaluacion == 1){
                            int porcentajeExamenes_;
                            cout << "\nIngrese el porcentaje de valor que le quiere dar a los exámenes (En decenas sin el signo %): ";
                            cin >> porcentajeExamenes_;
                            int porcentajeTareas_;
                            cout << "\nIngrese el porcentaje de valor que le quiere dar a las tareas (En decenas sin el signo %): ";
                            int porcentajeProyecto_;
                            cout << "\nIngrese el porcentaje de valor que le quiere dar al proyecto final (En decenas sin el signo %): ";
                            cin >> porcentajeProyecto_;
                            PlanDeEvaluacion planDeEvaluacionCreado(porcentajeExamenes_,porcentajeTareas_,porcentajeProyecto_);
                            cursoCreado.cambiarPlanDeEvaluacion(planDeEvaluacionCreado);
                            cout << "Se ha creado el curso." << endl;
                            cursosExistentes.push_back(cursoCreado);
                        }
                        else{
                            cout << "Se ha creado el curso." << endl;
                            cursosExistentes.push_back(cursoCreado);
                        }
                    }
                    else if (opcionesAdmin == 2){
                        int nuevaContrasena;
                        cout << "Ingresa la nueva contraseña: ";
                        cin >> nuevaContrasena;
                        admin.setPassword(nuevaContrasena);
                    }
                    else if (opcionesAdmin == 3){
                        continuarAdmin = false;
                    }
                    else{
                        cout << "Opción inválida";
                    }
            }
        }
            else{
                    cout << "\nContraseña incorrecta" << endl;
                }
        }
        else if (opcion == 2){
            bool continuarMaestro = true;
            int id_;
            cout << "Ingrese su ID: ";
            cin >> id_;
            string nombre_;
            cout << "\nIngrese su nombre: ";
            cin >> nombre_;
            Maestro maestroNuevo("Maestro", id_, nombre_, Curso());
            while (continuarMaestro == true){
                cout << "Bienvenido" << endl;
                int opcionesMaestro;
                cout << "Elige una opción (1/2/3): " << endl << "1. Elegir Curso" <<
                    endl << "2. Generar un reporte del maestro" << endl << "3. Salir" << endl;
                cin >> opcionesMaestro;
                Curso cursoMaestroNuevo;
                if (opcionesMaestro == 1){
                    for (Curso i: cursosExistentes){
                        cout << i.getInfoCurso();
                        int opcionCurso;
                        cout << "¿Quiere elegir este curso? (1 = sí, 2 = no): ";
                        cin >> opcionCurso;
                        if (opcionCurso == 1){
                            maestroNuevo.designarCurso(i);
                            break;
                        }
                        else{
                            continue;
                        }
                    }
                }
                else if (opcionesMaestro == 2){
                    cout << maestroNuevo.getInfoMaestro();
                }
                else if (opcionesMaestro == 3){
                    continuarMaestro = false;
                }
                else{
                    cout << "Opción inválida";
                }
                }
            }
        else if (opcion == 3){
            bool continuarEstudiante = true;
            int id_;
            cout << "Ingrese su ID: ";
            cin >> id_;
            string nombre_;
            cout << "\nIngrese su nombre: ";
            cin >> nombre_;
            vector<Curso> cursosInscritos_;
            Estudiante estudianteNuevo("Estudiante", id_, nombre_, cursosInscritos_);
            while (continuarEstudiante == true){
                cout << "Bienvenido" << endl;
                int opcionesEstudiante;
                cout << "Elige una opción (1/2/3): " << endl << "1. Añadir Curso" <<
                    endl << "2. Generar un reporte del estudiante" << endl << "3. Salir" << endl;
                cin >> opcionesEstudiante;
                if (opcionesEstudiante == 1){
                    for (Curso i: cursosExistentes){
                        cout << i.getInfoCurso();
                        int opcionCurso;
                        cout << "¿Quiere elegir este curso? (1 = sí, 2 = no): ";
                        cin >> opcionCurso;
                        if (opcionCurso == 1){
                            estudianteNuevo.agregarCurso(i);
                        }
                        else{
                            continue;
                        }
                    }
                }
                else if (opcionesEstudiante == 2){
                    cout << estudianteNuevo.getInfoEstudiante();
                }
                else if (opcionesEstudiante == 3){
                    continuarEstudiante = false;
                }
                else{
                    cout << "Opción inválida";
                }
            }
        }
        else{
            cout << "Opción inválida";
        }
    }
return 0;
}
