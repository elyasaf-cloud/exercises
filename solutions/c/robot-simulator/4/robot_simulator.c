#include "robot_simulator.h"


robot_status_t robot_create(robot_direction_t direction, int x, int y)
{
    if (direction < DIRECTION_NORTH || direction > DIRECTION_WEST)
        direction = DIRECTION_DEFAULT;
    return (robot_status_t) {.direction = direction, .position = {.x = x, .y = y}};
}

void robot_move(robot_status_t *robot, const char *commands)
{
    if (!commands)
        return;
    static const int move_x[DIRECTION_MAX] = {0, 1, 0, -1};
    static const int move_y[DIRECTION_MAX] = {1, 0, -1, 0};
    for (const char *current = commands; *current; current++)
    {
        switch (*current)
        {
            case 'R':
                robot->direction = (robot->direction + 1) % DIRECTION_MAX;
                break;
            case 'L':
                robot->direction = (robot->direction + DIRECTION_MAX - 1) % DIRECTION_MAX;
                break;
            case 'A':
                robot->position.x += move_x[robot->direction];
                robot->position.y += move_y[robot->direction];
                break;
            default:
                break;
        }
    }
}