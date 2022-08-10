#include <iostream>
#include <string>

void test()
{
    char cmd[100];
    // char usr_in[50];
    char usr_in[50] = "192.168.1.1&&whoami";

    // fgets(usr_in, sizeof(usr_in), stdin);

    snprintf(cmd, sizeof(cmd), "ping %s", usr_in);

    system(cmd);
}

int main()
{
    const char *name = "kavi;nda";

    if (strcspn(name, "|&;") < strlen(name))
    {
        std::cout << strcspn(name, "|&;") << std::endl;
    }

    return 0;
}