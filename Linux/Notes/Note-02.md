# Lecture-02

## PWD and LS

### 1. **`pwd` Command** (Print Working Directory):

- **Purpose**: Displays the **current directory** you're working in.
- **Usage**: Simply type `pwd` in the terminal, and it prints the **absolute path** of the current working directory.

#### Example:

```bash
$ pwd
/home/user/Documents
```

- Output: `/home/user/Documents` shows that you are currently in the "Documents" directory.

#### Why Use `pwd`?

- To check your current location in the file system.

---

### 2. **`ls` Command** (List):

- **Purpose**: Lists the **contents** (files and directories) of the current directory or a specified directory.

#### Basic Usage:

```bash
ls
```

- Lists files and directories in the current location.

#### Common `ls` Options:

- **`ls -l`**: Lists in **long format**, showing file permissions, ownership, size, and modification date.
- **`ls -a`**: Lists **all files**, including hidden files (files that start with a `.`).
- **`ls -lh`**: Lists in human-readable format (with file sizes in KB, MB, etc.).
- **`ls -R`**: Lists files **recursively**, including contents of subdirectories.

#### Example

```bash
$ ls
Documents  Downloads  Pictures  file.txt
```

- Output: Lists the files and directories in the current directory (`Documents`, `Downloads`, `Pictures`, and `file.txt`).

```bash
$ ls -l
drwxr-xr-x 2 user user 4096 Oct 15 10:00 Documents
-rw-r--r-- 1 user user   50 Oct 15 10:00 file.txt
```

- Output: Shows detailed information about each file and directory, including permissions, owner, size, and modification time.

## Absolute vs Relative paths

### Absolute Path:

- A **full path** from the **root (`/`)** to the file or directory.
- Always starts with `/`.
- Example: `/home/user/Documents/file.txt`.
- Works the same no matter where you are in the file system.

### Relative Path:

- A **path relative** to your **current directory**.
- Does **not** start with `/`.
- Example: `Documents/file.txt` (if you're in `/home/user`).
- Special symbols:
  - `.` = Current directory.
  - `..` = Parent directory.

### Key Differences:

- **Absolute**: Always the full path from root.
- **Relative**: Depends on where you are in the file system.

## touch, mkdir and file

### **`touch`**:

- **Creates** a new file or **updates** an existing file's timestamp.
- Example: `touch file.txt`

---

### **`mkdir`**:

- **Creates** a new directory.
- Example: `mkdir folder`
- Use `-p` to create **nested directories**.
- Example: `mkdir -p parent/child`

---

### **`file`**:

- **Identifies** the type of a file (text, image, binary, etc.).
- Example: `file file.txt`

---

Concise:

- `touch` → Create/Update file.
- `mkdir` → Create directory.
- `file` → Show file type.

## Nano Editor

### Basics of the **`nano`** Editor:

#### 1. **Opening a File**:

```bash
nano filename
```

- Opens the file for editing. If it doesn't exist, a new file is created.

#### 2. **Basic Commands**:

- **`Ctrl + O`**: Save the file (**O** for "output").
- **`Ctrl + X`**: Exit the editor.
- **`Ctrl + K`**: Cut the current line.
- **`Ctrl + U`**: Paste the last cut line.
- **`Ctrl + W`**: Search within the file.

#### 3. **Navigation**:

- **Arrow keys**: Move the cursor around the text.
- **`Ctrl + A`**: Move to the beginning of the line.
- **`Ctrl + E`**: Move to the end of the line.

#### 4. **Exiting Nano**:

- **`Ctrl + X`**: Prompts to save if you haven’t already. Press `Y` to confirm saving, or `N` to exit without saving.

---

## rm command

### **`rm` Command** (Remove):

- **Purpose**: Deletes **files** or **directories** in Linux.

#### Usage:

```bash
rm filename
```

- Deletes the specified file.

#### Common Options:

- **`rm -r`**: Recursively delete a **directory and its contents**.
  ```bash
  rm -r directory_name
  ```
- **`rm -f`**: **Force deletion** without prompting for confirmation, even if the file is write-protected.
  ```bash
  rm -f filename
  ```
- **`rm -rf`**: Combines **recursive** and **force** options to delete directories and files **without confirmation**.
  ```bash
  rm -rf directory_name
  ```

#### Example:

```bash
rm myfile.txt
```

- Deletes `myfile.txt`.

```bash
rm -rf myfolder
```

- Forcefully deletes the `myfolder` directory and all its contents.

---

### **Warning**:

- Be cautious with `rm -rf`, as it can **permanently delete** files and directories **without recovery**.

---

### Summary:

- **`rm`**: Deletes files or directories.
- **`rm -r`**: Deletes directories and their contents recursively.
- **`rm -f`**: Force deletion without prompts.
- **`rm -rf`**: Forcefully delete everything, including directories.
