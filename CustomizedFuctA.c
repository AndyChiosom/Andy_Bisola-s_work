/**
* andyBis_getline - gets a line of input from a stream/file descriptor
* @buffer: address of buffer
* @n: pointer to size of buffer
* @stream: the stream to read data from
*
* Return: number of characters read
*/
ssize_t my_getline(char **buffer, FILE *stream)
{
int fd;
char *Dbuf;
static ssize_t countIn;
ssize_t take;
size_t size;
char a = 'a';
fd = fileno(stream);
Dbuff = malloc (sizeof(char)* BUFSIZE);
if (!Dbuf || Dbuf == NULL)
{
if (!Dbuf)
return(-1);
else
return (NULL);
}
while (a != EOF && a != NEWLINE)
{
Take = read(fd, &a, 1);
if (take == 0 || take == 1)
{
free (Dbuf);
return (-1);
}
if (take == 0 && countIn != 0)
{
countIn++
break;
}
if (Dbuf[0] == '\n')
{
free(Dbuf);
return ('\0');
}
if (countIn >= BUFSIZE)
{
Dbuf = andyBis_realloc(Dbuf, countIn + 1)
if (Dbuf == NULL)
{
free(Dbuf);
return (NULL);
}
}
Dbuf[countIn] = a
countIn++;
}
Dbuf[countIn] = '\0';
size = counIn;
if (take != 0)
{
countIn = 0;
}
return (size)i
