/* 信07 2253209 刘佳朋 */

/* 函数实现部分，{ }内的东西可以任意调整，目前的return 0只是一个示例，可改变 */

/* 不允许定义任何形式的外部全局、静态全局、宏定义、只读变量 */

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strlen(const char str[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int n=0;
    for (int i = 0;; i++)
    {
        if (str[i] != '\0')
        {
            n++;
        }
        else
        {
            break;
        }
    }

    return n; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strcat(char s1[], const char s2[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int i,n=0;
    for (i = 0;; i++)
    {
        if (s1[i] != '\0')
        {
            ;
        }
        else
        {
            break;
        }
    }
    for (i;; i++)
    {
        s1[i] = s2[n];
        n++;
        if (s2[n-1] == '\0')
        {
            break;
        }
    }

    return 0; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strncat(char s1[], const char s2[], const int len)
{
    int i,n=0;
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    if (len > tj_strlen(s2))
    {
        tj_strcat(s1, s2);
    }
    else
    {
        for (i = 0;; i++)
        {
            if (s1[i] != '\0')
            {
                ;
            }
            else
            {
                break;
            }
        }
        for (i;n<len; i++)
        {
            s1[i] = s2[n];
            n++;
        }
    }
    return 0; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strcpy(char s1[], const char s2[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    for (int i = 0;; i++)
    {
        s1[i] = s2[i];
        if (s2[i] == '\0')
        {
            break;
        }
    }
    return 0; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strncpy(char s1[], const char s2[], const int len)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    if (len > tj_strlen(s2))
    {
        for (int i = 0;; i++)
        {
            if (s2[i] == '\0')
            {
                break;
            }
            s1[i] = s2[i];
        }
    }
    else
    {
        for (int i = 0;i<len; i++)
        {
            s1[i] = s2[i];
        }
    }
    return 0; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strcmp(const char s1[], const char s2[])
{
    int a=0;
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    for (int i = 0;; i++)
    {
        if (s1[i] == s2[i])
        {
            if (s1[i] == '\0')
            {
                break;
            }
            else
            {
                ;
            }
        }
        else
        {
            a = s1[i] - s2[i];
            break;
        }
    }
    return a; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strcasecmp(const char s1[], const char s2[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int a = 0;
    char temp1, temp2;
    for (int i = 0;; i++)
    {
        if (s1[i] == s2[i])
        {
            if (s1[i] == '\0')
            {
                break;
            }
            else
            {
                ;
            }
        }
        else
        {
            if ('A' <= s1[i] && s1[i] <= 'Z')
            {
                temp1 = s1[i];
                temp1 = temp1 - 'A' + 'a';
                if ('A' <= s2[i] && s2[i] <= 'Z')
                {
                    temp2 = s2[i];
                    temp2 = temp2 - 'A' + 'a';
                }
                else
                {
                    temp2 = s2[i];
                }
                a = temp1 - temp2;
                if (a != 0)
                {
                    break;
                }
            }
            else
            {
                if ('A' <= s2[i] && s2[i] <= 'Z')
                {
                    temp2 = s2[i];
                    temp2 = temp2 - 'A' + 'a';
                }
                else
                {
                    temp2 = s2[i];
                }
                a = s1[i] - temp2;
                if (a != 0)
                {
                    break;
                }
            }
        }
    }
    return a;//return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strncmp(const char s1[], const char s2[], const int len)
{
    int a = 0;
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    if (len > (tj_strlen(s1) >= tj_strlen(s2) ? tj_strlen(s2) : tj_strlen(s1)))
    {
        for (int i = 0;; i++)
        {
            if (s1[i] == s2[i])
            {
                if (s1[i] == '\0')
                {
                    break;
                }
            }
            else
            {
                a = s1[i] - s2[i];
                break;
            }
        }
    }
    else
    {
        for (int i = 0;i<len; i++)
        {
            if (s1[i] == s2[i])
            {
                ;
            }
            else
            {
                a = s1[i] - s2[i];
                break;
            }
        }
    }
    return a; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strcasencmp(const char s1[], const char s2[], const int len)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int a = 0;
    char temp1, temp2;
    if (len > (tj_strlen(s1) >= tj_strlen(s2) ? tj_strlen(s2) : tj_strlen(s1)))
    {
        for (int i = 0;; i++)
        {
            if (s1[i] == s2[i])
            {
                if (s1[i] == '\0')
                {
                    break;
                }
                else
                {
                    ;
                }
            }
            else
            {
                if ('A' <= s1[i] && s1[i] <= 'Z')
                {
                    temp1 = s1[i];
                    temp1 = temp1 - 'A' + 'a';
                    if ('A' <= s2[i] && s2[i] <= 'Z')
                    {
                        temp2 = s2[i];
                        temp2 = temp2 - 'A' + 'a';
                    }
                    else
                    {
                        temp2 = s2[i];
                    }
                    a = temp1 - temp2;
                    if (a != 0)
                    {
                        break;
                    }
                }
                else
                {
                    if ('A' <= s2[i] && s2[i] <= 'Z')
                    {
                        temp2 = s2[i];
                        temp2 = temp2 - 'A' + 'a';
                    }
                    else
                    {
                        temp2 = s2[i];
                    }
                    a = s1[i] - temp2;
                    if (a != 0)
                    {
                        break;
                    }
                }
            }
        }
    }
    else
    {
        for (int i = 0; i < len; i++)
        {
            if (s1[i] == s2[i])
            {
                if (s1[i] == '\0')
                {
                    break;
                }
                else
                {
                    ;
                }
            }
            else
            {
                if ('A' <= s1[i] && s1[i] <= 'Z')
                {
                    temp1 = s1[i];
                    temp1 = temp1 - 'A' + 'a';
                    if ('A' <= s2[i] && s2[i] <= 'Z')
                    {
                        temp2 = s2[i];
                        temp2 = temp2 - 'A' + 'a';
                    }
                    else
                    {
                        temp2 = s2[i];
                    }
                    a = temp1 - temp2;
                    if (a != 0)
                    {
                        break;
                    }
                }
                else
                {
                    if ('A' <= s2[i] && s2[i] <= 'Z')
                    {
                        temp2 = s2[i];
                        temp2 = temp2 - 'A' + 'a';
                    }
                    else
                    {
                        temp2 = s2[i];
                    }
                    a = s1[i] - temp2;
                    if (a != 0)
                    {
                        break;
                    }
                }
            }
        }
    }

    return a; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strupr(char str[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    for (int i = 0;; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 'a' + 'A';
        }
        else
        {
            if (str[i] == '\0')
            {
                break;
            }
        }
    }
    return 0; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strlwr(char str[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    for (int i = 0;; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] - 'A' + 'a';
        }
        else
        {
            if (str[i] == '\0')
            {
                break;
            }
        }
    }
    return 0; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strchr(const char str[], char ch)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int n;
    for (n= 0;; n--)
    {
        if (str[-n] == ch)
        {
            break;
        }
        else
        {
            if (str[-n] == '\0')
            {
                n = 1;
                break;
            }
        }
    }
    return 1-n; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strstr(const char str[], const char substr[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int n,a=0,b=1,temp;
    for (n = 0;;)
    {
        if (str[-n] == substr[a])
        {
            temp = 1;
            if (a == 0)
            {
                b = n;
            }
            if (str[-n] != '\0')
            {
                a++;
            }
            else
            {
                n = b;
                break;
            }
        }
        else
        {
            temp = 0;
            if (str[-n] == '\0')
            {
                n = 1;
                break;
            }
            if (substr[a] == '\0')
            {
                n = b;
                break;
            }
            a = 0;
        }
        if (temp)
        {
            n--;
        }
        else
        {
            if (b < 0)
            {
                n = b - 1;
                b = 1;
            }
            else
            {
                n--;
            }
        }
    }

    return 1-n; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strrchr(const char str[], const char ch)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int n=-tj_strlen(str);
    for (n;; n++)
    {
        if (str[-n] == ch)
        {
            break;
        }
        else
        {
            if (n == 0)
            {
                n = 1;
                break;
            }
        }
    }

    return 1-n; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strrstr(const char str[], const char substr[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int n=-tj_strlen(str)+1, a = tj_strlen(substr) - 1,b=1,temp;
    for (n;;)
    {
        if (str[-n] == substr[a])
        {
            temp = 1;
            if (a == 0)
            {
                break;
            }
            if (a == tj_strlen(substr) - 1)
            {
                b = n;
            }
            a--;
        }
        else
        {
            temp = 0;
            if (n==0)
            {
                n = 1;
                break;
            }
            a = tj_strlen(substr) - 1;
        }
        if (temp)
        {
            if (n != 0)
            {
                n++;
            }
            else
            {
                if (tj_strlen(substr) == 1)
                {
                    break;
                }
                else
                {
                    n = 1;
                    break;
                }
            }
        }
        else
        {
            if (b<0)
            {
                n = b + 1;
                b = 1;
            }
            else
            {
                n++;
            }
        }
    }
    return 1-n; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strrev(char str[])
{
    int i;
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    for (i = 0;; i++)
    {
        if (str[i] == '\0')
        {
            break;
        }
    }
    for (int j = 0;j<i-1-j; j++)
    {
        char temp;
        temp = str[j];
        str[j] = str[i - 1 - j];
        str[i - 1 - j] = temp;
    }
    return 0; //return值可根据需要修改
}
