#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdint.h>

typedef struct s_arg
{
	char		spec;
	char		just_left;
	char		plus_flag;
	char		space_flag;
	char		hash;
	char		zero_flag;
	char		h_length;
	char		l_length;
	char		long_double_length;
	int			width;
	int			precision;
	int			return_val;
	int			fd;
}				t_arg;

typedef struct s_fl
{
	char		bits[81];
	char		*f_str;
	uintmax_t	*big_int;
	double		fl;
	long double	lfl;
	int			bin_size;
	char		exp_field;
	int			nb_buff;
	int			exp;
	int			bias;
	char		sign;
	int			nb_idigit;
	int			nb_fdigit;
	int			nb_totdigit;
	char		sc_notation;
	int			nine;
	int			base_ten;
}				t_fl;

// Main
int				ft_printf(const char *format, ...);
int				ft_dprintf(int fd, const char *format, ...);

// Parsing
void			init_arg(t_arg *arg);
int				parse_tag(va_list ap, char **format, t_arg *arg);
char			*ft_findpc(const char *s);
int				parse_format(char **format, va_list ap, int fd);
void			get_flags(char **format, t_arg *arg);
void			get_width(va_list ap, char **format, t_arg *arg);
void			get_precision(va_list ap, char **format, t_arg *arg);
void			get_length(char **format, t_arg *arg);
int				get_specifier(va_list ap, char **format, t_arg *arg);

// Signed
int				display_int(uintmax_t n, t_arg *arg, char *b_tab, char base);
void			handle_int(t_arg *arg, intmax_t n);
void			get_signed_type(va_list ap, char **format, t_arg *arg);

// Unsigned
void			handle_unsigned(t_arg *arg, char *b_tab, int base, uintmax_t n);
void			get_unsigned_type(va_list ap, char **format, t_arg *arg);

//Char
void			handle_char(va_list ap, t_arg *arg, char **format);

// NPC
void			handle_pc(t_arg *arg, char **format);
void			handle_nlflag(va_list ap, t_arg *arg);
void			handle_nflag(va_list ap, t_arg *arg, char **format);

// String
void			handle_str(va_list ap, t_arg *arg, char **format);

// Fraction
void			init_flo(va_list ap, t_arg *arg, t_fl *flo);
void			count_idigit(t_fl *flo, t_arg *arg);
int				check_nan_inf(t_fl *flo, t_arg *arg);
void			get_bits(int size, t_fl *flo, t_arg *arg);
void			handle_fraction(va_list ap, t_arg *arg, char **format);

// Big INT
void			shift_tab_right(t_fl *flo);
void			shift_tab_left(t_fl *flo);
void			div_big_int(uintmax_t *mantissa_value, int nb_buff, int time);
void			mult_big_int(t_fl *flo, int n, char full, char previous_full);
void			sum_mantissa(t_fl *flo, char *mantissa_exp);

// Float compute
void			rounding_float(t_fl *flo, int k);
void			get_float_string(t_fl *flo, int i, int k, int tot);
void			get_exponent(t_fl *flo);
void			fill_zero_fraction(t_fl *flo);
void			compute_float(t_fl *flo, t_arg *arg);

// Float
void			unit_rounding_case(t_fl *f, int k);
void			scientific_notation_setup(t_arg *arg, t_fl *flo);
void			scientific_form_exponent(t_arg *arg, t_fl *flo);
void			handle_naninf(t_arg *arg, t_fl *flo, char *naninf);
void			handle_float(t_arg *arg, t_fl *flo);

// Utils
void			ft_putpad(int len, char zero, t_arg *arg);

#endif
