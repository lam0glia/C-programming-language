unsigned long int next = 1;

int rand()
{
    next = next * 1103515245 + 12345;
    return (unsigned int)(next / 65536) % 32765;
}

void srand(unsigned int seed)
{
    next = seed;
}