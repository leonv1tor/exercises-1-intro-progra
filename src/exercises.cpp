
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1, string s2, string s3) {
<<<<<<< HEAD
#include <iostream>
#include <string>

using namespace std;

void exercise_1() {
    

=======
if (s1 < s2 && s1 < s3) {
    cout << s1;
    } else if (s2 < s1 && s2 < s3) {
    cout << s2;
    } else {
    cout << s3;
    }
>>>>>>> 52ce6cc7e13938f775b93ee3ad7062d08644c47d
}

<<<<<<< HEAD
int main() {
    exercise_1();
    return 0;

}


 

}

void exercise_2(double A, double B, double C) {
  // TODO: YOUR CODE HERE
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Ingrese los coeficientes A, B y C separados por espacios: ";
    double A, B, C;
    cin >> A >> B >> C;

    double discriminante = B * B - 4 * A * C;

    if (discriminante > 0) {
        double raiz1 = (-B + sqrt(discriminante)) / (2 * A);
        double raiz2 = (-B - sqrt(discriminante)) / (2 * A);
        cout << "Las raices reales distintas son: " << raiz1 << " y " << raiz2 << endl;
    } else if (discriminante == 0) {
        double raiz = -B / (2 * A);
        cout << "La raiz doble es: " << raiz << endl;
    } else {
        cout << "No hay raices reales" << endl;
    }

    return 0;
=======




void exercise_2(double A, double B, double C){
  double D = B * B - 4 * A * C ;
    if (D > 0 && A != 0)
    {
         double d_sqrt = sqrt (D);
         double x1 = (-B + d_sqrt)  / (2*A);
         double x2 = (-B - d_sqrt) /  (2*A); 
         cout<<x1<<" "<<x2<<endl;
    }
    else if (D==0 && A != 0)
    {
    double d_sqrt = sqrt (D);
    double x1 = (-B + d_sqrt) / (2*A);
    cout<<x1<<endl;
    }
    else if(A==0 && B!=0)
    {
          cout<< (-1*(C))/B <<endl; 
    }
    else if (A!=0 && B==0 )
    {
        cout<< sqrt (C/A) << endl; 
    }
    else
    {
          cout<<"";
    }

}


>>>>>>> 52ce6cc7e13938f775b93ee3ad7062d08644c47d
void exercise_3(int a, int b) {
<<<<<<< HEAD
#include <iostream>

using namespace std;

int main() {
    int A, B;
    
    cout << "Ingrese el dividendo (A): ";
    cin >> A;

    cout << "Ingrese el divisor (B): ";
    cin >> B;

    if (B == 0) {
        cout << "Error: No se puede dividir por cero." << endl;
    } else {
        int cociente = A / B;
        cout << "La parte entera del cociente de " << A << " entre " << B << " es: " << cociente << endl;
    }

    return 0;
=======
   if (b == 0)
        cout << "Impossible" << endl;
    else
        cout << a / b << endl;
>>>>>>> 52ce6cc7e13938f775b93ee3ad7062d08644c47d
}




}

void exercise_4(double n, double a, double b, double x, double y) {
<<<<<<< HEAD
  // 
#include <iostream>

using namespace std;

int main() {
    // 
    double N, A, B, X, Y;
    cout << "Ingrese el costo original del producto: ";
    cin >> N;
    cout << "Ingrese el límite A para aplicar el descuento X: ";
    cin >> A;
    cout << "Ingrese el límite B para aplicar el descuento Y (A < B): ";
    cin >> B;
    cout << "Ingrese el porcentaje de descuento X si N > A: ";
    cin >> X;
    cout << "Ingrese el porcentaje de descuento Y si N > B: ";
    cin >> Y;

    // 
    double costo_con_descuento = N;
    if (N > B) {
        costo_con_descuento *= (1.0 - (Y / 100.0));
    } else if (N > A) {
        costo_con_descuento *= (1.0 - (X / 100.0));
    }

    // 
    cout << "El costo de compra del producto con descuento es: " << costo_con_descuento << " bolivianos." << endl;

    return 0;
=======
    if (n > b) {
        n *= 1.0 - y / 100;
    } else if (n > a) {
        n *= 1.0 - x / 100;
    }

    cout << n << endl;
>>>>>>> 52ce6cc7e13938f775b93ee3ad7062d08644c47d
}

}

void exercise_5(char character) {
<<<<<<< HEAD
  // TODO: YOUR CODE HERE
  #include <iostream>

using namespace std;

int main() {
    char caracter;
    cout << "Ingrese un caracter: ";
    cin >> caracter;

    if (caracter >= 'A' && caracter <= 'Z') {
        cout << "El caracter ingresado es una letra mayuscula." << endl;
    } else if (caracter >= 'a' && caracter <= 'z') {
        cout << "El caracter ingresado es una letra minuscula." << endl;
    } else {
        cout << "El caracter ingresado no es una letra." << endl;
    }

    return 0;
=======
  if (isupper(character))
        cout << "upper-case alphabet" << endl;
    else if (islower(character))
        cout << "lower-case alphabet" << endl;
    else
        cout << "not an alphabet" << endl;
>>>>>>> 52ce6cc7e13938f775b93ee3ad7062d08644c47d
}




}

void exercise_6(int number) {
<<<<<<< HEAD
  // TODO: YOUR CODE HERE
#include <iostream>

using namespace std;

int main() {
    int dia_semana;
    cout << "Ingrese un numero del 1 al 7: ";
    cin >> dia_semana;

    switch (dia_semana) {
        case 1:
            cout << "Lunes" << endl;
            break;
        case 2:
            cout << "Martes" << endl;
            break;
        case 3:
            cout << "Miercoles" << endl;
            break;
        case 4:
            cout << "Jueves" << endl;
            break;
        case 5:
            cout << "Viernes" << endl;
            break;
        case 6:
            cout << "Sabado" << endl;
            break;
        case 7:
            cout << "Domingo" << endl;
            break;
        default:
            cout << "Numero invalido. Por favor ingrese un numero del 1 al 7." << endl;
    }

    return 0;
=======
  if (1 <= number && number <=7) {
       
    switch(number) {
    
        case 1:
            cout << "Monday\n"; 
            break;
        case 2:
            cout << "Thursday\n"; 
            break;
        case 3:
            cout << "Wednesday\n"; 
            break;
        case 4:
            cout << "Thursday\n"; 
            break;
        case 5:
            cout << "Friday\n"; 
            break;
        case 6:
            cout << "Saturday\n"; 
            break;
        case 7:
            cout << "Sunday\n"; 
            break;
    }
 } else {
   cout <<"Invalid input\n";
 }
>>>>>>> 52ce6cc7e13938f775b93ee3ad7062d08644c47d
}



}

void exercise_7(double r) {
<<<<<<< HEAD
  // TODO: YOUR CODE HERE
#include <iostream>
#include <cmath> 
// 

using namespace std;

int main() {
    double radio;
    cout << "Ingrese el radio de la esfera: ";
    cin >> radio;

    // 
    if (radio < 0) {
        cout << "Error: El radio no puede ser negativo." << endl;
    } else {
        // 
        double area = 4 * M_PI * pow(radio, 2);

        //
        cout << "El área de la esfera es: " << area << endl;
    }

    return 0;
=======
  if (r>=0)
  {
    cout<< 4*3.14* r*r<<endl;
  }
  else 
  {
    cout << "Error: Radius cannot be negative."<<endl;
  }
>>>>>>> 52ce6cc7e13938f775b93ee3ad7062d08644c47d
}



}

void exercise_8(long int seconds) {
<<<<<<< HEAD
  // TODO: YOUR CODE HERE
  #include <iostream>


}

<<<<<<< HEAD


}

=======




>>>>>>> 52ce6cc7e13938f775b93ee3ad7062d08644c47d
string exercise_9(string s1, string s2, string s3, string s4, string s5) {
<<<<<<< HEAD
  // TODO: YOUR CODE HERE
#include <iostream>
#include <string>

using namespace std;

int main() {
    //
    string palabra1, palabra2, palabra3, palabra4, palabra5;
    cout << "Ingrese cinco palabras separadas por un espacio: ";
    cin >> palabra1 >> palabra2 >> palabra3 >> palabra4 >> palabra5;

    //
    cout << "Primer caracter de cada palabra:" << endl;
    cout << palabra1[0] << " " << palabra2[0] << " " << palabra3[0] << " " << palabra4[0] << " " << palabra5[0] << endl;

    //
    if (palabra1[0] == palabra5[0]) {
        cout << "Hemos encontrado algo!" << endl;
    } else {
        cout << "Aun sin suerte" << endl;
    }

    return 0;
=======


  return "";
>>>>>>> 52ce6cc7e13938f775b93ee3ad7062d08644c47d
}



}

int exercise_10(int a, int b) {
<<<<<<< HEAD
  // TODO: YOUR CODE HERE
#include <iostream>

using namespace std;

int main() {
    //
    int num1, num2;
    cout << "Ingrese dos enteros no negativos separados por un espacio: ";
    cin >> num1 >> num2;

    //
    if (num1 < 0 || num2 < 0) {
        cout << "0" << endl; //
    } else {
        //
        int suma = num1 + num2;
        //
        int num_digitos = 0;
        int temp = suma;
        while (temp != 0) {
            num_digitos++;
            temp /= 10;
        }
        //
        int resultado = suma * num_digitos;
        //
        cout << resultado << endl;
    }

    return 0;
=======
  if (a < 0 || b < 0)
        return 0;
    int sum = a + b;
    int digit_count = (sum == 0) ? 1 : (int)log10(abs(sum)) + 1;
    return sum * digit_count;
>>>>>>> 52ce6cc7e13938f775b93ee3ad7062d08644c47d
}



}

string exercise_11(int number) {
  // TODO: YOUR CODE HERE
  #include <iostream>

using namespace std;

//
bool esFibonacci(int num) {
    int a = 0, b = 1;
    while (b < num) {
        int temp = b;
        b = a + b;
        a = temp;
    }
    return b == num;
}

int main() {
    //
    int codigo_fibo = 11235813;

    //
    int codigo;
    cout << "Ingrese el código del collar del perro: ";
    cin >> codigo;

    //
    if (codigo == codigo_fibo) {
        //
        if (esFibonacci(codigo)) {
            cout << "Se encontró Fibonacci" << endl;
        } else {
            cout << "Esto no es de Fibonacci" << endl;
        }
    } else {
        cout << "Esto no es el collar de Fibo" << endl;
    }

    return 0;
}



}

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {
  // TODO: YOUR CODE HERE
  #include <iostream>
#include <string>

using namespace std;

int main() {
    //
    string color_casa1, color_casa2, color_casa3;
    int pisos_casa1, pisos_casa2, pisos_casa3;
    cout << "Ingrese información sobre las tres casas (color y número de pisos separados por un espacio):" << endl;
    cin >> color_casa1 >> pisos_casa1;
    cin >> color_casa2 >> pisos_casa2;
    cin >> color_casa3 >> pisos_casa3;

    // 
    string color_tran = "?";
    int pisos_tran = -1;
    cout << "Ingrese la información proporcionada por el transeúnte (color y número de pisos separados por un espacio):" << endl;
    cin >> color_tran >> pisos_tran;

    //
    if ((color_tran == color_casa1 || color_tran == "?") && (pisos_tran == pisos_casa1 || pisos_tran == -1)) {
        cout << "1" << endl;
    }
    if ((color_tran == color_casa2 || color_tran == "?") && (pisos_tran == pisos_casa2 || pisos_tran == -1)) {
        cout << "2" << endl;
    }
    if ((color_tran == color_casa3 || color_tran == "?") && (pisos_tran == pisos_casa3 || pisos_tran == -1)) {
        cout << "3" << endl;
    }

    return 0;
}



}

string exercise_13(int age, int years_of_experience) {
  // TODO: YOUR CODE HERE
  #include <iostream>

using namespace std;

int main() {
    //
    int edad, experiencia;
    cout << "Ingrese la edad del candidato: ";
    cin >> edad;
    cout << "Ingrese los años de experiencia del candidato: ";
    cin >> experiencia;

    //
    string puesto;
    if (edad >= 18) {
        if (experiencia >= 5) {
            puesto = "director de proyecto senior";
        } else if (experiencia >= 3) {
            puesto = "director de proyecto";
        } else {
            puesto = "coordinador de proyecto";
        }
        cout << "El candidato puede postularse para el puesto de: " << puesto << endl;
    } else {
        cout << "El candidato no cumple con la edad mínima requerida." << endl;
    }

    return 0;
}



}

string exercise_14(int number_of_docs) {
  // TODO: YOUR CODE HERE
#include <iostream>

using namespace std;

int main() {
    //
    int num_documentos;
    cout << "Ingrese el número de documentos: ";
    cin >> num_documentos;

    //
    if (num_documentos == 0) {
        cout << "No se encontraron documentos" << endl;
    } else if (num_documentos == 1) {
        cout << "Se encontró un documento" << endl;
    } else {
        cout << num_documentos << " documentos encontrados" << endl;
    }

    return 0;
}



}

void exercise_15(int a, int b, int c) {
  // TODO: YOUR CODE HERE
  #include <iostream>

using namespace std;

int main() {
    // Inicializar las variables
    int a = 51, b = 876, c = 235;

    // Mostrar los valores iniciales
    cout << "Los valores son: a = " << a << " b = " << b << " y c = " << c << endl;

    // Intercambiar los valores
    int temp = a;
    a = b;
    b = c;
    c = temp;

    // Mostrar el mensaje de permutación
    cout << "Permutamos: a => b, b => c, c => a" << endl;

    // Mostrar los valores después de la permutación
    cout << "Los valores despues de la permutacion son: a = " << a << " b = " << b << " c = " << c << endl;

    return 0;
}



}

void exercise_16(int debut, int fin) {
  // TODO: YOUR CODE HERE
  #include <iostream>

using namespace std;

int main() {
    // Leer la hora de inicio y fin del alquiler
    int hora_inicio, hora_fin;
    cout << "Ingrese la hora de inicio del alquiler: ";
    cin >> hora_inicio;
    cout << "Ingrese la hora de fin del alquiler: ";
    cin >> hora_fin;

    // Verificar si las horas están dentro del rango de 0 a 24
    if (hora_inicio < 0 || hora_inicio > 24 || hora_fin < 0 || hora_fin > 24) {
        cout << "Las horas deben estar entre 0 y 24!" << endl;
        return 0;
    }

    // Verificar si la hora de inicio es menor que la hora de fin
    if (hora_inicio == hora_fin) {
        cout << "Que extraño, no has alquilado tu bicicleta por mucho tiempo!" << endl;
        return 0;
    } else if (hora_inicio > hora_fin) {
        cout << "Que extraño, el inicio del alquiler es después del final..." << endl;
        return 0;
    }

    // Calcular el costo del alquiler
    int costo_alquiler = 0;
    for (int hora = hora_inicio; hora < hora_fin; hora++) {
        if ((hora >= 0 && hora < 7) || (hora >= 17 && hora < 24)) {
            costo_alquiler += 1; // Tarifa de 1 bs/hora
        } else {
            costo_alquiler += 2; // Tarifa de 2 bs/hora
        }
    }

    // Mostrar el costo del alquiler
    cout << "El costo del alquiler es: " << costo_alquiler << " bs." << endl;

    return 0;
}

}