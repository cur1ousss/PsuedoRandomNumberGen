#include<iostream>
#include<cstdlib>
using namespace std;


void line(){
cout<<"\n\t*******************************************************************************************************************";
}

void intro(){
    line();
cout<<"\n \t\tWelcome to the Shoppers Paradise in the Post Apocalyptic Era of Zombies ";
cout<<"\n\n  ## Your Mission is to Survive with the luck you have";
cout<<"\n\n You will proceede through various sections in a Supermarket which contains items that are Unfortunately infected by zombies";

cout<<"\n ## The Rules of the Game are";
cout<<"\n >> You have to choose ONLY 3 items from each section that you visit";
cout<<"\n >> Each items contains some amount of Poison infected by zombies it will decide whether you Live or Die in the end";
cout<<"\n >> However these points are not visible to you and will be completely random each time you play the game(Provided in the Range[0,9])\n ";
line();

cout<<"\n\n \t\t Choose Wisely It will Cost you ....GOOD LUCK >>>>>>>>>>\n";
line();
}

class Player{

private:
    int luckpts;
    int Water,Lemonade,Pepsi,Milkshake,Cola;  //beverages
    int Chips,Pizza,Sandwich,Pasta,Eggs;    //food
    int Pistol,Rifle,Grenade,RocketLauncher,Knife;   //weapons
    int oldFriend,Enemy,Neighbor,Teacher,Dog;   //companion

    int foodChosen[3];
    int bevChosen[3];
    int companionChosen[3];
    int weaponChosen[3];

    int choice1,choice2,choice3;

public:
    Player(){
    luckpts=0;  
    }

    void sectionFood(){

        cout<<"\n\n\t\t ## Food Section";
        cout<<"\n Available items are >>";
        cout<<"\n 1.Chips";
        cout<<"\n 2.Pizza";
        cout<<"\n 3.Pasta";
        cout<<"\n 4.Sandwich";
        cout<<"\n 5.Eggs";

        cout<<"\n\n Select your 3 choices Carefully !!!!!!\n";
       
        cin>>choice1>>choice2>>choice3;


//random gen
int arr[3];
int tmp;

int sum=0;
for(int i=0;i<3;i++){
    tmp=arr[i]/10;
    foodChosen[i]=(abs(arr[i])-abs(tmp*10)+1)%10;
    sum+=foodChosen[i];
}

cout<<"\n POINTS earned by you in this Section are "<<sum;

cout<<"\n GOOD LUCK for the Next Section Hope that your Scores are better the Next Time !!!!!!!!!!!!";

    }

//somehow it was random gen same values due to found match of name arr[] or some internal voodo hence custom made for each random gen


    void sectionBeverages(){
       

        cout<<"\n\n\t\t ## Beverages Section";
         cout<<"\n Available items are >>";
        cout<<"\n 1.Water";
        cout<<"\n 2.Lemonade";
        cout<<"\n 3.Pepsi";
        cout<<"\n 4.Milkshake";
        cout<<"\n 5.Cola";

        cout<<"\n\n Select your 3 choices Carefully !!!!!!\n";

        cin>>choice1>>choice2>>choice3;

//random gen
int arr[3];
int tmp;

int sum=0;
for(int i=0;i<3;i++){
    tmp=arr[i]/10;
    bevChosen[i]=(abs(arr[i])-abs(tmp*10)+3)%10;
    sum+=bevChosen[i];
}

cout<<"\n POINTS earned by you in this Section are "<<sum;

cout<<"\n GOOD LUCK for the Next Section Hope that your Scores are better the Next Time !!!!!!!!!!!!";
    }


    void sectionWeapons(){
               cout<<"\n\n\t\t ## Weapons Section";
        cout<<"\n Available items are >>";
        cout<<"\n 1.Pistol";
        cout<<"\n 2.Rifle";
        cout<<"\n 3.Knife";
        cout<<"\n 4.Rocket Launcher";
        cout<<"\n 5.Grenade";

        cout<<"\n\n Select your 3 choices Carefully !!!!!!\n";

        cin>>choice1>>choice2>>choice3;


//random gen
int arr[3];
int tmp;

int sum=0;
for(int i=0;i<3;i++){
    tmp=arr[i]/10;
    weaponChosen[i]=(abs(arr[i])-abs(tmp*10)+5)%10;
    sum+=weaponChosen[i];
}

cout<<"\n POINTS earned by you in this Section are "<<sum;

cout<<"\n GOOD LUCK for the Next Section Hope that your Scores are better the Next Time !!!!!!!!!!!!";
}



    void sectionCompanion(){
       
               cout<<"\n\n\t\t ## Companion Section";
        cout<<"\n Available items are >>";
        cout<<"\n 1.old Friend";
        cout<<"\n 2.Enemy";
        cout<<"\n 3.Neighbor";
        cout<<"\n 4.Teacher";
        cout<<"\n 5.Dog";

        cout<<"\n\n Select your 3 choices Carefully !!!!!!\n";

        cin>>choice1>>choice2>>choice3;




//random gen
int arr[3];
int tmp;

int sum=0;
for(int i=0;i<3;i++){
    tmp=arr[i]/10;
    companionChosen[i]=(abs(arr[i])-abs(tmp*10)+4)%10;
    sum+=companionChosen[i];
}

cout<<"\n POINTS earned by you in this Section are "<<sum;

cout<<"\n GOOD LUCK for the Next Section Hope that your Scores are better the Next Time !!!!!!!!!!!!";
    }


    void checkResult(){
        for(int i=0;i<3;i++){
            luckpts+=bevChosen[i]+companionChosen[i]+foodChosen[i]+weaponChosen[i];
        }

    cout<<"\n\n\t\t Grand Total Of Points Earned is "<<luckpts;
        if(luckpts<85){     //threshold is 85 max is 108
            cout<<"\n\n \t\t********************** YOU DIED!!!!!!!!!**********************";
        }
        else{
            cout<<"\n\n \t\t **********************You WON congratualations...............**********************";
        }
    }
};



//main function

int main(){

Player player1;

cout<<"\n\n";

playAgain:
intro();

char sec;
char choiceEx;
//going sections

cout<<"\n\n BEGIN the GAME?? You don't have a choice HaHa!! [PRESS y]";
cin>>sec;
player1.sectionFood();

cout<<"\n\nDo you Want to EXIT the Game? [PRESS y or n]";
cin>>choiceEx;
if(choiceEx=='y')
goto end;
cout<<"\n\n Proceede to Next Section?? You don't have a choice HaHa!! [PRESS y]";
cin>>sec;
player1.sectionCompanion();

cout<<"\n\nDo you Want to EXIT the Game? [PRESS y or n]";
cin>>choiceEx;
if(choiceEx=='y')
goto end;
cout<<"\n\n Proceede to Next Section?? You don't have a choice HaHa!! [PRESS y]";
cin>>sec;
player1.sectionWeapons();


cout<<"\n\nDo you Want to EXIT the Game? [PRESS y or n]";
cin>>choiceEx;
if(choiceEx=='y')
goto end;
cout<<"\n\n Proceede to Next Section?? You don't have a choice HaHa!! [PRESS y]";
cin>>sec;
player1.sectionBeverages();

cout<<"\n\nDo you Want to EXIT the Game? [PRESS y or n]";
cin>>choiceEx;
if(choiceEx=='y')
goto end;
cout<<"\n\n Proceede to RESULT?? You don't have a choice HaHa!! [PRESS y]";
cin>>sec;
cout<<"\n\n\t\t";
player1.checkResult();

cout<<"\n\n Do you want to Play Again?";
char choiceplay;
cin>>choiceplay;

if(choiceplay=='y'||choiceplay=='Y')
goto playAgain;

else if(choiceplay=='n'||choiceplay=='N')
goto end;

end:
cout<<"\nExiting the Game GOODBYE!!!!!!!!!!!!!";
cout<<"\n\n";
return 0;
}