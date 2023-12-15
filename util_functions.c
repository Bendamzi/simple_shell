#include "shell.h"


/**
 * support_env_tasks - to enhance 'env' command functionality
 *
 * Return: void
 */
void support_env_tasks(void)
{
	char *help = "env: env [option] [name=value] [command [args]]\n\t";

	write(STDOUT_FILENO, help, custom_strlen(help));
	help = "Print the enviroment of the shell.\n";

	write(STDOUT_FILENO, help, custom_strlen(help));
}
/**
 * env_variable_support - Display assist for the 'setenv' function.
 * Return: void
 */
void env_variable_support(void)
{

	char *help = "setenv: setenv (const char *name, const char *value,";

	write(STDOUT_FILENO, help, custom_strlen(help));
	help = "int replace)\n\t";
	write(STDOUT_FILENO, help, custom_strlen(help));
	help = "Add a new definition to the environment\n";
	write(STDOUT_FILENO, help, custom_strlen(help));
}
/**
 * support_unsetenv_command - function to informats for the builtin unsetenv
 * Return: void
 */
void support_unsetenv_command(void)
{
	char *help = "unsetenv: unsetenv (const char *name)\n\t";

	write(STDOUT_FILENO, help, custom_strlen(help));
	help = "Remove an entry completely from the environment\n";
	write(STDOUT_FILENO, help, custom_strlen(help));
}


/**
 * assist_general_command - Display help information for general commands
 * Return: nothing
 */
void assist_general_command(void)
{
	const char *help[] = {
		"$$ bash, version 1.0(1)-release\n",
		"These commands are defined internally. Type 'help' to see the list",
		"Type 'help name' to find out more about the function 'name'.\n\n ",
		" alias: alias [name=['string']]\n cd: cd [-L|[-P [-e]] [-@]] [dir]\n",
		"exit: exit [n]\n  env: env [option] [name=value] [command [args]]\n",
		"setenv: setenv [variable] [value]\n  unsetenv: unsetenv [variable]\n"
	};

	unsigned int i;

	for (i = 0; i < sizeof(help) / sizeof(help[0]); ++i)
		write(STDOUT_FILENO, help[i], custom_strlen(help[i]));
}
/**
 * print_exit_help - Help provide information for exit command.
 *
 * Return: void
 */
void print_exit_help(void)
{
	char *help = "exit: exit [n]\n Exit shell.\n";

	write(STDOUT_FILENO, help, custom_strlen(help));
	help = "Exits the shell with a status of N. If N is ommited, the exit";
	write(STDOUT_FILENO, help, custom_strlen(help));
	help = "statusis that of the last command executed\n";
	write(STDOUT_FILENO, help, custom_strlen(help));
}
