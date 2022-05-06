//
//  playerClass.hpp
//  playerClasses
//
//  Created by Retr0 on 4/20/22.
//

#ifndef playerClass_hpp
#define playerClass_hpp

#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include <stdio.h>


using namespace std;


class Player {
    
public:
    Player();
    void SetMoney(int money);      // sets the money
    void SetLocation();            // sets location
    bool IsJail();                 // determines if player is in jail
    void PlayerProperty();         // holds all protery for player
    void playerHouses();           // holds all player houses
    void playerHotels();           // holds all player hotels
    void playerDeck();
    void whoGoesFirst(int dice1);
    void ChanceDeckAlgo(vector<string>& chanceDeck, vector<string>& playerChanceCards);
    void ChestDeckAlgo(vector<string>& chestDeck, vector<string>& playerChestCards);
    bool DiceDoubles();
    void DiceRoll(int dice1, int dice2);
    void playerBuy();
    void playerSell();
    void playerLoans();
    void playerBankruptcy();       // determines bankruptcy
    
    
    // Accessors
    int GetMoney();
    int GetLocation();
    int GetDicesRolls();
    string GetChanceCards();
    string GetChestCards();
    
    
    // prints all player info
    void Print();
    
    
private:
    int playerMoney;
    int playerLocation;
    bool jail;
    bool passGo;
    vector<string> playerCards;
    vector<string> propertyOwned;
    vector<int> playerNumHouses;
    vector<int> playerNumHotels;
    int diceRoll1;
    int diceRoll2;
    string nameLocation;
    int propertyCost;
    bool owned;
    int playerLoan;
    int loanInterest;
    bool bankruptcy;
    
};



#endif /* playerClass_hpp */
