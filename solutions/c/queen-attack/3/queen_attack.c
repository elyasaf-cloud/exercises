#include "queen_attack.h"
#include <stdlib.h>


bool is_on_board(position_t queen)
{
    return (queen.row<=7 && queen.column<=7);
}

bool are_not_on_same_position(position_t queen_1, position_t queen_2)
{
    return ((queen_1.row!=queen_2.row) || (queen_1.column!=queen_2.column));
}

bool on_same_row(position_t queen_1, position_t queen_2)
{
    return (queen_1.row==queen_2.row);
}

bool on_same_column(position_t queen_1, position_t queen_2)
{
    return (queen_1.column==queen_2.column);
}

bool on_same_diagonal(position_t queen_1, position_t queen_2)
{
    return ((abs(queen_1.row-queen_2.row))==(abs(queen_1.column-queen_2.column)));
}

attack_status_t can_attack(position_t queen_1, position_t queen_2)
{
    if((!is_on_board(queen_1)) || (!is_on_board(queen_2)) || (!are_not_on_same_position(queen_1, queen_2)))
    {
        return INVALID_POSITION;
    }
    bool status = on_same_row(queen_1, queen_2) | on_same_column(queen_1, queen_2) | on_same_diagonal(queen_1, queen_2);
    return (status)? CAN_ATTACK : CAN_NOT_ATTACK;
}