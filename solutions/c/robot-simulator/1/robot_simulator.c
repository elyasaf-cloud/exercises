#include "robot_simulator.h"


robot_status_t robot_create(robot_direction_t direction, int x, int y)
{
    robot_status_t copy;
    copy.direction = direction;
    copy.position.x = x;
    copy.position.y = y;
    return copy;
}

void robot_move(robot_status_t *robot, const char *commands)
{
    for (const char *current = commands; *current; current++)
    {
        switch (*current)
        {
            case 'R':
                robot->direction = (robot->direction + 1) % DIRECTION_MAX;
                break;
            case 'L':
                robot->direction = (robot->direction + 3) % DIRECTION_MAX;
                break;
            case 'A':
                {
                int add = (robot->direction <= 1) ? 1 : -1;
                if (robot->direction & 1)
                    robot->position.x += add;
                else
                    robot->position.y += add;
                break;
                }
            default:
                return;
        }
    }
}