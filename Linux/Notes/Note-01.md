# Linux

## Terminologies

The terms **terminal**, **shell**, and **bash** are often used interchangeably, but they refer to different concepts within the context of command-line interfaces. Here’s a breakdown of each:

- **Terminal**: The interface (software) that allows you to enter commands and see output.
- **Shell**: The program that interprets your commands and communicates with the operating system.
- **Bash**: A specific implementation of a shell that provides enhanced features and is widely used.

## Concepts

1. **Linux Terminal Prompt (`ayankhan@UBUNTU: ~$`)**: Username, hostname, current directory, and privilege level.
2. **Root User**: Superuser with full system access. Access via `sudo`, `sudo su`, or `su` (if root password is set).
3. **`sudo -i`**: Starts a root login shell with root's environment and settings, simulating a full root login session.

## Linux Directory structure

The **directory structure** in Linux is organized in a **hierarchical tree format** that starts from a root directory (`/`). This structure helps organize files and directories efficiently, with each directory serving a specific purpose.

Here’s a breakdown of the Linux directory structure:

### 1. **Root Directory (`/`)**:

- The topmost directory in Linux. Every file and directory starts from the root.
- All other directories are its subdirectories.

---

### 2. **Important Directories Under `/`**:

- **`/bin`** (Binary):

  - Contains essential **binary executable files** like basic commands (`ls`, `cp`, `mv`, `cat`, etc.).
  - Accessible to all users, and these programs are required for system functionality.

- **`/sbin`** (System Binary):

  - Contains **system administration binaries** that are typically used by the root user (e.g., `ifconfig`, `reboot`).
  - Used for system maintenance and management tasks.

- **`/boot`**:

  - Stores the **boot loader files** needed to boot the system, such as the Linux kernel and `grub` configuration files.

- **`/dev`** (Devices):

  - Contains **device files** that represent hardware components like hard drives (`/dev/sda`), printers, and USB devices.
  - Allows software to interact with hardware devices as though they were files.

- **`/etc`** (Editable Text Configurations):

  - Stores **configuration files** for the system and applications.
  - Examples: `/etc/passwd` (user information), `/etc/hostname`, `/etc/ssh/sshd_config`.

- **`/home`**:

  - Contains **personal directories** for each user on the system.
  - Example: `/home/user` for a user named `user`.
  - Users store personal files and settings here.

- **`/lib`** (Libraries):

  - Stores **essential shared libraries** needed by binaries in `/bin` and `/sbin`.
  - These are comparable to DLL files in Windows.

- **`/media`** and **`/mnt`** (Mount Points):

  - **`/media`**: Where **removable media** like CDs, DVDs, and USB drives are automatically mounted.
  - **`/mnt`**: Used to manually **mount file systems** like external drives, partitions, or network locations.

- **`/opt`** (Optional):

  - Contains **optional software** installed by the user, especially large third-party applications.

- **`/proc`**:

  - A **virtual filesystem** that provides information about system processes and hardware.
  - Files like `/proc/cpuinfo` give details about the system’s CPU.

- **`/root`**:

  - The **home directory** for the root (superuser) account. It’s separate from `/home`, as it is reserved for the root user only.

- **`/run`**:

  - Stores **runtime information** (like process IDs, sockets) that is available from the last system boot and deleted when the system reboots.

- **`/srv`** (Service):

  - Holds **data for services** provided by the system, such as web servers (e.g., `/srv/http`).

- **`/tmp`** (Temporary):

  - Used for storing **temporary files** created by users or programs. Files here are often cleared upon system reboot.

- **`/usr`** (User System Resources):

  - Contains **user utilities and applications**.
  - Key subdirectories include:
    - **`/usr/bin`**: Non-essential user binaries (user-installed applications).
    - **`/usr/sbin`**: Non-essential system binaries.
    - **`/usr/lib`**: Libraries for `/usr/bin` and `/usr/sbin` binaries.

- **`/var`** (Variable):
  - Stores files that are expected to **grow** in size (i.e., vary) over time, such as logs, caches, and spools.
  - Key subdirectories:
    - **`/var/log`**: System and application log files.
    - **`/var/spool`**: Files waiting to be processed, such as print jobs.

---

### 3. **Special Directories**:

- **`/lost+found`**:

  - Used for **recovering corrupted files** during system recovery after a crash or file system errors. It exists in each partition.

- **`/sys`**:
  - A virtual file system similar to `/proc`, but focuses on providing **information about devices** connected to the system.

---

### 4. **File Path Types**:

- **Absolute Path**: Starts from the root directory (`/`). Example: `/home/user/documents/file.txt`
- **Relative Path**: Relative to the current working directory. Example: `documents/file.txt`

---

### Summary of Linux Directory Structure

- **`/` (Root)**: The top-level directory.
- **System Binaries**: `/bin`, `/sbin`.
- **Configuration Files**: `/etc`.
- **User Data**: `/home`.
- **Libraries**: `/lib`.
- **Removable Media Mounting**: `/media`, `/mnt`.
- **Temporary Files**: `/tmp`.
- **System Information**: `/proc`, `/sys`.
- **Logs and Variable Data**: `/var`.

## Common commands

`Command template`: command [options] [arguments]

### `cal`: Calendar

1. **`cal`**: Displays the current month's calendar.
2. **`cal -y`**: Shows the entire calendar for the current year.
3. **`cal [month] [year]`**: Displays the calendar for a specific month and year.
4. **`cal -3`**: Shows the previous, current, and next months.
5. **`cal -h`**: Disables highlighting of the current day (if enabled by default).

### `man`: manual

#### 1. **`man` Command**:

- Displays manual pages for Linux commands, providing detailed documentation on usage, options, and examples.
- Basic usage: `man [command]` (e.g., `man ls`).

#### 2. **SYNOPSIS Section**:

- Provides a concise summary of how to use a command, showing command structure, available options, and required arguments.

#### 3. **Key Symbols in SYNOPSIS**:

- **Square Brackets (`[]`)**: Indicate optional elements.
- **Ellipses (`...`)**: Indicate that the preceding item can be repeated.
- **Angle Brackets (`<>`)**: Indicate required arguments.
- **Vertical Bars (`|`)**: Indicate a choice between options.

#### 4. **Real-Life Examples**:

- **`cp` Command**:

  - **SYNOPSIS**: `cp [OPTION]... <source> <destination>`
  - **Example**: `cp -r /source_directory /destination_directory`

- **`mkdir` Command**:

  - **SYNOPSIS**: `mkdir [OPTION]... <directory>`
  - **Example**: `mkdir /home/user/new_folder`

- **`tar` Command**:

  - **SYNOPSIS**: `tar [OPTION]... [--file=ARCHIVE] [FILE]...`
  - **Example**: `tar -czf archive.tar.gz --directory=/path/to/dir file1.txt | file2.txt`

- **`rsync` Command**:

  - **SYNOPSIS**: `rsync [OPTION]... [SOURCE]... [DESTINATION]`
  - **Example**: `rsync -avz /source_directory/ /destination_directory/`

- **`git commit` Command**:
  - **SYNOPSIS**: `git commit [OPTIONS] [--] [<pathspec>...]`
  - **Example**: `git commit -m "Update README" -- README.md`

#### Summary of man command

- The `man` command provides essential documentation for understanding how to use various Linux commands, with the SYNOPSIS section being crucial for understanding command structure and usage. Key symbols help clarify the nature of options and arguments, while real-life examples illustrate practical usage.
