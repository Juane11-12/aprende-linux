#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include <string.h>

using namespace std;

void cara_normal(){
	
	cout << R"(
       /\
      /  \
     /    \
    /______\
    |       |
    |  •  • |
    |   __  |
    \_______/
    )" << endl;
}


void cara_mal(){
	
	cout << R"(
       /\
      /  \
     /    \
    /______\
    |       |
    |  -  - |
    |   __  |
    \_______/
    )" << endl;
}

void cara_bien (){
	
	cout << R"(
       /\
      /  \
     /    \
    /______\
    |  	    |
    |  ^ ^  |
    |  \__/ |
    \_______/
    )" << endl;
}

void menu() {
    system("clear");
    int opcion1;
    cout << "==========" << endl;
    cout << "bienvenido" << endl;
    cout << "==========" << endl;
    cout << "" << endl;
    cout << "1-comenzar" << endl;
    cout <<"ctrl + C" << endl;
    cout << " " << endl;
    cout << "~> ";
    cin >> opcion1;
    cin.ignore();
    if (opcion1 == 1){
        string nombre;
        system("clear");
        cara_normal();
        cout << "" << endl;
        cout << "bob- hola,soy bob" << endl;
        sleep(1.2);
        cout << "bob- como estas ..." << endl;
        sleep(1.2);
        cout << "bob- dime tu nombre ~>";
        getline(cin,nombre);
        cout << "bob- bien " << nombre << endl;
        sleep(1.2);
        cout << "bob- sere tu guiador para aprender linux" << endl;
        sleep(1.2);
        cout <<"bob- dime,en donde quieres comenzar?" << endl;
        sleep(1.2);
        cout << "1- pwd_ls_cd (aprenderas los comandos basicos)" << endl;
        cout << "2- touch_mkdir_mv (aprende los comandos basicos+)" << endl;
        cout << "3- ls_cd (aprende los comandos basicos++)" << endl;
        cout << "4- sudo apt install_sudo pacman -S (descargaras cosas a traves de la terminal" << endl;
        cout << " " << endl;
    }
}

void cd(){
    system("clear");
    cara_normal();
    int opcion;
    cout << "bob- tienes tu mapa y tus cosas,pero ¿a donde vas a ir ahora?" << endl;
    cout << " " << endl;
    sleep(3);
    while(true){
        cout << "1-pagina 2" << endl;
        cout << "2-pagina 3" << endl;
        cout << "3-pagina 4" << endl;
        cout << "4-pagina 5" << endl;
        cout << "5-pagina 6" << endl;
        cout << "6-pagina 7" << endl;
        cout << "7-pagina 8" << endl;
        cout << "8-pagina 9" << endl;
        cout << "9-pagina 10" << endl;
        cout << "10-pagina 11" << endl;
        cout << " " << endl;
        cout << "~> ";
        cin >> opcion;
        switch(opcion){
        case 1:
            system("clear");
            cara_normal();
            cout << "bob- como vimos antes tenemos una carpeta llamada linux" << endl;
            cout << " " << endl;
            sleep(2);
            break;
        case 2:
            system("clear");
            cara_normal();
            cout << "bob- imagina que la carpeta linux es una puerta con candado" << endl;
            cout << " " << endl;
            sleep(2);
            break;
        case 3:
            system("clear");
            cara_normal();
            cout << "bob- obviamente necesitas una llave,sino no te podras moverte" << endl;
            cout << " " << endl;
            sleep(2);
            break;
        case 4:
            system("clear");
            cara_normal();
            cout << "bob- pero ¿como se consigue esa llave?" << endl;
            cout << " " << endl;
            sleep(2);
            break;
        case 5:
            system("clear");
            cara_normal();
            cout << "bob- en realidad no se consigue,se dice" << endl;
            cout << " " << endl;
            sleep(2);
            break;
        case 6:
            system("clear");
            cara_normal();
            cout << "bob- aca es dodne entra el comando 'cd'" << endl;
            cout << " " << endl;
            sleep(2);
            break;
        case 7:
            system("clear");
            cara_normal();
            cout << "bob- el 'cd' es la llave para abrir la puerta" << endl;
            sleep(2);
            break;
        case 8:
            system("clear");
            cara_normal();
            cout << "bob- para abrir esa peurta tienes que poner la llave y el nombre de la puerta" << endl;
            cout << " " << endl;
            sleep(2);
            break;
        case 9:
            system("clear");
            cara_normal();
            cout << "bob- asi: cd linux" << endl;
            cout << "...........^^.^^^^^" << endl;
            cout << "....llave(cd).puerta(carpeta)" << endl;
            sleep(2);
            break;
        case 10:
            system("clear");
            int opcionn;
            cara_normal();
            cout << "bob- ahora que ya sabes para que sirve el 'cd' pongamoslo a prueba" << endl;
            cout << " " << endl;
            sleep(2);
            cout << "1-continuar" << endl;
            cout << "2-menu" << endl;
            cout << "~> ";
            cin >> opcionn;
            switch(opcionn){
            case 1:
                system("clear");
                int opc;
                cara_normal();
                cout << "bob- para que sirve el comando cd?" << endl;
                cout << " " << endl;
                sleep(2);
                cout << "1-para crear una carpeta" << endl;
                cout << "2-para mover una carpeta" << endl;
                cout << "3-para moverse de ubicacion" << endl;
                sleep(2);
                cout << " " << endl;
                cout << "~> ";
                cin >> opc;
                switch(opc){
                case 1:
                    system("clear");
                    cara_mal();
                    cout << "bob- bueno... hagamos un repaso" << endl;
                    sleep(2);
                    break;
                case 2:
                    system("clear");
                    cara_mal();
                    cout << "bob- bueno... hagamos un repaso" << endl;
                    sleep(2);
                    break;
                case 3:
                    system("clear");
                    cara_bien();
                    cout << "bob- muy bien!!!" << endl;
                    sleep(2);
                    menu();
                }

            }

        }
    }
}





void ls(){
    system("clear");
    cara_normal();
    int opcion;
    cout << "bob- bien,ahora que tienes el mapa ahora falta saber que tienes en tu ubicacion" << endl;
    cout << " " << endl;
    sleep(3);
    while(true){
        cout << "1-pagina 2" << endl;
        cout << "2-pagina 3" << endl;
        cout << "3-pagina 4" << endl;
        cout << "4-pagina 5" << endl;
        cout << "5-pagina 6" << endl;
        cout << "6-pagina 7" << endl;
        cout << "7-pagina 8" << endl;
        cout << " " << endl;
        cout << "~> ";
        cin >> opcion;
        switch(opcion){
        case 1:
            system("clear");
            cara_normal();
            cout << "bob- para saber que tienes al tu alrededor" << endl;
            cout << " " << endl;
            sleep(2);
            cout << "~>";
            break;
        case 2:
            system("clear");
            cara_normal();
            cout << "bob- se utiliza el comando 'ls'" << endl;
            cout << " " << endl;
            sleep(2);
            cout << "~> ";
            break;
        case 3:
            system("clear");
            cara_normal();
            cout << "bob- digamos que en tu ubicacion hay una carpeta llamada linux" << endl;
            cout << " ";
            sleep(2);
            cout << "~> ";
            break;
        case 4:
            system("clear");
            cara_normal();
            cout << "bob- al usar el comando 'ls' te aparecera la carpeta linux" << endl;
            cout << " " << endl;
            sleep(2);
            cout << "~> ";
            break;
        case 5:
            system("clear");
            cara_normal();
            cout << "bob- pero ¿por que?" << endl;
            cout << " " << endl;
            sleep(2);
            cout << "~> ";
            break;
        case 6:
            system("clear");
            cara_normal();
            cout << "bob- proque el comando 'ls' sirve para ver lo que tienes en tu ubicacion" << endl;
            cout << " " << endl;
            sleep(2);
            cout << "~> ";
            break;
        case 7:
            system("clear");
            int opcion;
            cara_normal();
            cout << "bob- ahora que ya sabes para que sirve el comando 'ls' pongamoslo a prueba" << endl;
            cout << " " << endl;
            sleep(2);
            cout << "1-practicar" << endl;
            cout << "2-menu" << endl;
            cout << "~> ";
            cin >> opcion;
            if (opcion == 1){
                system("clear");
                int opp;
                cara_normal();
                cout << "bob- para que sirve el comando 'ls'?" << endl;
                cout << " " << endl;
                sleep(2);
                cout << "1-para saber en donde estas" << endl;
                cout << "2-para ver que tienes en tu ubicacion" << endl;
                cout << "3-para crear un archivo" << endl;
                cout << " " << endl;
                sleep(2);
                cout << "~> ";
                cin >> opp;
                switch(opp){
                case 1:
                    system("clear");
                    cara_mal();
                    cout << "bob- bueno... hagamos un repaso" << endl;
                    sleep(2);
                    break;
                case 2:
                    system("clear");
                    int a;
                    cara_bien();
                    cout << "bob- muy bien!!!" << endl;
                    sleep(2);
                    cout << " " << endl;
                    cout << "bob- quieres hacer la sigueinte preuba?" << endl;
                    sleep(2);
                    cout << " " << endl;
                    cout << "1-si" << endl;
                    cout << "2-menu" << endl;
                    cout << " " << endl;
                    cout << "~> ";
                    cin >> a;
                    switch(a){
                    case 1:
                        system("clear");
                        int jj;
                        cara_normal();
                        cout << "bob- en tu ubicacion hay una carpeta llamda linux, usas el comando 'ls', que te imprime?" << endl;
                        cout << " " << endl;
                        sleep(2);
                        cout << "1-te imprime linux,porque es la carpeta que tienes" << endl;
                        cout << "2-te imprime tu ubicacion" << endl;
                        cout << "3-te imprime tu memoria ram" << endl;
                        cout << " " << endl;
                        sleep(2);
                        cout << "~> ";
                        cin >> jj;
                        switch(jj){
                        case 1:
                            int opp;
                            system("clear");
                            cara_bien();
                            cout << "bob- muy bienn!!!" << endl;
                            sleep(2);
                            cout << " " << endl;
                            cout << "bob- quieres seguir con el comando cd?" << endl;
                            sleep(2);
                            cout << " " << endl;
                            cout << "1-si" << endl;
                            cout << "2-menu" << endl;
                            cout << " " << endl;
                            cout << "~> ";
                            cin >> opp;
                            switch(opp){
                            case 1:
                                cd();
                            case 2:
                                menu();
                            }
                            
                        case 2:
                            system("clear");
                            cara_mal();
                            cout << "bob- bueno... hagamos un repaso" << endl;
                            break;
                        case 3:
                            system("clear");
                            cara_mal();
                            cout << "bob- bueno... hagamos un repaso" << endl;
                            break;
                        }

                    }
                case 3:
                    system("clear");
                    cara_mal();
                    cout << "bob- bueno... hagamos un repaso" << endl;
                    break;
                }

            }
    } 
}
}





void pwd() {
    system("clear");
    int opcion;
    cara_normal();
    cout << "bob- digamos que estas en una isla,estas perdido" << endl;
    cout << " " << endl;
    sleep(2);
    while (true){
        int opcion;
        cout << "1-pagina 2" << endl;
        cout << "2-pagina 3" << endl;
        cout << "3-pagina 4" << endl;
        cout << "4-pagina 5" << endl;
        cout << "5-pagina 6" << endl;
        cout << "6-pagina 7" << endl;
        cout << "7-pagina 8" << endl;
        cout << "8-pagina 9" << endl;
        cout << " " << endl;
        cout << "~> ";
        cin >> opcion;
        switch(opcion){
        case 1:
            system("clear");
            cara_normal();
            cout << "bob- claramente necesitas un mapa" << endl;
            cout << " " << endl;
            sleep(2);
            break;
        case 2:
            system("clear");
            cara_normal();
            cout << "bob- aca es donde entra el comando pwd" << endl;
            cout << " " << endl;
            sleep(2);
            break;
        case 3:
            system("clear");
            cara_normal();
            cout << "bob- el comando pwd es como un mapa" << endl;
            cout << " " << endl;
            sleep(2);
            break;
        case 4:
            system("clear");
            cara_normal();
            cout << "bob- si te encuentras en /home/usuario/Escritorio" << endl;
            cout << " " << endl;
            sleep(2);
            break;
        case 5:
            system("clear");
            cara_normal();
            cout << "bob- al usar el comando pwd te dira /home/usuario/Escritorio" << endl;
            cout << " " << endl;
            sleep(2);
            break;
        case 6:
            system("clear");
            cara_normal();
            cout << "bob- pero ¿por que?" << endl;
            cout << " " << endl;
            sleep(2);
            break;
        case 7:
            system("clear");
            cara_normal();
            cout << "bob- porque el pwd es como un mapa y te dira tu ubicacion actual" << endl;
            sleep(2);
            break;
        case 8:
            int opp;
            system("clear");
            cara_normal();
            cout << "bob- ahora que ya sabes para que sirve pwd,pongamoslo a prueba" << endl;
            cout << " " << endl;
            sleep(2);
            cout << "1-practica" << endl;
            cout << "2-menu" << endl;
            cout << " " << endl;
            cout << "~> ";
            cin >> opp;
            if (opp == 1){
                int op;
                system("clear");
                cara_normal();
                cout << "bob- para que sirve el comando pwd?" << endl;
                cout << " " << endl;
                sleep(2);
                cout << "1-para crear una carpeta" << endl;
                cout << "2-para saber donde estas" << endl;
                cout << "3-para ver archivos escondidos" << endl;
                cout << " " << endl;
                cout << "~> ";
                cin >> op;
                switch(op){
                case 1:
                    system("clear");
                    cara_mal();
                    cout << "bob- bueno... repaza una vez mas" << endl;
                    sleep(2);
                    break;
                case 2:
                    system("clear");
                    int opp;
                    cara_bien();
                    cout << "bob- muy biennn!!!" << endl;
                    sleep(2);
                    cout << "bob- quieres hacer el ultimo desafio?" << endl;
                    cout << " " << endl;
                    sleep(2);
                    cout << "1-si" << endl;
                    cout << "2-menu" << endl;
                    cout << " " << endl;
                    cout << "~> ";
                    cin >> opp;
                    switch(opp){
                    case 1:
                        system("clear");
                        int respuesta;
                        cara_normal();
                        cout << "bob- si estas en /home/usuario/Escritorio y usas el comando pwd que imprime?" << endl;
                        cout << " " << endl;
                        sleep(2);
                        cout << "1-imprime /home/usuario/escritorio" << endl;
                        cout << "2-no te imprime nada,pwd es para crear carpetas" << endl;
                        cout << "3-imprime /home/usuario/Escritorio" << endl;
                        cout << " " << endl;
                        cout << "~> ";
                        cin >> respuesta;
                        switch(respuesta){
                        case 1:
                            system("clear");
                            cara_mal();
                            cout << "bob- bueno... leelo mejor,vamos al menu" << endl;
                            sleep(2);
                            break;
                        case 2:
                            system("clear");
                            cara_mal();
                            cout << "bob- bueno... hagamos un repaso" << endl;
                            sleep(2);
                            break;
                        case 3:
                            system("clear");
                            int o;
                            cara_bien();
                            cout << "bob- muy bienn!!!" << endl;
                            sleep(2);
                            system("clear");
                            cara_normal();
                            cout << " " << endl;
                            cout << "bob- quieres seguir con el comando ls?" << endl;
                            sleep(2);
                            cout << " " << endl;
                            cout << "1-si" << endl;
                            cout << "2-menu" << endl;
                            cout << " " << endl;
                            cout << "~> ";
                            cin >> o;
                            switch(o){
                            case 1:
                                ls();
                            }
                            
                        }
                    case 2:
                        system("clear");
                        menu();

                    }
                    break;
                case 3:
                    system("clear");
                    cara_mal();
                    cout << "bob- bueno... repaza una vez mas" << endl;
                    sleep(2);
                    break;
                case 4:
                    system("clear");
                    int opcio;
                    cara_normal();
                    cout << "bob- estas en la ruta /home/usuario/Escritorio y usas el comando pwd,que imprime?" << endl;
                    cout << " " << endl;
                    cout << "1-imprime /home/usuario/escritorio" << endl;
                    cout << "2-no imprime nada,el comando pwd sirve para crear carpetas" << endl;
                    cout << "imprime '/home/usuario/Escritorio" << endl;
                    sleep(2);
                    cout << "~> ";
                    cin >> opcio;
                    switch(opcio){
                    case 1:
                        system("clear");
                        cara_mal();
                        cout << "bob-bueno... quisas no leeiste bien una letra,repasa denuevoo" << endl;
                        sleep(2);
                        break;
                    case 2:
                        system("clear");
                        cara_mal();
                        cout << "bob- bueno... quisas neceitas un repaso" << endl;
                        sleep(2);
                        break;
                    case 3:
                        system("clear");
                        int op;
                        cara_bien();
                        cout << "bob- muy biennn!!!" << endl;
                        sleep(2);
                        cout << " " << endl;
                        cout << "bob- quieres aprender el ls?" << endl;
                        cout << " " << endl;
                        cout << "1-si" << endl;
                        cout << "2-menu" << endl;
                        cout << "~> ";
                        cin >> op;
                        switch(op){
                        case 1:
                            ls();
                            break;
                        case 2:
                            menu();
                            break;
                        }
                        break;
                    }

                }

            }else{
                system("clear");
                menu();
            }
        }


}
}

void mv(){
    system("clear");
    int res;
    cara_normal();
    cout << "bob- ahora que ya sabes crear carpetas y archivos" << endl;
    sleep(2);
    while(true){
        cout << " " << endl;
        cout << "1-pagina 2" << endl;
        cout << "2-pagina 3" << endl;
        cout << "3-pagina 4" << endl;
        cout << "4-pagina 5" << endl;
        cout << "5-pagina 6" << endl;
        cout << "6-pagina 7" << endl;
        cout << "7-pagina 8" << endl;
        cout << "~> ";
        cin >> res;
        switch(res){
        case 1:
            system("clear");
            cara_normal();
            cout << "bob- digamos que creaste un archivo importante" << endl;
            sleep(2);
            break;
        case 2:
            system("clear");
            cara_normal();
            cout << "bob- claramente quieres guardar ese archivo en una carpeta para no perderlo" << endl;
            sleep(2);
            break;
        case 3:
            system("clear");
            cara_normal();
            cout << "bob- aca es donde entra el comando 'mv'" << endl;
            sleep(2);
            break;
        case 4:
            system("clear");
            cara_normal();
            cout << "bob- el comando mv sirve para mover cualquier tipo de archivo y carpeta" << endl;
            sleep(2);
            break;
        case 5:
            system("clear");
            cara_normal();
            cout << "bob- se usa asi: 'mv [tu carpeta/archivo] [ruta/carpeta]'" << endl;
            sleep(2);
            break;
        case 6:
            system("clear");
            cara_normal();
            cout << "bob- es como arrastrar un archivo hacia una carpeta,pero desde la terminal" << endl;
            sleep(2);
            break;
        case 7:
            system("clear");
            int resp;
            cara_normal();
            cout << "bob- ahora que ya sabes como usar mv pongamoslo a prueba" << endl;
            sleep(2);
            cout << " " << endl;
            cout << "1-continuar" << endl;
            cout << "2-menu" << endl;
            cout << "~> ";
            cin >> resp;
            switch(resp){
            case 1:
                system("clear");
                int pp;
                cara_normal();
                cout << "bob- para que sirve el comando 'mv'" << endl;
                cout << " " << endl;
                sleep(2);
                cout << "1-para mover un archivo/carpeta a una ruta especifica" << endl;
                cout << "2-para crear archivos de cualquier tipo" << endl;
                cout << "3-para crear carpetas de cualquier tipo meno .zip" << endl;
                cout << "~> ";
                cin >> pp;
                switch(pp){
                case 1:
                    system("clear");
                    cara_bien();
                    cout << "bob- muy bien!!!" << endl;
                    sleep(2);
                    break;
                case 2:
                    system("clear");
                    cara_mal();
                    cout << "bob- bueno... hagamos un repaso" << endl;
                    sleep(2);
                    break;
                case 3:
                    system("clear");
                    cara_mal();
                    cout << "bob- bueno... hagamos un repaso" << endl;
                    sleep(2);
                    break;
                }
            } 
    }
}
}

void mkdir(){
    system("clear");
    int res;
    cara_normal();
    cout << "bob- ahora que ya peudes crear archivos,hay que ordernarlos con carpetas" << endl;
    cout << " " << endl;
    sleep(2);
    while(true){
        cout << "1-pagina 2" << endl;
        cout << "2-pagina 3" << endl;
        cout << "3-pagina 4" << endl;
        cout << "4-pagina 5" << endl;
        cout << "5-pagina 6" << endl;
        cout << "6-pagina 7" << endl;
        cout << "7-pagina 8" << endl;
        cout << "8-pagina 9" << endl;
        cout << " " << endl;
        cout << "~> ";
        cin >> res;
        switch(res){
        case 1:
            system("clear");
            cara_normal();
            cout << "bob- digamos que tienes muchos archivos en tu escritorio" << endl;
            cout << " " << endl;
            sleep(2);
            break;
        case 2:
            system("clear");
            cara_normal();
            cout << "bob- claramente los quieres ordenar con una carpeta,asi no moslestan mucho" << endl;
            cout << " " << endl;
            sleep(2);
            break;
        case 3:
            system("clear");
            cara_normal();
            cout << "bob- aca es donde entra el comando 'mkdir'" << endl;
            cout << " " << endl;
            sleep(2);
            break;
        case 4:
            system("clear");
            cara_normal();
            cout << "bob- el comando 'mkdir' sirve para crear carpetas" << endl;
            cout << " " << endl;
            sleep(2);
            break;
        case 5:
            system("clear");
            cara_normal();
            cout << "bob- asi se usa: 'mkdir carpeta_archivos'" << endl;
            cout << " " << endl;
            sleep(2);
            break;
        case 6:
            system("clear");
            cara_normal();
            cout << "bob- al poner mkdir puedes ponerle un nombre a la carpeta" << endl;
            cout << " " << endl;
            sleep(2);
            break;
        case 7:
            system("clear");
            cara_normal();
            cout << "bob- 'mkdir [el_nombre_de_carpeta]" << endl;
            cout << " " << endl;
            sleep(2);
            break;
        case 8:
            system("clear");
            int pp;
            cara_normal();
            cout << "bob- ahora que ya sabes para que sirve el comando mkdir pongamoslo a prueba" << endl;
            cout << " " << endl;
            sleep(2);
            cout << "1-practica" << endl;
            cout << "2-menu" << endl;
            cout << " " << endl;
            cout << "~> ";
            cin >> pp;
            switch(pp){
            case 1:
                system("clear");
                int hh;
                cara_normal();
                cout << "bob- tienes muchos archivos desordenados,como crearias una carpeta para ponerlos ahi?" << endl;
                cout << " " << endl;
                sleep(2);
                cout << "1-usaria el comando touch" << endl;
                cout << "2-usaria el comando ls" << endl;
                cout << "3-usaria el comando mkdir" << endl;
                cout << " " << endl;
                cout << "~> ";
                cin >> hh;
                switch(hh){
                case 1:
                    system("clear");
                    cara_mal();
                    cout << "bob- bueno... hagamos un repaso" << endl;
                    cout << " " << endl;
                    sleep(2);
                    break;
                case 2:
                    system("clear");
                    cara_mal();
                    cout << "bob- bueno... hagamos un repaso" << endl;
                    cout << " " << endl;
                    sleep(2);
                    break;
                case 3:
                    system("clear");
                    int ppp;
                    cara_bien();
                    cout << "bob- muy bien!!!" << endl;
                    cout << " " << endl;
                    sleep(2);
                    system("clear");
                    cara_normal();
                    cout << "bob- quieres seguir con el comando mv?" << endl;
                    cout << " " << endl;
                    sleep(2);
                    cout << "1-si" << endl;
                    cout << "2-menu" << endl;
                    cout << "~> ";
                    cin >> ppp;
                    switch(ppp){
                    case 1:
                        mv();
                    case 2:
                        menu();
                    }
                }

            }

        }
    }
}


void touch() {
    system("clear");
    int opc;
    cara_normal();
    cout << "bob- vamos a hablar sobre archivos y carpetas" << endl;
    cout << " " << endl;
    sleep(2);
    while(true){
        cout << "1-pagina 2" << endl;
        cout << "2-pagina 3" << endl;
        cout << "3-pagina 4" << endl;
        cout << "4-pagina 5" << endl;
        cout << "5-pagina 6" << endl;
        cout << "6-pagina 7" << endl;
        cout << " " << endl;
        cout << "~> ";
        cin >> opc;
        switch(opc){
        case 1:
            system("clear");
            cara_normal();
            cout << "bob- imaginate que tienes que crear un archivo .txt" << endl;
            cout << " " << endl;
            sleep(2);
            break;
        case 2:
            system("clear");
            cara_normal();
            cout << "bob- para crear ese archivo .txt es bastante facil" << endl;
            cout << " " << endl;
            sleep(2);
            break;
        case 3:
            system("clear");
            cara_normal();
            cout << "bob- solo se utiliza el comando 'touch'" << endl;
            cout << " " << endl;
            sleep(2);
            break;
        case 4:
            system("clear");
            cara_normal();
            cout << "bob- el comando touch se usa asi: 'touch archivo.txt'" << endl;
            cout << " " << endl;
            sleep(2);
            break;
        case 5:
            system("clear");
            cara_normal();
            cout << "bob- aparte de crear archivos .txt tambien puedes crear .cpp,.php,.md, etc..." << endl;
            cout << " " << endl;
            sleep(2);
            break;
        case 6:
            system("clear");
            int oppp;
            cara_normal();
            cout << "bob- ahora que ya sabes para que sirve el comando 'touch' pongamoslo a prueba" << endl;
            cout << " " << endl;
            sleep(2);
            cout << "1-practica" << endl;
            cout << "2-menu" << endl;
            cout << " " << endl;
            cout << "~> ";
            cin >> oppp;
            switch(oppp){
            case 1:
                system("clear");
                int res;
                cara_normal();
                cout << "bob- tu jefe te pide que crearas un archivo .txt, que comando usarias?" << endl;
                cout << " " << endl;
                sleep(2);
                cout << "1-usaria el comando touching para crearlo" << endl;
                cout << "2-usaria el comando mv para crearlo" << endl;
                cout << "3-usaria el comando touch para crearlo" << endl;
                cout << " " << endl;
                cout << "~> ";
                cin >> res;
                switch(res){
                case 1:
                    system("clear");
                    cara_mal();
                    cout << "bob- bueno... hagamos un repaso" << endl;
                    sleep(2);
                    break;
                case 2:
                    system("clear");
                    cara_mal();
                    cout << "bob- bueno... hagamos un repaso" << endl;
                    sleep(2);
                    break;
                case 3:
                    system("clear");
                    int ress;
                    cara_bien();
                    cout << "bob- muy bien!!!" << endl;
                    sleep(2);
                    cout << "bob- quieres seguir con mkdir?" << endl;
                    sleep(2);
                    cout << " " << endl;
                    cout << "1-si" << endl;
                    cout << "2-menu" << endl;
                    cout << " " << endl;
                    cout << "~> ";
                    cin >> ress;
                    switch(ress){
                    case 1:
                        mkdir();
                    case 2:
                        menu();
                    }

                }
            case 2:
                menu();

            }



        }
    }
}

void ls_plus() {
    system("clear");
    cara_normal();
    int op;
    cout << "bob- ahora que ya puedes ir hacia atras, te enseñare a buscar a profundidad" << endl;
    sleep(2);
    cout << " " << endl;
    while(true){
        cout << " " << endl;
        cout << "1-pagina 2" << endl;
        cout << "2-pagina 3" << endl;
        cout << "3-pagina 4" << endl;
        cout << "4-pagina 5" << endl;
        cout << "5-pagina 6" << endl;
        cout << "6-pagina 7" << endl;
        cout << " " << endl;
        cin >> op;
        switch(op) {
        case 1:
            system("clear");
            cara_normal();
            cout << "bob- como ya vimos ls sirve para ver lo que tienes en tu ruta" << endl;
            sleep(2);
            break;
        case 2:
            system("clear");
            cara_normal();
            cout << "bob- pero que pasa con las carpetas que comeinzan con un punto en su nombre?" << endl;
            sleep(2);
            break;
        case 3:
            system("clear");
            cara_normal();
            cout << "bob- exacto,esas carpetas no se ven con usar el comando ls" << endl;
            sleep(2);
            break;
        case 4:
            system("clear");
            cara_normal();
            cout << "bob- entonces como lo vemos si no se peude con ls?" << endl;
            sleep(2);
            break;
        case 5:
            system("clear");
            cara_normal();
            cout << "bob- facil,usando el mismo comando pero con un '-a'" << endl;
            sleep(2);
            break;
        case 6:
            system("clear");
            cara_normal();
            cout << "bob- asi: 'ls -a', el '-a' es de all (todo)" << endl;
            sleep(2);
            break;
        case 7:
            system("clear");
            int kk;
            cara_normal();
            cout << "bob- ahora que ya sabes para que sirve 'ls -a' pongamoslo a prueba" << endl;
            cout << " " << endl;
            sleep(2);
            cout << "1-continuar" << endl;
            cout << "2-menu" << endl;
            cout << " " << endl;
            cout << "~> ";
            cin >> kk;
            switch(kk){
            case 1:
                system("clear");
                int inn;
                cara_normal();
                cout << "bob- quieres encontrar una carpeta que comienza con un '.', que comando usas?" << endl;
                cout << " " << endl;
                sleep(2);
                cout << "1-usaria cd .." << endl;
                cout << "2-usaria ls -a" << endl;
                cout << "3-usaria mv" << endl;
                cout << " " << endl;
                cout << "~> ";
                cin >> inn;
                switch(inn) {
                case 1:
                    system("clear");
                    cara_mal();
                    cout << "bob- bueno... hagamos un repaso" << endl;
                    sleep(2);
                    break;
                case 2:
                    system("clear");
                    cara_bien();
                    cout << "bob- muy bienn!!!" << endl;
                    sleep(2);
                    cout << " " << endl;
                    int ff;
                    system("clear");
                    cara_normal();
                    cout << "bob- quieres hacer el segundo desafio?" << endl;
                    cout << " " << endl;
                    sleep(2);
                    cout << "1-si" << endl;
                    cout << "2-menu" << endl;
                    cout << " " << endl;
                    cout << "~> ";
                    cin >> ff;
                    switch(ff){
                    case 1:
                        system("clear");
                        int hh;
                        cara_normal();
                        cout << "bob- tienes una carpeta llamda 'linux' y otra llamda '.linux', usas el comando 'ls-a' que imprime?" << endl;
                        cout << " " << endl;
                        sleep(4);
                        cout << "1-imprimiria '.carpeta' y 'linux" << endl;
                        cout << "2-imprimiria '.linux' y 'linux'" << endl;
                        cout << "3-imprimiria nada" << endl;
                        cout << " " << endl;
                        cout << "~> ";
                        cin >> hh;
                        switch(hh) {
                        case 1:
                            system("clear");
                            cara_mal();
                            cout << "bob- bueno... hagamos un repaso" << endl;
                            sleep(2);
                            break;
                        case 2:
                            system("clear");
                            cara_bien();
                            cout << "bob- muy bienn!!!" << endl;
                            sleep(2);
                        case 3:
                            system("clear");
                            cara_mal();
                            cout << "bob- bueno... hagamos un repaso" << endl;
                            sleep(2);
                            break;
                        }
                    case 2:
                        menu();

                    }
                case 3:
                    system("clear");
                    cara_mal();
                    cout << "bob- bueno... hagamos un repaso" << endl;
                    sleep(2);
                    break;
                }
            case 2:
                menu();

            }

        }

    }
}

void cd_plus() {
    system("clear");
    cara_normal();
    int op;
    cout << "bob- como vimos antes el comando cd es para ir en directorio a directorio" << endl;
    sleep(3);
    cout << " " << endl;
    while(true){
        cout << " " << endl;
        cout << "1-pagina 2" << endl;
        cout << "2-pagina 3" << endl;
        cout << "3-pagina 4" << endl;
        cout << "4-pagina 5" << endl;
        cout << "5-pagina 6" << endl;
        cout << "6-pagina 7" << endl;
        cout << "7-pagina 8" << endl;
        cout << " " << endl;
        cout << "~> ";
        cin >> op;
        switch(op){
        case 1:
            system("clear");
            cara_normal();
            cout << "bob- ahora vamos a ver el mismo comando, pero diferente" << endl;
            sleep(2);
            break;
        case 2:
            system("clear");
            cara_normal();
            cout << "bob- ahora en vez de avanzar, retrocederemos" << endl;
            sleep(2);
            break;
        case 3:
            system("clear");
            cara_normal();
            cout << "bob- cuando avanzas pero te equivocaste de carpeta/ruta" << endl;
            sleep(2);
            break;
        case 4:
            system("clear");
            cara_normal();
            cout << "bob- obviamente tienes que ir hacia atras" << endl;
            sleep(2);
            break;
        case 5:
            system("clear");
            cara_normal();
            cout << "bob- entonces para ir hacia atras se usa cd pero con dos puntos" << endl;
            sleep(2);
            break;
        case 6:
            system("clear");
            cara_normal();
            cout << "bob- asi: 'cd ..',esto sirve para volver hacia atras" << endl;
            sleep(2);
            break;
        case 7:
            system("clear");
            int k;
            cara_normal();
            cout << "bob- ahora que ya sabes para que sirve 'cd..' pongamoslo a prueba" << endl;
            sleep(3);
            cout << "1-practica" << endl;
            cout << "2-menu" << endl;
            cout << " " << endl;
            cout << "~> ";
            cin >> k;
            switch(k){
            case 1:
                system("clear");
                int res;
                cara_normal();
                cout << "bob- te equiocaste de directorio y quieres ir atras,que comando usas?" << endl;
                cout << " " << endl;
                sleep(2);
                cout << "1-usaria pwd" << endl;
                cout << "2-usaria ls" << endl;
                cout << "3-usaria cd .." << endl;
                cout << " " << endl;
                cout << "~> ";
                cin >> res;
                switch(res){
                case 1:
                    system("clear");
                    cara_mal();
                    cout << "bob- bueno... hagamos un repaso" << endl;
                    sleep(2);
                    break;
                case 2:
                    system("clear");
                    cara_mal();
                    cout << "bob- bueno... hagamos un repaso" << endl;
                    sleep(2);
                    break;
                case 3:
                    system("clear");
                    cara_bien();
                    cout << "bob- muy bienn!!!" << endl;
                    sleep(2);
                    system("clear");
                    int gg;
                    cara_normal();
                    cout << "bob- quieres hacer el ultimo desafio?" << endl;
                    cout << " " << endl;
                    cout << "1-si" << endl;
                    cout << "2-menu" << endl;
                    cout << " " << endl;
                    cout << "~> ";
                    cin >> gg;
                    switch(gg){
                    case 1:
                        system("clear");
                        int zz;
                        cara_normal();
                        cout << "bob- estas en la ruta '/home/Escritorio', usas 'cd ..',en que ruta estaras ahora?" << endl;
                        cout << " " << endl;
                        sleep(2);
                        cout << "1-estaria en la ruta '/home/Escritorio'" << endl;
                        cout << "2-estaria en la ruta '/home/Escritorio/cd ..'" << endl;
                        cout << "3-estaria en la ruta '/home/'" << endl;
                        cout << " " << endl;
                        cout << "~> ";
                        cin >> zz;
                        switch(zz){
                        case 1:
                            system("clear");
                            cara_mal();
                            cout << "bob- bueno... hagamos un repaso" << endl;
                            sleep(2);
                            break;
                        case 2:
                            system("clear");
                            cara_mal();
                            cout << "bob- bueno... hagamos un repaso" << endl;
                            sleep(2);
                            break;
                        case 3:
                            system("clear");
                            cara_bien();
                            cout << "bob- muy bienn!!!" << endl;
                            sleep(2);
                            system("clear");
                            int hf;
                            cara_normal();
                            cout << "bob- quieres seguir con ls?" << endl;
                            sleep(2);
                            cout << " " << endl;
                            cout << "1-si" << endl;
                            cout << "2-menu" << endl;
                            cout << " " << endl;
                            cout << "~> ";
                            cin >> hf;
                            switch(hf){
                            case 1:
                                ls_plus();
                            case 2:
                                menu();
                            }

                        }
                    }

                }

            }


        }
    }
}

void pacman(){
    system("clear");
    int hh;
    cara_normal();
    cout << "bob- ahora te esneñare como seria pero con arch linux o una distribucion de arch" << endl;
    sleep(2);
    cout << " " << endl;
    while(true){
        cout << " " << endl;
        cout << "1-pagina 2" << endl;
        cout << "2-pagina 3" << endl;
        cout << "3-pagina 4" << endl;
        cout << "4-pagina 5" << endl;
        cout << "5-pagina 6" << endl;
        cout << "6-pagina 7" << endl;
        cout << "~> ";
        cin >> hh;
        switch(hh){
        case 1:
            system("clear");
            cara_normal();
            cout << "bob- para hacerlo en arch es casi lo mismo" << endl;
            sleep(2);
            break;
        case 2:
            system("clear");
            cara_normal();
            cout << "bob- solo que arch usa otro paquete" << endl;
            sleep(2);
            break;
        case 3:
            system("clear");
            cara_normal();
            cout << "bob- ese paquete es pacman" << endl;
            sleep(2);
            break;
        case 4:
            system("clear");
            cara_normal();
            cout << "bob- se usa asi 'pacman -S vscode'" << endl;
            sleep(2);
            break;
        case 5:
            system("clear");
            cara_normal();
            cout << "bob- y si no eres usuario root 'sudo pacman -S vscode'" << endl;
            sleep(2);
            break;
        case 6:
            system("clear");
            int y;
            cara_normal();
            cout << "bob- ahora que ya sabes como descargar cosas desde la terminar en arch pongamoslo a prueba" << endl;
            cout << " " << endl;
            sleep(2);
            cout << "1-continuar" << endl;
            cout << "2-menu" << endl;
            cout << " " << endl;
            cout << "~> ";
            cin >> y;
            switch(y){
            case 1:
                system("clear");
                int ggg;
                cara_normal();
                cout << "bob- que comando usarias si quieres instalar algo en la terminal de arch linux" << endl;
                sleep(2);
                cout << " " << endl;
                cout << "1-usaria 'sudo apt install'" << endl;
                cout << "2-usaria 'apt install'" << endl;
                cout << "3-usaria 'pacman -S'" << endl;
                cout << " " << endl;
                cout << "~> ";
                cin >> ggg;
                switch (ggg) {
                case 1:
                    system("clear");
                    cara_mal();
                    cout << "bob- bueno... hagamos un repaso" << endl;
                    sleep(2);
                    break;
                case 2:
                    system("clear");
                    cara_mal();
                    cout << "bob- bueno... hagamos un repaso" << endl;
                    sleep(2);
                    break;
                case 3:
                    system("clear");
                    int dos;
                    cara_bien();
                    cout << "bob- muy bienn!!!" << endl;
                    sleep(2);
                    system("clear");
                    cara_normal();
                    cout << "bob- quieres hacer el ultimo desafio?" << endl;
                    cout << " " << endl;
                    sleep(2);
                    cout << "1-si" << endl;
                    cout << "2-menu" << endl;
                    cout << "~> ";
                    cin >> dos;
                    switch (dos) {
                    case 1:
                        system("clear");
                        int u;
                        cara_normal();
                        cout << "bob- usas el comando 'sudo pacman -S vscode', que descarga?" << endl;
                        cout << " " << endl;
                        sleep(2);
                        cout << "1- descarga sublime text" << endl;
                        cout << "2- descarga codevs" << endl;
                        cout << "3- descarga vscode" << endl;
                        cout << " " << endl;
                        cout << "~> ";
                        cin >> u;
                        switch (u){
                        case 1:
                            system("clear");
                            cara_mal();
                            cout << "bob- bueno... hagamos un repaso" << endl;
                            sleep(2);
                            break;
                        case 2:
                            system("clear");
                            cara_mal();
                            cout << "bob- bueno... hagamos un repaso" << endl;
                            sleep(2);
                            break; 
                        case 3:
                            system("clear");
                            cara_bien();
                            cout << "bob- muy bienn!!!" << endl;
                            sleep(2);
                            system("clear");
                            cout << "========================" << endl;
                            cout << "---LECCION TERMINADA---" << endl;
                            cout << "========================" << endl;
                            menu(); 
                        }
                    case 2:
                        menu();
                    }
                                
                }
            case 2:
                menu();
            }



        }

    }
}

void apt(){
    system("clear");
    int apt;
    cara_normal();
    cout << "bob- ahora aprenderemos a descargar cosas desde la terminar" << endl;
    sleep(2);
    cout << " " << endl;
    while (true){
        cout << " " << endl;
        cout << "1-pagina 2" << endl;
        cout << "2-pagina 3" << endl;
        cout << "3-pagina 4" << endl;
        cout << "4-pagina 5" << endl;
        cout << "5-pagina 6" << endl;
        cout << "6-pagina 7" << endl;
        cout << "~> ";
        cin >> apt;
        switch (apt){
        case 1:
            system("clear");
            cara_normal();
            cout << "bob- digamos que quieres descargar vscode (Visual Studio Code)" << endl;
            sleep(2);
            break;
        case 2:
            system("clear");
            cara_normal();
            cout << "bob- para eso usaremos nuestro paquete de recurso 'apt'" << endl;
            sleep(2);
            break;
        case 3:
            system("clear");
            cara_normal();
            cout << "bob- para descargar con ese paquete se usa: 'apt install vscode'" << endl;
            sleep(2);
            break;
        case 4:
            system("clear");
            cara_normal();
            cout << "bob- pero si no sos usuario root se usa sudo, asi: 'sudo apt install vscode'" << endl;
            sleep(2);
            break;
        case 5:
            system("clear");
            cara_normal();
            cout << "bob- tambien sirve para actualizar el sistema" << endl;
            sleep(2);
            break;
        case 6:
            system("clear");
            cara_normal();
            cout << "bob- asi: 'apt upgrade' o si sos usuario normal: 'sudo apt upgrade'" << endl;
            sleep(2);
            break;
        case 7:
            system("clear");
            int hh;
            cara_normal();
            cout << "bob- ahora que ya sabes como descargar cosas en la terminal pongamoslo a prueba" << endl;
            sleep(2);
            cout << " " << endl;
            cout << "1-continuar" << endl;
            cout << "2-menu" << endl;
            cout << " " << endl;
            cout << "~> ";
            cin >> hh;
            switch(hh){
            case 1:
                system("clear");
                int ff;
                cara_normal();
                cout << "bob- para que sirve el comando 'apt install'?" << endl;
                sleep(2);
                cout << " " << endl;
                cout << "1-para moverte en ruta a ruta" << endl;
                cout << "2-para crar carpetas" << endl;
                cout << "3-para descargar cosas desde la terminal" << endl;
                cout << " " << endl;
                cout << "~> ";
                cin >> ff;
                switch (ff) {
                case 1:
                    system("clear");
                    cara_mal();
                    cout << "bob- bueno... hagamos un repaso" << endl;
                    sleep(2);
                    break;
                case 2:
                    system("clear");
                    cara_mal();
                    cout << "bob- bueno... hagamos un repaso" << endl;
                    sleep(2);
                    break;
                case 3:
                    system("clear");
                    int gg;
                    cara_bien();
                    cout << "bob- muy bienn!!!" << endl;
                    sleep(2);
                    system("clear");
                    cara_normal();
                    cout << "bob- quieres seguir con la ultima prueba?" << endl;
                    sleep(2);
                    cout << " " << endl;
                    cout << "1-si" << endl;
                    cout << "2-menu" << endl;
                    cout << " " << endl;
                    cout << "~> ";
                    cin >> gg;
                    switch (gg){
                    case 1:
                        system("clear");
                        int kk;
                        cara_normal();
                        cout << "bob- quieres actualizar el sistema,que comando usas? (no eres usuario root)" << endl;
                        cout << " " << endl;
                        sleep(2);
                        cout << "1-usaria 'apt upgrade'" << endl;
                        cout << "2-usaria 'sudo pacman -S'" << endl;
                        cout << "3-usaria 'sudo apt upgrade'" << endl;
                        cout << " " << endl;
                        cout << "~> ";
                        cin >> kk;
                        switch(kk){
                        case 1:
                            system("clear");
                            cara_mal();
                            cout << "recuerda que no eres usuario root... hagamos un repaso" << endl;
                            sleep(2);
                            break;
                        case 2:
                            system("clear");
                            cara_mal();
                            cout << "bob- recuerda que esto no es arch... hagamos un repaso" << endl;
                            sleep(2);
                            break;
                        case 3:
                            system("clear");
                            int s;
                            cara_bien();
                            cout << "bob- muy bienn!!!" << endl;
                            sleep(2);
                            system("clear");
                            cara_normal();
                            cout << "bob- quieres seguir con descargar en la terminal desde arch linux" << endl;
                            cout << " " << endl;
                            sleep(2);
                            cout << "1-si" << endl;
                            cout << "2-menu" << endl;
                            cout << " " << endl;
                            cout << "~> ";
                            cin >> s;
                            switch(s){
                            case 1:
                                pacman();
                            case 2:
                                menu();
                            }


                        }
                    case 2:
                        menu();
                    }

                }
            case 2:
                menu();
            }
        }
    }

}


int main() {
    system("clear");
    int op;
    menu();
    cout << "~> ";
    cin >> op;
    switch(op){
    case 1:
        pwd();
    case 2:
        touch();
    case 3:
        cd_plus();
    }
}