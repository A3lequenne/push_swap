#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# if BUFFER_SIZE < 0
#  undef BUFFER_SIZE
#  define BUFFER_SIZE 0
# endif

#ifndef OPEN_MAX
#define OPEN_MAX 1024
#endif

// fd
size_t	ft_strlen(const char *str);
void	*ft_malloc(size_t count, size_t size);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *str, int c);
char	*get_next_line_fd(int fd);

// char
int		stock_line(int fd, char **save, char **line, int ret);
int		get_next_line_char(int const fd, char **line);

#endif
