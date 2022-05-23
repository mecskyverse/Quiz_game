#include <iostream>
#include <string>
#include <fstream>
using namespace std;
string guess;
string vout;
int total;
template <typename T>
T Score(T x)
{
    return x;
}

void user_file(const std::string &text)
{
    ofstream log_file("user_data.txt", std::ios_base::out | std::ios_base::app);
    log_file << text << endl;
}
class Question
{
private:
    string Question_Text;
    string answer_1;
    string answer_2;
    string answer_3;
    string answer_4;
    string correct_answer;
    int Question_Score;

public:
    Question(){};
    void setValues(string, string, string, string, string, char, int);
    void askQuestion();
};

int round2()
{
    cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*" << endl;
    cout << "*                                                                       *" << endl;
    cout << "*                    Welcome to NEXT ROUND                              *" << endl;
    cout << "*                                                                       *" << endl;
    cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*" << endl;

    user_file("Welcome to NEXT ROUND\n");
    cout << "Press enter to start...\n";
    cin.get();

    Question q1;
    Question q2;
    Question q3;
    Question q4;
    Question q5;
    Question q6;
    Question q7;
    Question q8;
    Question q9;
    Question q10;
    q1.setValues("1.Nucleic Acid controls cell activity and:",
                 "Transfer energy and prevent body heat loss",
                 "Determine Heredity and transfer energy",
                 "Transfer energy and store energy",
                 "Prevent body heat loss and determine heredity",
                 'b',
                 4);
    user_file("Nucleic Acid controls cell activity and:"
                           "Transfer energy and prevent body heat loss"
                           "Determine Heredity and transfer energy"
                           "Transfer energy and store energy"
                           "Prevent body heat loss and determine heredity\n");

    q2.setValues("2.What is being cycled between cellular respiration and photosynthesis?",
                 "Energy",
                 "Matter",
                 "Matter and energy",
                 "Nothing",
                 'b',
                 4);
    user_file("2.What is being cycled between cellular respiration and photosynthesis?"
                           "Energy"
                           "Matter"
                           "Matter and energy"
                           "Nothing\n");

    q3.setValues("3.If the egg of a fly has 6 chromosomes, how many chromosomes will the body cell have?",
                 "7",
                 "14",
                 "12",
                 "10",
                 'c',
                 4);
    user_file("3.If the egg of a fly has 6 chromosomes, how many chromosomes will the body cell have?"
                           "7"
                           "14"
                           "12"
                           "10\n");

    q4.setValues("4.Human poachers killed elephants for the ivory in the tusks, is an example of",
                 "All species have the genetic variation.",
                 "Competition between two species",
                 "Individuals best suited for an environment survive.",
                 "Competition within species",
                 'b',
                 4);
    user_file("4.Human poachers killed elephants for the ivory in the tusks, is an example of"
                           "All species have the genetic variation."
                           "Competition between two species"
                           "Individuals best suited for an environment survive."
                           "Competition within species\n");

    q5.setValues("5.Food is sometimes limited due to droughts. What does it cause?",
                 "Competition within species",
                 "All species have the genetic variation.",
                 "The number of individuals with the best characteristics increases in the future generations.",
                 "Competition between two species",
                 'a',
                 4);
    user_file("5.Food is sometimes limited due to droughts. What does it cause?"
                           "Competition within species"
                           "All species have the genetic variation."
                           "The number of individuals with the best characteristics increases in the future generations."
                           "Competition between two species\n");

    q6.setValues("6.Over 30 years, the frequency of tusk-less elephants increased:",
                 "Individuals best suited for an environment survive",
                 "Competition within species",
                 "All species have the genetic variation.",
                 "The number of individuals with the best characteristics increases in the future generations.",
                 'd',
                 4);
    user_file("Over 30 years, the frequency of tusk-less elephants increased:"
                           "Individuals best suited for an environment survive"
                           "Competition within species"
                           "All species have the genetic variation."
                           "The number of individuals with the best characteristics increases in the future generations.\n");

    q7.setValues("7.Most elephants have tusks, but a few are tusk-less. This is:",
                 "The number of individuals with the best characteristics increases in the future generations",
                 "All species have the genetic variation",
                 "Competition between two species",
                 "Individuals best suited for an environment survive.",
                 'b',
                 4);
    user_file("7.Most elephants have tusks, but a few are tusk-less. This is:"
                           "The number of individuals with the best characteristics increases in the future generations"
                           "All species have the genetic variation"
                           "Competition between two species"
                           "Individuals best suited for an environment survive.");

    q8.setValues("8.Both carbs and lipids:",
                 "Provide energy for the organism",
                 "Dissolve in water",
                 "Taste sweet",
                 "Get broken down into sugars",
                 'a',
                 4);
    user_file("8.Both carbs and lipids:"
                           "Provide energy for the organism"
                           "Dissolve in water"
                           "Taste sweet"
                           "Get broken down into sugars\n");

    q9.setValues("9.Carbohydrates are made of:",
                 "Amino acids",
                 "Fatty acids",
                 "Nucleotides",
                 "Sugars",
                 'd',
                 4);
    user_file("9.Carbohydrates are made of:"
                           "Amino acids"
                           "Fatty acids"
                           "Nucleotides"
                           "Sugars\n");

    q10.setValues("10.Lipids are made of:",
                  "Sugars",
                  "Fatty acids",
                  "Amino acids",
                  "Nucleotides",
                  'b',
                  4);
    user_file("10.Lipids are made of:"
                           "Sugars"
                           "Fatty acids"
                           "Amino acids"
                           "Nucleotides\n");

    q1.askQuestion();
    q2.askQuestion();
    q3.askQuestion();
    q4.askQuestion();
    q5.askQuestion();
    q6.askQuestion();
    q7.askQuestion();
    q8.askQuestion();
    q9.askQuestion();
    q10.askQuestion();

    cout << "Your Total Score is " << Score<int>(total) << " out of 40!\n";
    ofstream log_file("user_data.txt", std::ios_base::out | std::ios_base::app);
    log_file << "your total score " << Score<int>(total) << " out of 40" << endl;
    cout << "Congrats for completing the Quiz game\n";
    return 0;
}

int main()
{
    cout << "*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*" << endl;
    cout << "*                                                                       *" << endl;
    cout << "*                    Welcome to QUIZ GAME                               *" << endl;
    cout << "*                            Group-9                                    *" << endl;
    cout << "*             Name              |               UID                     *" << endl;
    cout << "*          Aryush Gupta         |            21BCS7706                  *" << endl;
    cout << "*          Aakash Verma         |            21BCS7884                  *" << endl;
    cout << "*         Priyansh Sharma       |            21BCS4910                  *" << endl;
    cout << "*          Sparsh Gupta         |            21BCS4907                  *" << endl;
    cout << "*           Kunal Shaw          |            21BCS2144                  *" << endl;
    cout << "*                                                                       *" << endl;
    cout << "*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*" << endl;
    user_file("WELCOME TO THE QUIZ\n");
    cout << "Press Enter to start...\n";
    cin.get();
    vout.assign("Press Enter to start...\n");
    user_file(vout);
    string name;
    cout << "What's your name?\n";
    getline(cin, name);
    cout << "\n";

    string respond;
    cout << "Are you ready to start the quiz, " << name << "? Yes/No.\n";
    user_file(name);
    cin >> respond;
    user_file(respond);
    if (respond == "Yes" || respond == "yes")
    {
        cout << "\n";
        cout << "Good luck!\n";
        user_file("Good luck!\n");
        cout << "\n";
        cout << "Press Enter to continue.";
        user_file("press Enter to continue\n");
        cin.get();
        cin.ignore();
    }
    else
    {
        cout << "\n";
        cout << "Goodbye!\n";
        user_file("Goodbye\n");
        cin.ignore();
        cin.get();
        return 0;
    }
    Question q1;
    Question q2;
    Question q3;
    Question q4;
    Question q5;
    Question q6;
    Question q7;
    Question q8;
    Question q9;
    Question q10;

    q1.setValues("1.The chlorophyll in photosynthesis is used for",
                 "Absorbing light",
                 "Breaking down water molecule ",
                 "No function ",
                 "yellow and black",
                 'a',
                 4);
    user_file("The chlorophyll in photosynthesis is used for"
                           "Absorbing light"
                           "Breaking down water molecule "
                           "No function "
                           "yellow and black\n");

    q2.setValues("2.Proteins after digestion are converted into",
                 "Carbohydrates",
                 "Small globules",
                 "The formation of rocks",
                 "starch",
                 'c',
                 4);
    user_file("2.Proteins after digestion are converted into"
                           "Carbohydrates"
                           "Insects"
                           "The formation of rocks"
                           "starch\n");

    q3.setValues("3.Carbohydrates in the plants are stored in the form of",
                 "Glycogen",
                 "Starch",
                 "Glucose",
                 "Maltose",
                 'b',
                 4);
    user_file("3.Carbohydrates in the plants are stored in the form of"
                           "Glycogen"
                           "Starch"
                           "Glucose"
                           "Maltose\n");

    q4.setValues("4.Main site of photosynthesis",
                 "Leaf",
                 "Stem",
                 "Chloroplast",
                 "Guard cells",
                 'c',
                 4);
    user_file("4.Main site of photosynthesis"
                           "Leaf"
                           "Stem"
                           "Chloroplast"
                           "Guard cells\n");

    q5.setValues("5.The small pores present of leaf’s surface are called",
                 "Stomata",
                 "Chlorophyll",
                 "Guard cells",
                 "None of these",
                 'a',
                 4);
    user_file("5.The small pores present of leaf’s surface are called"
                           "Stomata"
                           "Chlorophyll"
                           "Guard cells"
                           "None of these\n");

    q6.setValues("6.Bile juice is secreted by",
                 "Stomach",
                 "Pancreas",
                 "Small intestine",
                 "Liver",
                 'd',
                 4);
    user_file("Bile juice is secreted by"
                           "Stomach"
                           "Pancreas"
                           "Small intestine"
                           "Liver\n");
    q7.setValues("7.Which of these juices is secreted by pancreas",
                 "Trypsin",
                 "Pepsin",
                 "Bile juice",
                 "Both A and B",
                 'd',
                 4);
    user_file("7.Which of these juices is secreted by pancreas"
                           "Trypsin"
                           "Pepsin"
                           "Bile juice"
                           "Both A and B");
    q8.setValues("8. Respiratory pigment in human body is",
                 "Chlorophyll",
                 "Water",
                 "Blood",
                 "haemoblobin",
                 'd',
                 4);
    user_file("8. Respiratory pigment in human body is"
                           "Chlorophyll"
                           "Water"
                           "Blood"
                           "haemoglobin\n");
    q9.setValues("9.Blood consist of what fluid medium?",
                 "Lymph",
                 "Platelets",
                 "Plasma",
                 "All of these",
                 'c',
                 4);
    user_file("9.Blood consist of what fluid medium?"
                           "Lymph"
                           "Platelets"
                           "Plasma"
                           "All of these\n");

    q10.setValues("10.The small pores present of leaf’s surface are called",
                  "Stomata",
                  "Chlorophyll",
                  "Guard cells",
                  "None of these",
                  'a',
                  4);
    user_file("10.The small pores present of leaf’s surface are called"
                           "Stomata"
                           "Chlorophyll"
                           "Guard cells"
                           "None of these\n");
    q1.askQuestion();
    q2.askQuestion();
    q3.askQuestion();
    q4.askQuestion();
    q5.askQuestion();
    q6.askQuestion();
    q7.askQuestion();
    q8.askQuestion();
    q9.askQuestion();
    q10.askQuestion();
    cout << "Your Total Score is " << Score<int>(total) << " out of 40!\n";
    ofstream log_file("user_data.txt", std::ios_base::out | std::ios_base::app);
    log_file << "your total score " << Score<int>(total) << " out of 40" << endl;
    cout << "\n";
    if (total > 25)
    {
        cout << "(YOU ARE PASSED AND PROMOTED TO ROUND TWO)"
             << "\n";
        cout << "\n";
        user_file("YOU PASSED");
        total = 0;
        cout << "Press Enter to Continue" << endl;
        cin.get();
        round2();
        cin.get();
        cin.ignore();
        return 0;
    }
    else
    {
        cout << "You failed... Sorry, better luck next time.\n";
        cout << "\n";
        user_file("You failed... Sorry, better luck next time.\n");
    }
    cin.get();
    cin.ignore();
    return 0;
}
void Question::setValues(string q, string x, string y, string z, string m, char n, int o)
{
    Question_Text = q;
    answer_1 = x;
    answer_2 = y;
    answer_3 = z;
    answer_4 = m;
    correct_answer = n;
    Question_Score = o;
}
void Question::askQuestion()
{
    cout << "\n";
    cout << Question_Text << "\n";
    cout << "a. " << answer_1 << "\n";
    cout << "b. " << answer_2 << "\n";
    cout << "c. " << answer_3 << "\n";
    cout << "d. " << answer_4 << "\n";
    cout << "\n";

    cout << "What is your answer?"
         << "\n";
    user_file("What is your answer");
    cin >> guess;
    user_file(guess);
    if (guess == correct_answer)
    {
        cout << "\n";
        cout << "Correct!"
             << "\n";
        user_file("Correct\n");
        total = total + Question_Score;
        cout << "\n";
        cout << "Press enter to continue."
             << "\n";
        user_file("Press Enter to continue.");
        cin.get();
        cin.ignore();
    }
    else
    {
        cout << "\n";
        cout << "Sorry, you are wrong"
             << "\n";
        user_file("Sorry, you are wrong");
        cout << "The correct answer is " << correct_answer << "."
             << "\n";
        user_file("\ncorrect Answer is ");
        user_file(correct_answer);
        cout << "\n";
        cout << "Press enter to continue."
             << "\n";
        user_file("Press Enter to continue.");

        cin.get();
        cin.ignore();
    }
}