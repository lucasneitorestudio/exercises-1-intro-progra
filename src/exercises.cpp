#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1, string s2, string s3) {
  // TODO: YOUR CODE HERE
  if (s1 < s2 && s1 < s3){
    cout << s1;
  } else if(s2 < s1 && s2 < s3) {
    cout << s2;
  } else {
    cout << s3;
  }
}

void exercise_2(double A, double B, double C) {
  // TODO: YOUR CODE HERE
   double D = B * B - 4 * A * C;
   if (D > 0 && A != 0)
   {
       double d_sqrt = sqrt (D);
       double x1 = (-B + d_sqrt) / (2*A);
       double x2 = (-B - d_sqrt) / (2*A); 
       cout<<x1<<" "<<x2<<endl;
   }
   else if (D==0 && A != 0)
   {
   double d_sqrt = sqrt (D);
   double x1 = (-B + d_sqrt) / (2*A); 
   cout<<x1<<endl;
   }
   else if (A==0&& B!=0)
   { 
       cout<< (-1*(C))/B <<endl;
   }
   else if (A!=0 && B==0)
   {
     cout<< sqrt (C/A) <<endl;
   }
   else
   {
       cout<<"";
   } 
}
void exercise_3(int a, int b) {
  // TODO: YOUR CODE HER
 if (b==0){
  cout << "Impossible" << endl;
 }
 else {
   cout << a/b << endl; 
 }
}

void exercise_4(double n, double a, double b, double x, double y) {
  // TODO: YOUR CODE HERE
    double porc;
    double desc;
    if (n > a && n < b){
      porc = x/100 * n;
      desc = n - porc;
    }
    else if (n > b){
      porc = y/100 * n;
      desc = n - porc;
    }
    else{
      desc = n;
    }
    cout << desc << endl;
}

void exercise_5(char character) {
  // TODO: YOUR CODE HERE
  int res = character;
  if (res >= 97 && res < 123){
    cout << "lower-case alphabet" << endl;
  }
  else if (res >= 65 && res < 91){
    cout << "upper-case alphabet" << endl;
  }
  else{
    cout << "not an alphabet" << endl;
  }
}

void exercise_6(int number) {
  // TODO: YOUR CODE HERE
 if(number == 1){
  cout << "Monday" << endl;
 }
 else if(number == 2){
    cout << "Tuesday" << endl;
 }
 else if(number == 3) {
    cout << "Wednesday" << endl;
 }
 else if(number == 4) {
    cout << "Thursday"<< endl;
 }
 else if(number == 5){
    cout << "Friday" << endl;
 }
 else if(number == 6){
    cout << "Saturday" << endl;
 }
 else if(number == 7){
    cout << "Sunday" << endl;
 }
 else{
     cout << "Invalid input" << endl;
 }
 }

void exercise_7(double r) {
  // TODO: YOUR CODE HERE
  if (r >= 0)
  {
    cout << 4*3.14* r*r << endl;
  }
  else
  {
    cout << "Error: Radius cannot be negative." << endl;
  }
}

void exercise_8(long int seconds) {
  // TODO: YOUR CODE HERE
  int h;
  int m;
  if(seconds < 0){
     cout << "Error: Input seconds cannot be negative." << endl;
  }
  else {
  h = seconds/3600;
  seconds = seconds%3600;
  m = seconds/60;
  seconds = seconds%60;
  if(h < 10 && m < 10 && seconds < 10) {
    cout << "0" << h << ":" << "0" << m << ":" << "0" << seconds << endl;
  }
  else if(h < 10 && m >= 10 && seconds >= 10) {
    cout << "0" << h << ":" << m << ":" << seconds << endl;
  }
  else if(h < 10 && m >= 10 && seconds < 10) {
    cout << "0" << h << ":" << m << ":" << "0" << seconds << endl;
  }
  else if(h < 10 && m < 10 && seconds >= 10) {
    cout << "0" << h << ":" << "0" << m << ":" << seconds << endl;
  }
  else if(h >= 10 && m < 10 && seconds < 10) {
    cout << h << ":" << "0" << m << ":" << "0" << seconds << endl;
  }
  else if(h >= 10 && m >= 10 && seconds < 10) {
    cout << h << ":" << m << ":" << "0" << seconds << endl;
  }
  else{
    cout << h << ":" << m << ":" << seconds << endl;
  }
 }
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  // TODO: YOUR CODE HERE
  char caracter1 = s1[0];
  char caracter2 = s2[0];
  char caracter3 = s3[0];
  char caracter4 = s4[0];
  char caracter5 = s5[0];
  cout << caracter1 << caracter2 << caracter3 << caracter4 << caracter5 << endl;
  if ( caracter1 == caracter5) {
    return "Hemos encontrado algo!";
  }
  else {
    return"Aun sin suerte";
  }
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
  if (a < 0 && b < 0) {
    return 0;
  }
  int sum = a + b;
  int digit_count = (sum == 0)? 1:
  (int)log10(abs(sum)) + 1;
  return sum * digit_count;
}

string exercise_11(int number) {
  // TODO: YOUR CODE HERE
  if (number == 11235813) {
    return "Se encontro a Fibonacci";
  }
  else{
    return "Esto no es de Fibonacci";
  }
}

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {
  // TODO: YOUR CODE HERE
}

string exercise_13(int age, int years_of_experience) {
    if (age < 18) return "No puede postularse";
    else if (years_of_experience >= 5) return "director de proyecto senior";
    else if (years_of_experience >= 3) return "director de proyecto";
    else return "coordinador de proyecto";
}

string exercise_14(int number_of_docs) {
  // TODO: YOUR CODE HERE
  if(number_of_docs <= 0){
    return "No se encontraron documentos";
  }
  else if (number_of_docs == 1) {
    return "Se encontro un documento";
  }
  else if (number_of_docs > 1){
    return to_string (number_of_docs) + " documentos encontrados";
  }
  return "";
}

void exercise_15(int a, int b, int c) {
  // TODO: YOUR CODE HERE
  cout << "Los valores son: a = " << a << " b = " << b << " y c = " << c << endl;
  cout << "Permutamos: a => b, b => c, c => a" << endl;
  cout << "Los valores despues de la permutacion son: a = " << c << " b = " << a << " c = " << b << endl;

}

void exercise_16(int debut, int fin) {
  // TODO: YOUR CODE HERE
}
