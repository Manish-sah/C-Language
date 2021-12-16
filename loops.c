main()   //while
{
    int i=1,x;      //initialization
    while(i<=5)   //condition
    {
        printf("enter your nummber");
        scanf("%d",&x);
        if(x>0)
            break;
        i++;   //flow

    }
    i==6?printf("ends normally"):printf("appliedbreak");
    getch();
}


