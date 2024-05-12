#include <iostream>  
#include <fstream>  
#include <string>    
#include <vector>  
#include <cstdlib> 
#include <cmath> 
#include <algorithm> 
#include <iterator> 
#include <list> 
#include <random> 
#include <stack> 
using namespace std;

class Imperial_ant
{
public:
    string name;
    int age;
private:
    bool is_working = true ;

};

class Imperial_Guarding_ant : public Imperial_ant
{
private:
    bool goes_to_war = true ;
};


class Imperial_Officer_ant : public Imperial_Guarding_ant
{
private:
    bool initiating_commands = true ;
    bool traitor_bloodlust = true ;
};




class techno_priest_ant
{
public:
    string name;
    int age;
private:
    bool have_empowered_Body = true ;
    bool love_to_techs = true ;
};


class Magos_ant : public techno_priest_ant
{
private:
    bool have_more_power = true ;
    int count_of_mechadendrits = 12 ;
};

class General_Fabbricator_ant : public Magos_ant
{
private:
    bool controls_the_refinary = true ;
    int number_of_controlled_units = 40000 ;
    bool Has_most_power = true ;
};


int main() {
    setlocale(LC_ALL, "ru");

    //муравей имперец(род продолжается) 
    Imperial_ant Imperial_ant;
    Imperial_ant.name = "Тарик";
    Imperial_ant.age = 3;

    //Муравей имперский гвардеец(род обрываеться) 
    Imperial_Guarding_ant Imperial_Guarding_ant;
    Imperial_Guarding_ant.name = "Анакванар";
    Imperial_Guarding_ant.age = 5;

    //Имперский муравей комисар(род продолжается) 
    Imperial_Officer_ant  Imperial_Officer_ant;
    Imperial_Officer_ant.name = "Динтариус";
    Imperial_Officer_ant.age = 8;

    //Муравей техножрец (род продолжаеться) 
    techno_priest_ant techno_priest_ant;
    techno_priest_ant.name = "Ханейманн";
    techno_priest_ant.age = 10;

    //Муравей магос(род обрывается) 
    Magos_ant Magos_ant;
    Magos_ant.name = "Аркхан";
    Magos_ant.age = 20;

    //Муравей генерал фабрикатор 
    General_Fabbricator_ant General_Fabbricator_ant;
    General_Fabbricator_ant.name = "Акол";
   General_Fabbricator_ant.age = 30;



    return 0;
}

// имеются фигуры: круг, квадрат, треугольник, куб, отрезок, ромб, трапеция, октагон, эллипс
// все из фигур - потомки отрезка, ведь все эти фигуры можно собрать из этого самого отрезка.
// если взять большой отрезок то можно соеденить его концы и получится круг


