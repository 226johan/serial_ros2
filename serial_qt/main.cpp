#include "SerialPort/SerialPort.h"
#include <iostream>
using namespace std;

///串口
Uart InfoPort;
int  fd_serial0   = 0;
bool serial_state = 0;

HostComputerData  RobotInfo;        //发送
GroundChassisData MainControlInfo;  //接收
int               main()
{
    serial_state            = InfoPort.Init_serial(fd_serial0, 115200) + 1;
    RobotInfo.if_real_shoot = 0;
    if (serial_state)
    {
        //接受数据
        InfoPort.GetMode(fd_serial0, MainControlInfo);
        //发送数据
        InfoPort.TransformTarPos(fd_serial0, RobotInfo);
    }
    return 0;
}
