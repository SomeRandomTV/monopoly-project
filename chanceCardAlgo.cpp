void Player::ChanceDeckAlgo(vector<string> &deck) {
    
    srand(time_t(0));

        for (int i = 0; i < 1; ++i) {
            
            int randCard = rand() % deck.size();
            //cout << deck.at(randCard) << endl;


            if (deck.at(randCard) == deck.at(0)) {
                
                playerCards.push_back(deck.at(0));
                deck.erase(deck.begin() + 0);
                
            } else if (deck.at(randCard) == deck.at(1)) {
                playerMoney += 200;
                cout << deck.at(1) << endl;
                playerLocation = 0;
            } else if (deck.at(randCard) == deck.at(2)) {
                
                playerMoney += 200;
                cout << deck.at(2) << endl;
                
            } else if (deck.at(randCard) == deck.at(3)) {
                
                playerMoney -= 50;
                cout << deck.at(3) << endl;
            } else if (deck.at(randCard) == deck.at(4)) {
                
                playerMoney += 50;
                cout << deck.at(4);
                
            } else if (deck.at(randCard) == deck.at(5)) {
                
                jail = true;
                cout << deck.at(5);
                
            } else if (deck.at(randCard) == deck.at(6)) {
                
                playerMoney += 100;
                cout << deck.at(6);
                
            } else if (deck.at(randCard) == deck.at(7)){
                
                playerMoney += 20;
                cout << deck.at(7);
            
            } else if (deck.at(randCard) == deck.at(8)) {
            // FIXME, collect 10 from each player
                
            
            } else if (deck.at(randCard) == deck.at(9)) {
                
                playerMoney += 100;
                cout << deck.at(9);
                
            } else if (deck.at(randCard) == deck.at(10)) {
                
                playerMoney += 100;
                cout << deck.at(10);
                
            } else if (deck.at(randCard) == deck.at(11)) {
                
                playerMoney -= 100;
                cout << deck.at(11);
                
            } else if (deck.at(randCard) == deck.at(12)) {
                
                playerMoney -= 50;
                cout << deck.at(12);
                
            } else if (deck.at(randCard) == deck.at(13)) {
                
                playerMoney += 25;
                cout << deck.at(13);
                
            }
            
            
            else {
                
                break;
                
            }
        }
    
}

