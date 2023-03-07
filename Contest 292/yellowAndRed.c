#include <stdio.h>

int main(void)
{

    int number_of_players;
    int number_of_events;
    scanf("%d %d", &number_of_players, &number_of_events);


    int player_scores[number_of_players];
    for(size_t i = 0; i <  number_of_players; i++) {
        player_scores[i] = 0;
    }

    for(size_t i = 0; i < number_of_events; ++i) {
        int action;
        int player_number;
        scanf("%d %d", &action, &player_number);
        --player_number;

        switch(action) {
            case 1:
                player_scores[player_number]++;
                break;
            case 2:
                player_scores[player_number] += 2;
                break;
            default:
                if(player_scores[player_number] >= 2) {
                    printf("Yes\n");
                } else {
                    printf("No\n");
                }
        }
    }
    return 0;
}