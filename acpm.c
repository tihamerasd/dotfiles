#include <stdio.h>
#include <unistd.h>
int main()
{
   system("nohup openvpn --config /home/tihi/tihi_openvpn/client.ovpn --auth-nocache >/dev/null 2>&1 &");
   sleep(6);
   system("xfreerdp /u:root /v:192.168.212.103 /p:");
   printf("I'm running, woohoo!");
   return 0;
}
