
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1, string s2, string s3) {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    string min_str;

    if (s1 <= s2 && s1 <= s3) {
        min_str = s1;
    } else if (s2 <= s1 && s2 <= s3) {
        min_str = s2;
    } else {
        min_str = s3;
    }

    cout << min_str << endl;

    return 0;
}
}

void exercise_2(double A, double B, double C) {
    double A, B, C;
    cin >> A >> B >> C;

    double discriminante = B * B - 4 * A * C;

    if (discriminante > 0) {
        double x1 = (-B + sqrt(discriminante)) / (2 * A);
        double x2 = (-B - sqrt(discriminante)) / (2 * A);
        cout << x1 << " " << x2 << endl;
    } else if (discriminante == 0) {
        double x = -B / (2 * A);
        cout << x << endl;
    } else {
        cout << "No hay raíces reales distintas" << endl;
    }

    return 0;
}
}

void exercise_3(int a, int b) {
  // TODO: YOUR CODE HERE
}

void exercise_4(double n, double a, double b, double x, double y) {
  // TODO: YOUR CODE HERE
}

void exercise_5(char character) {
  // TODO: YOUR CODE HERE
}

void exercise_6(int number) {
  // TODO: YOUR CODE HERE
}

void exercise_7(double r) {
  // TODO: YOUR CODE HERE
}

void exercise_8(long int seconds) {
  // TODO: YOUR CODE HERE
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  // TODO: YOUR CODE HERE
  return "";
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
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