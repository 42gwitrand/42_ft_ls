int     my_str_isprintablechar(char c)
{
  if (str[0])
    {
      if (!((c >= 32 && c <= 126)))
	return (0);
    }
  return (1);
}
