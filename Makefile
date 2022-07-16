all: compile run

.PHONY: compile
compile: name=foo
compile:
	@clang -o $(name).out $(name).c -lcs50

.PHONY: run
run: name=foo
run:
	@./$(name).out
