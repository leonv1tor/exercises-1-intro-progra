
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1, string s2, string s3) {
if (s1 < s2 && s1 < s3) {
    cout << s1;
    } else if (s2 < s1 && s2 < s3) {
    cout << s2;
    } else {
    cout << s3;
    }
}





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


void exercise_3(int a, int b) {
   if (b == 0)
        cout << "Impossible" << endl;
    else
        cout << a / b << endl;
}

void exercise_4(double n, double a, double b, double x, double y) {
    if (n > b) {
        n *= 1.0 - y / 100;
    } else if (n > a) {
        n *= 1.0 - x / 100;
    }

    cout << n << endl;
}

void exercise_5(char character) {
  if (isupper(character))
        cout << "upper-case alphabet" << endl;
    else if (islower(character))
        cout << "lower-case alphabet" << endl;
    else
        cout << "not an alphabet" << endl;
}

void exercise_6(int number) {
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
}

void exercise_7(double r) {
  if (r>=0)
  {
    cout<< 4*3.14* r*r<<endl;
  }
  else 
  {
    cout << "Error: Radius cannot be negative."<<endl;
  }
}

void exercise_8(long int seconds) {
  // TODO: YOUR CODE HERE
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  #include <iostream>
#include <string>
#include <cmath>

std::string procesarPalabras() {
    std::string palabra1, palabra2, palabra3, palabra4, palabra5;
    std::cin >> palabra1 >> palabra2 >> palabra3 >> palabra4 >> palabra5;
    
    char primerCaracterPalabra1 = palabra1[0];
    char primerCaracterPalabra5 = palabra5[0];

    if (primerCaracterPalabra1 == primerCaracterPalabra5) {
        return "Hemos encontrado algo!";
    } else {
        return "Aun sin suerte";
    }
}

int main() {
    std::cout << procesarPalabras() << std::endl;
    return 0;
}

  return "";
}

int exercise_10(int a, int b) {
  if (a < 0 || b < 0)
        return 0;
    int sum = a + b;
    int digit_count = (sum == 0) ? 1 : (int)log10(abs(sum)) + 1;
    return sum * digit_count;
}

string exercise_11(int number) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {
  // TODO: YOUR CODE HERE
}

string exercise_13(int age, int years_of_experience) {
  // TODO: YOUR CODE HERE
  return "";
}

string exercise_14(int number_of_docs) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int a, int b, int c) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int debut, int fin) {
  // TODO: YOUR CODE HERE
}