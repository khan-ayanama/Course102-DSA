# Lecture-03

## mv and cp

### **`mv` Command** (Move/Rename):

- **Purpose**: Moves or renames files and directories.

#### Usage:

- **Move a file**:

  ```bash
  mv source_file destination_directory
  ```

  Example:

  ```bash
  mv file.txt /home/user/Documents
  ```

  - Moves `file.txt` to the `Documents` directory.

- **Rename a file**:
  ```bash
  mv old_name new_name
  ```
  Example:
  ```bash
  mv oldfile.txt newfile.txt
  ```
  - Renames `oldfile.txt` to `newfile.txt`.

#### Key Point:

- You can use **`mv`** to both **move** and **rename** files and directories.

---

### **`cp` Command** (Copy):

- **Purpose**: Copies files and directories.

#### Usage:

- **Copy a file**:

  ```bash
  cp source_file destination_directory
  ```

  Example:

  ```bash
  cp file.txt /home/user/Documents
  ```

  - Copies `file.txt` to the `Documents` directory.

- **Copy a directory** (with `-r` for recursive):
  ```bash
  cp -r source_directory destination_directory
  ```
  Example:
  ```bash
  cp -r folder /home/user/Documents
  ```
  - Copies the entire `folder` and its contents to `Documents`.

#### Common Option:

- **`-r`**: Recursively copy directories and their contents.

---

### Summary:

- **`mv`**: Moves or renames files and directories.
  - Example: `mv file.txt /path/` (move), `mv old.txt new.txt` (rename).
- **`cp`**: Copies files or directories.
  - Example: `cp file.txt /path/`, `cp -r folder /path/` (recursive copy).

## Usefull Shortcuts and History for Daily use in the Linux Terminal

### Useful Shortcuts for Daily Use in the Linux Terminal:

#### 1. **Navigation and Editing**:

- **`Ctrl + A`**: Move the cursor to the **beginning of the line**.
- **`Ctrl + E`**: Move the cursor to the **end of the line**.
- **`Ctrl + U`**: **Cut** everything before the cursor (delete the line to the left).
- **`Ctrl + K`**: **Cut** everything after the cursor (delete the line to the right).
- **`Ctrl + W`**: **Cut the previous word**.
- **`Ctrl + Y`**: **Paste** the last cut text (from `Ctrl + U`, `Ctrl + K`, or `Ctrl + W`).
- **`Ctrl + L`**: **Clear** the terminal screen (same as `clear` command).
- **`Alt + F`**: Move the cursor **forward one word**.
- **`Alt + B`**: Move the cursor **backward one word**.

#### 2. **Command History**:

- **`Up/Down Arrow`**: Scroll through the **command history**.
- **`Ctrl + R`**: Search through the command history **backward**.
  - Start typing a part of the command to find previously used commands.
- **`!!`**: Repeat the **last command**.
  ```bash
  !!
  ```
- **`!n`**: Run command number `n` from your command history (`n` is a number).
  ```bash
  !45
  ```
  - Executes the 45th command in the history.
- **`!command`**: Run the most recent command starting with "command."
  ```bash
  !ls
  ```
  - Runs the last `ls` command.

#### 3. **Process Control**:

- **`Ctrl + C`**: **Terminate** the current command or process.
- **`Ctrl + Z`**: **Suspend** the current process (can be resumed with `fg`).
- **`fg`**: Bring the **suspended process** back to the foreground.

#### 4. **File/Directory Management**:

- **`Tab` Key**: Auto-**complete** file names, directory names, and commands.
- **`Ctrl + D`**: Log out from the terminal or **close the terminal** if you're in a terminal session.

---

### Command History:

- **`history`**: Displays a list of previously executed commands.
  ```bash
  history
  ```
- **Clear Command History**:
  ```bash
  history -c
  ```

---

### Summary:

- Use shortcuts like **`Ctrl + A`**, **`Ctrl + E`**, and **`Ctrl + R`** for efficient navigation and command recall.
- **Command history** can be accessed and reused with `!!`, `!n`, and `!command`.
- Manage processes with **`Ctrl + C`** and **`Ctrl + Z`**.
- Use **tab auto-completion** for quick navigation.

## cat and less

### **`cat` Command**:

- **Purpose**: Concatenates and displays the contents of files.

#### Common Usage:

1. **Display a file's contents**:

   ```bash
   cat filename.txt
   ```

   - Outputs the entire content of `filename.txt` to the terminal.

2. **Concatenate multiple files**:

   ```bash
   cat file1.txt file2.txt > combined.txt
   ```

   - Combines `file1.txt` and `file2.txt` into `combined.txt`.

3. **Create a new file**:

   ```bash
   cat > newfile.txt
   ```

   - Allows you to type content directly into `newfile.txt`. Press `Ctrl + D` to save and exit.

4. **Show line numbers**:
   ```bash
   cat -n filename.txt
   ```
   - Displays the contents of `filename.txt` with line numbers.

---

### **`less` Command**:

- **Purpose**: Allows for **viewing** (but not editing) the contents of files, especially large ones, with **scrolling capabilities**.

#### Common Usage:

1. **View a file**:

   ```bash
   less filename.txt
   ```

   - Opens `filename.txt` for viewing. You can scroll through the content.

2. **Navigate within `less`**:
   - **`Arrow keys`**: Scroll up and down.
   - **`Page Up/Page Down`**: Scroll by pages.
   - **`g`**: Go to the **beginning** of the file.
   - **`G`**: Go to the **end** of the file.
   - **`/search_term`**: Search for `search_term` in the file.
   - **`q`**: Quit `less`.

---

### **Comparison**:

- **`cat`**: Good for quick viewing, concatenation, and file creation, but displays the entire file at once.
- **`less`**: Better for viewing larger files, allows for navigation and searching without loading the entire file into memory.

---

### Summary:

- **`cat`**: Displays, concatenates, and creates files. Use it for smaller files or quick outputs.
- **`less`**: Provides a paginated view of files, making it suitable for larger files and navigation.

## File Control Made Easy: The Power of Head, Tail, tac, and rev commands

### **File Control Commands: `head`, `tail`, `tac`, and `rev`**

These commands are used to manipulate and view the contents of files in Linux. Each serves a different purpose, making file control easier.

---

### 1. **`head` Command**:

- **Purpose**: Displays the **beginning** of a file.

#### Usage:

```bash
head filename.txt
```

- By default, shows the **first 10 lines** of the file.

#### Options:

- **`-n N`**: Display the first **N lines**.
  ```bash
  head -n 5 filename.txt
  ```
  - Shows the first 5 lines of `filename.txt`.

---

### 2. **`tail` Command**:

- **Purpose**: Displays the **end** of a file.

#### Usage:

```bash
tail filename.txt
```

- By default, shows the **last 10 lines** of the file.

#### Options:

- **`-n N`**: Display the last **N lines**.

  ```bash
  tail -n 5 filename.txt
  ```

  - Shows the last 5 lines of `filename.txt`.

- **`-f`**: Continuously monitor the file for new lines (useful for log files).
  ```bash
  tail -f logfile.txt
  ```
  - Displays new lines added to `logfile.txt` in real-time.

---

### 3. **`tac` Command**:

- **Purpose**: Displays the contents of a file in **reverse order**, line by line.

#### Usage:

```bash
tac filename.txt
```

- Outputs the entire file, starting from the last line to the first.

---

### 4. **`rev` Command**:

- **Purpose**: Reverses the **characters** in each line of a file.

#### Usage:

```bash
rev filename.txt
```

- Outputs each line of `filename.txt` with the characters in reverse order.

---

### Summary:

- **`head`**: View the first lines of a file.
- **`tail`**: View the last lines of a file; useful for monitoring logs with `-f`.
- **`tac`**: View the file in reverse order by lines.
- **`rev`**: Reverse the characters in each line of a file.

## wc and sort Commands in Linux: Count Words, Lines, and Organize Files

### **`wc` Command** (Word Count):

- **Purpose**: Counts lines, words, and characters in a file.

#### Common Usage:

```bash
wc filename.txt
```

- Displays the **number of lines**, **words**, and **characters** in `filename.txt`.

#### Options:

- **`-l`**: Count **lines** only.

  ```bash
  wc -l filename.txt
  ```

- **`-w`**: Count **words** only.

  ```bash
  wc -w filename.txt
  ```

- **`-c`**: Count **bytes** (or characters).
  ```bash
  wc -c filename.txt
  ```

#### Example:

```bash
wc -l -w -c filename.txt
```

- Counts and displays the number of lines, words, and characters in `filename.txt`.

---

### **`sort` Command**:

- **Purpose**: Organizes lines in a file or input in **sorted order**.

#### Common Usage:

```bash
sort filename.txt
```

- Displays the contents of `filename.txt` sorted in **ascending order** (alphabetically).

#### Options:

- **`-r`**: Sort in **reverse** order.

  ```bash
  sort -r filename.txt
  ```

- **`-n`**: Sort numerically (useful for sorting numbers).

  ```bash
  sort -n filename.txt
  ```

- **`-k N`**: Sort based on the **N-th field** (useful for files with multiple columns).

  ```bash
  sort -k 2 filename.txt
  ```

- **`-o output.txt`**: Save the sorted output directly to a file.
  ```bash
  sort filename.txt -o sorted_file.txt
  ```

#### Example:

```bash
sort -r filename.txt
```

- Sorts the lines in `filename.txt` in reverse alphabetical order.

---

### Summary:

- **`wc`**: Counts lines, words, and characters in a file. Use options like `-l`, `-w`, and `-c` for specific counts.
- **`sort`**: Organizes lines in a file. Options like `-r`, `-n`, and `-k` allow for different sorting methods. Save sorted output with `-o`.
