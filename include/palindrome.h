/*
** palindrome.h for  in /home/bertha_e/rendu/Synthse/palindrome
** 
** Made by Berthaud Elodie
** Login   <bertha_e@epitech.net>
** 
** Started on  Thu Jun 16 12:04:01 2016 Berthaud Elodie
** Last update Sat Jun 18 13:40:09 2016 Berthaud Elodie
*/

#ifndef PALINDROME_H_
# define PALINDROME_H_

typedef struct		s_pal
{
  char			**opt;
  int			p_opt;
  int			nb;
  int			pal;
  int			end;
  int			iter;
  int			base;
  int			imin;
  int			imax;
}			t_pal;

/*
**iteration.c
*/
int	iteration(int, int);

/*
**my_int_len.c
*/
int	my_int_len(int);

/*
**get_int.c
*/
char	*get_int(int);

/*
**revstr.c
*/
char	*revstr(char *);

/*
**tab.c
*/
char	**tab_opt();

/*
**fill_with_opt.c
*/
t_pal	*fill_n(int, t_pal *);
t_pal	*fill_p(int, t_pal *);
t_pal	*fill_b(int, t_pal *);
t_pal	*fill_imin(int, t_pal *);
t_pal	*fill_imax(int, t_pal *);

/*
**options.c
*/
int	n_opt(t_pal *);
int	p_opt(t_pal *);
int	b_treatment(t_pal *, int, int, int);
int	b_treatment_n(t_pal *);
int	b_opt(t_pal *);
int	imin_opt(t_pal *);
int	imax_opt(t_pal *);

/*
**fill_struct.c
*/
t_pal	*check_opt(char *, char **, t_pal *, int);
t_pal	*fill_struct(char **);

/*
**my_strdup.c
*/
char	*my_strdup(char *);

/*
**tab_functions.c
*/
int	tab_functions(char *, t_pal *);

/*
**prints.c
*/
int	print_n_opt(t_pal *);
int	print_p_opt(t_pal *);
int	print_base_opt(t_pal *);
int	print_base_opt_n(t_pal *);

/*
**check.c
*/
int	check_end(char *);
int	check_valid_pal(int, t_pal *);
int	no_pal(int);
int	check_valid_pal_base(int, t_pal *);

/*
**error.c
*/
int	check_valid_opt1(char **);
int	sent_args(char **, int);

/*
**my_putstr_error.c
*/
int	my_putstr_error(char *);

/*
**fonct_comb.c
*/
int	p_opt_comb(t_pal *, int, int, int);
int	n_opt_comb(t_pal *);

/*
**puissances.c
*/
int	puissance(int, int);

/*
**convert_in_base.c
*/
int	convert_in_base(int, int);
int	get_from_base(int, int);

#endif /* !palindrome.h */
