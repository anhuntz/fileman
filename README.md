![Logo](https://raw.githubusercontent.com/anhuntz/fileman/master/Resources/Icon128.png)
## FileMan
FileMan is a standard file manager built for Unreal Engine Blueprints. Use the nodes included to read, write, or delete files.

![Example](https://raw.githubusercontent.com/anhuntz/fileman/master/Resources/Nodes.png)
### Nodes:
- Read File
- Write File
- Get Files in Path
- Delete File

### Keep in mind:
These nodes all derive from the project directory, which means the "root" will be seen as the same place your `.uproject` file is located. In packaged games, this root becomes the folder titled with your game name.
