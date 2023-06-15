// aggregation
#include <iostream>
using namespace std;

class Team 
{
private:
    static const int MAX_PLAYERS = 5;
    char* players[MAX_PLAYERS];
    int playerCount;

public:
    Team() : playerCount(0) 
    {}

    void AddPlayer(char* name) 
    {
        if (playerCount < MAX_PLAYERS) 
        {
            players[playerCount] = name;
            playerCount++;
        }
    }

    void PrintPlayers()
    {
        for (int i = 0; i < playerCount; i++)
        {
            cout << "Player: " << players[i] << endl;
        }
    }
};

int main() {
    Team team;
    char player1[] = "Person1";
    char player2[] = "Person2";
    team.AddPlayer(player1);
    team.AddPlayer(player2);
    team.PrintPlayers();

    return 0;
}