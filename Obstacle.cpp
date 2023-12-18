int detectObstacleType(const sensor_msgs::msg::LaserScan::SharedPtr scan)
{
    if ((scan->ranges[0] > 0.025 && scan->ranges[0] <= 0.235) || (scan->ranges[20] > 0.025 && scan->ranges[20] <= 0.235))
        return 1;
    else if ((scan->ranges[30] > 0.035 && scan->ranges[30] <= 0.235) || (scan->ranges[50] > 0.035 && scan->ranges[50] <= 0.235))
        return 2;
    else if ((scan->ranges[60] > 0.025 && scan->ranges[60] <= 0.235) || (scan->ranges[80] > 0.025 && scan->ranges[80] <= 0.235))
        return 3;
    else if (scan->ranges[90] > 0.025 && scan->ranges[90] <= 0.185)
        return 4;
    else
        return 5;
}
