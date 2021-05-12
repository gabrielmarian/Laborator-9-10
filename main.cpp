#include <iostream>
#include <string>

using namespace std;

int Guess;
int Total;

class Question
{
    private:
        string Question_Text;
        string Answer_1;
        string Answer_2;
        string Answer_3;
        string Answer_4;

        int Correct_Answer;
        int Question_Score;

    public:
        void setValues (string, string, string, string, string, int, int);
        void askQuestion ( );
};

int main()
{

cout << "* * * * * * * *" << endl;
cout << "* Test la SO ! *" << endl;
cout << "* * * * * * * * *" << endl;

cout << "Press Enter to start the quiz .. " << endl;
cin.get();

string Name;
int Age;

cout <<"Cum te numesti ?" << endl;
cin >> Name;
cout << endl;
cout <<"Cati ani ai ?" << endl;
cin >> Age;
cout << endl;
string Respond;
cout << Name << " esti pregatit pentru test " << "? DA/NU" << endl;
cin >> Respond;
if (Respond == "DA")
{
    cout << endl;
    cout << "ok, sa incepem atunci!" << endl;
}
else {
    cout << "ok, ne vedem cand esti gata!" << endl;
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


q1.setValues ("Marketingul presupune o viziune unitară asupra:",
        "activităţilor care alcătuiesc ciclul economic complet al bunurilor şi serviciilor;",
        "activităţilor de transfer a titlului de proprietate, reclamă şi publicitate;",
        "activităţilor de transport şi stocare;",
        "nici o variantă nu este corectă",
        1, // este raspunsul corect
        10); // puncte pentru raspuns corect

q2.setValues ("Într-o optică de marketing, activitatea comercială devine:",
        "o promovare largă a întreprinderii şi produselor sale;",
        "o consecinţă a producţiei;",
        "un punct de plecare pentru a produce ceea ce se cere pe piaţă.",
        "maximizarea eficienţei economice;",
        3, // este raspunsul corect
        10); // puncte pentru raspuns corect

q3.setValues ("Promovarea  conceptuală a marketingului, definirea sa teoretică, are loc:",
        "în prima etapă a evoluţiei sale;",
        "într-o fază de abundenţă a produselor şi serviciilor",
        "odată cu orientarea firmei către societate",
        "toate variantele sunt corecte.",
        1, // este raspunsul corect
        10); // puncte pentru raspuns corect

q4.setValues ("Cea mai nouă concepţie de marketing este cea:",
        "de vânzare;",
        "de producţie;",
        "socială;",
        "de marketing",
        3, // este raspunsul corect
        10); // puncte pentru raspuns corect

q5.setValues ("„Realizarea activităţilor economice care dirijează fluxul bunurilor şi serviciilor de la producător   la   consumator   sau   utilizator”   reprezintă   definiţia   marketingului   în viziunea:",
        "economiştilor McCarthy şi Perrault;",
        "lui Philip Kotler;",
        "Asociaţiei Americane de Marketing;",
        "economiştilor din domeniul comercial;",
        3, // este raspunsul corect
        10); // puncte pentru raspuns corect

q6.setValues ("Funcţia premisă a marketingului este:",
        "satisfacerea superioară a nevoilor de consum;",
        "investigarea pieţei şi a nevoilor de consum;",
        "adaptarea dinamică a firmei la mediul economic şi social;",
        "maximizarea eficienţei economice;",
        2, // este raspunsul corect
        10); // puncte pentru raspuns corect

q7.setValues ("Marketingul, ca demers teoretic şi practic se conturează  odată cu apariţia:",
        "societăţii umane",
        "societăţii de consum",
        "economiei de piaţă libere",
        "distribuţia fizică;",
        2, // este raspunsul corect
        10); // puncte pentru raspuns corect

q8.setValues ("Cea mai importantă funcţie a marketingului este de fapt:",
        "investigarea pieţei şi a necesităţilor de consum;",
        "maximizarea eficienţei economice;",
        "transferul titlului de  proprietate;",
        "prezentarea unei companii şi a produselor sale clienţilor.",
        2, // este raspunsul corect
        10); // puncte pentru raspuns corect

q9.setValues ("Când produsul sau serviciul nu atrage atenţia cumpărătorilor, spunem că cererea este:",
        "latentă",
        "negativă",
        "egală cu zero;",
        "indezirabilă",
        3, // este raspunsul corect
        10); // puncte pentru raspuns corect

q10.setValues ("Întreprinderile conduse pe principiile marketingului urmăresc satisfacerea nevoilor:",
        "produsului",
        "organizaţiei",
        "angajaţilor",
        "cumpărătorilor.",
        4, // este raspunsul corect
        10); // puncte pentru raspuns corect

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

cout << "Punctajul tau adunat este: " << Total << "din 100" << endl;

if (Total >= 70)
{
    cout << "Felicitari ai trecut testul cu succes !" << endl;
    cout << "&&&&&&&&&&&&" << endl;
    cout << "&Felicitari&" << endl;
    cout << "&&&&&&&&&&&&" << endl;
}

else {

cout << "Oh no! se pare ca ai picat testul 🙁 " << endl;
cout << "Multu noroc pe data viitoare !" << endl;
}
return 0;
}

void Question::setValues (string q, string a1, string a2, string a3, string a4, int ca, int pa)
{
    Question_Text = q;
    Answer_1 = a1;
    Answer_2 = a2;
    Answer_3 = a3;
    Answer_4 = a4;
    Correct_Answer = ca;
    Question_Score = pa;
}

void Question::askQuestion()
{
    cout << endl;
    cout << Question_Text << endl;
    cout << "1. " << Answer_1 << endl;
    cout << "2. " << Answer_2 << endl;
    cout << "3. " << Answer_3 << endl;
    cout << "4. " << Answer_4 << endl;
    cout << endl;
    cout << "Care este raspunsul tau la intrebare ? (foloseste nr. corespunzator! )" << endl;
    cin >> Guess;
    if (Guess == Correct_Answer)
    {
        cout << endl;
        cout << "Great! You are correct" << endl;
        Total = Total + Question_Score;
        cout << "Punctaj: " << Question_Score << " din " << Question_Score << "!" << endl;
        cout << endl;
    }
    else
    {
        cout << endl;
        cout << "oh no! Ai gresit !" << endl;
        cout << "Punctaj: 0" << " din " << Question_Score << "!" << endl;
        cout << "The correct answer is " << Correct_Answer << "." << endl;
        cout << endl;
    }

}
