#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <vector>
#include <fstream>
#include <iterator>
#include <algorithm>

#include "functions.h"
#include "classes.h"
#include "startmenu.h"
#include "mainmenu.h"
#include "vehiclemenu.h"
#include "employeemenu.h"
#include "availableVehicles.h"
#include "takenVehicles.h"


using namespace std;

int vehiclesCount = 0;

int start_menu_choice;
int main_menu_choice;
int vehicle_menu_choice;
int employee_menu_choice;

vector <Vehicle*> listaPojazdow;



int main(){

loadVehicleList();

listaPojazdow.at(1)->getVehicleBrand();
cout << "\n" << vehiclesCount << "\n";
system("Pause");

return 0;
}
