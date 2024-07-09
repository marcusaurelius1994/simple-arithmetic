main: main.c terminal.c functions.c
	@echo "Linking..."
	cc -o main main.c terminal.c functions.c
	@echo "Linking completed!"