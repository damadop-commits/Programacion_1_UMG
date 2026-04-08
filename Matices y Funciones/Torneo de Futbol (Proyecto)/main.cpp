#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include "Futbol.h"

using namespace std;

int main()
{
    Futbol torneo;
    srand(getpid());
    torneo.llamaCiclo();
    return 0;
}
