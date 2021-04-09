# intellij_goto_by_comment
Go to file from comment in code

type file path from project root
```
/**
 * @see project://docs/commands.md
 */
```
compile cpp file
```
g++ openfile.cpp openfile;
chmod +x openfile;
```
- open IDE Settings (ctrl + alt + s)
- Tools / External tools
  - Program: `<path_to_repo_dir>/openfile`
  - Arguments: `$ProjectFileDir$ $FilePath$ $LineNumber$ `
- Add KeyMap for created tool
- click to `@see` line
- run keyMap

