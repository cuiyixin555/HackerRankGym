#include <iostream>
#include <vector>

using namespace std;

class Person {
protected:
  string firstName;
  string lastName;
  int id;

public:
  Person(string firstName, string lastName, int identification) {
    this->firstName = firstName;
    this->lastName = lastName;
    this->id = identification;
  }
  void printPerson() {
    cout << "Name: " << lastName << ", " << firstName << "\nID: " << id << "\n";
  }
};

class Student : public Person {
private:
  vector<int> testScores;

public:
  /*
   *   Class Constructor
   *
   *   Parameters:
   *   firstName - A string denoting the Person's first name.
   *   lastName - A string denoting the Person's last name.
   *   id - An integer denoting the Person's ID number.
   *   scores - An array of integers denoting the Person's test scores.
   */
  // Write your constructor here
  Student(string firstName, string lastName, int idNumber, vector<int> scores)
      : Person(firstName, lastName, idNumber), testScores(scores) {}
  /*
   *   Function Name: calculate
   *   Return: A character denoting the grade.
   */
  // Write your function here
  char calculate() {
    int sum = 0;
    for (int i = 0; i < testScores.size(); i++) {
      sum += testScores[i];
    }
    int avgSum = sum / testScores.size();
    if (avgSum >= 90 && avgSum <= 100) {
      return 'O';
    } else if (avgSum >= 80 && avgSum < 90) {
      return 'E';
    } else if (avgSum >= 70 && avgSum < 80) {
      return 'A';
    } else if (avgSum >= 55 && avgSum < 70) {
      return 'P';
    } else if (avgSum >= 40 && avgSum < 55) {
      return 'D';
    } else {
      return 'T';
    }
  }
};

// How to build: g++ -std=c++17 -Wall -o Day12_Inheritance 30_Days_of_Code/Day12_Inheritance.cpp
// How to run: ./Day12_Inheritance
int main() {
  string firstName;
  string lastName;
  int id;
  int numScores;
  cin >> firstName >> lastName >> id >> numScores;
  vector<int> scores;
  for (int i = 0; i < numScores; i++) {
    int tmpScore;
    cin >> tmpScore;
    scores.push_back(tmpScore);
  }
  Student *s = new Student(firstName, lastName, id, scores);
  s->printPerson();
  cout << "Grade: " << s->calculate() << "\n";
  return 0;
}