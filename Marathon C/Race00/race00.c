void mx_printchar(char c);

void mx_printstr(const char *s);

void left_right_border(int i)
{
    if (i % 2)
    {
        mx_printchar('*');
    }
    else
    {
        mx_printchar('+');
    }
}

void headr_footer_border(int map_width)
{
    for (int i = 0; i < map_width; i++)
    {
        if (map_width == 1)
        {
            mx_printstr("<=>");
        }
        else if (i == map_width - 1)
        {
            mx_printstr("=>");
        }
        else if (i == 0)
        {
            mx_printstr("<=");
        }
        else
        {
            mx_printstr("-");
        }
    }
    mx_printstr("\n");
}

void race00(int map_length, int map_width, int one_y, int one_x)
{
    if (map_width > 0)
    {
        headr_footer_border(map_width);
        for (int i = 0; i < map_length; i++)
        {
            left_right_border(i);
            for (int j = 0; j < map_width; j++)
            {
                if (i == one_y && j == one_x)
                {
                    mx_printstr("1");
                }
                else
                {
                    mx_printstr("0");
                }
            }
            left_right_border(i);
            mx_printstr("\n");
        }
        headr_footer_border(map_width);
    }
}
