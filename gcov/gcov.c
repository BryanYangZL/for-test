int test()
{
    int i = 0;
    return i;
}

int loop()
{
    for (int i=0; i<1000; i++) i++;
    return 0;
}

int main(int argc, char *args[])
{
    switch(argc) {
        case 1:
            loop();
            break;
        case 2:
            test();
            break;
        default:
            break;
    }

    return 0;
}
