# imagination

To create the executable of this document, run the following commands:

```
gcc -c -o <name>.o <name>.c -I freeglut\include\GL
gcc -o <name>.exe <name>.o -L freeglut\lib -lfreeglut -lopengl32
```

An executable <name>.exe must be in your directory