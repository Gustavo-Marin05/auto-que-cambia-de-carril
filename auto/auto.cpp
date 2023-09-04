#include <iostream>

using namespace std;

class Car
{
private:
    int pocision; // Posición en el eje x
    char autito;
public:
   
    


    Car(int posi,char carac) {
        pocision = posi;
        autito = carac;
    }

    
    



    int moverAdelate() {
        if (pocision<100) {
            return pocision++;
        }
    }


    int moverAtras() {
        if (pocision > 0) {
            return pocision--;
        }
    }

    void movimiento() {

        
        for (int i = 0; i < pocision;i++) {
            cout << ' ' ;
        }
        cout << autito << endl;
        
    }

    void cambio(int op) {
        
        

        if (op == 11) {

            cout << "-------------------------------------------------------------" << endl;
            cout << "11"; movimiento();
            cout << "-------------------------------------------------------------" << endl;
            cout << "21" << endl;
            cout << "-------------------------------------------------------------" << endl;
            cout << "31" << endl;
            cout << "-------------------------------------------------------------" << endl;

        }else
        if (op == 21) {

            cout << "-------------------------------------------------------------" << endl;
            cout << "11"<<endl ;
            cout << "-------------------------------------------------------------" << endl;
            cout << "21"; movimiento();
            cout << "-------------------------------------------------------------" << endl;
            cout << "31" << endl;
            cout << "-------------------------------------------------------------" << endl;

        }else
        if (op == 31) {

            cout << "-------------------------------------------------------------" << endl;
            cout << "11" << endl;
            cout << "-------------------------------------------------------------" << endl;
            cout << "21"<<endl;
            cout << "-------------------------------------------------------------" << endl;
            cout << "31"; movimiento();
            cout << "-------------------------------------------------------------" << endl;

        }



    }

    void defecto(int op) {


        
        /*cout << "-------------------------------------------------------------" << endl;
        cout << "11" << endl;
        cout << "-------------------------------------------------------------" << endl;
        cout << "21"; movimiento();
        cout << "-------------------------------------------------------------" << endl;
        cout << "31" << endl;
        cout << "-------------------------------------------------------------" << endl;*/

        cambio(op);
        
        
        
        
    }

    
    



};






int main() {
    
    Car c(0,'*');
   



    int opcion;
    

    while (true)
    {
        
        

        cout << "presione" << endl;
        cout << "(1) para avanzar adelante" << endl;
        cout << "(2) para retroceder" << endl;
        cout << "(3) camvio" << endl;
        /*cout << "(3) carril 1" << endl;
        cout << "(4) carril 2" << endl;
        cout << "(5) carril 3" << endl;*/
        ;
        cin >> opcion;
        
        
        c.defecto(opcion);

        switch (opcion)
        {
        case 1:
            
            
            c.moverAdelate();
            

            break;
        case 2:
            
            c.moverAtras();
            
            break;
        case 3:
            cout << "ingrese el cambio de carril" << endl;
            cin >> opcion;
            c.defecto(opcion);
            break;
        default:
            break;
        }
        



    }
    
    return 0;
}
