void setVelocity(const sensor_msgs::msg::LaserScan::SharedPtr scan, geometry_msgs::msg::Twist &vel)
{
    int obstacleType = detectObstacleType(scan);
    switch (obstacleType)
    {
        case 1: vel.linear.x = 0.;    vel.angular.z = -1.6; break;
        case 2: vel.linear.x = 0.15; vel.angular.z = -0.005; break;
        case 3: vel.linear.x = 0.15; vel.angular.z = 0.8; break;
        case 4: vel.linear.x = 0.1;  vel.angular.z = 1.6; break;
        default: vel.linear.x = 0.20; vel.angular.z = 0.;
    }
    RCLCPP_INFO(rclcpp::get_logger("self_drive"), "step=%d, range=%1.2f, linear=%1.2f, angular=%1.2f",
               step_, scan->ranges[0], vel.linear.x, vel.angular.z);
}