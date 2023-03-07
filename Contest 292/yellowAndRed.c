#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int number_of_players;
    int number_of_events;
    char *line = NULL;
    size_t size = 0;

    getline(&line, &size, stdin);
    char *events_endptr;
    number_of_players = (int) strtol(line, &events_endptr, 10);
    number_of_events = (int) strtol(events_endptr, NULL, 10);

    int player_scores[number_of_players];
    for(size_t i = 0; i <  number_of_players; i++) {
        player_scores[i] = 0;
    }

    for(size_t i = 0; i < number_of_events; ++i) {
        getline(&line, &size, stdin);

        char *endptr;
        int action = (int) strtol(line, &endptr, 10);
        int player_number = (int) strtol(endptr, NULL, 10);
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