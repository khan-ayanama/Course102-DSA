# Lecture-07

## Introduction to permissions concept in Linux for files and directories

In Linux, **permissions** control who can read, write, or execute files and directories. Understanding Linux permissions is key to managing security and user access in the system.

### 1. **Permission Types**

Linux uses three types of permissions:

- **Read (r)**: The ability to view the contents of a file or list the contents of a directory.
- **Write (w)**: The ability to modify the contents of a file or make changes within a directory (e.g., create, delete, or rename files).
- **Execute (x)**: The ability to run a file (if it’s a script or program) or traverse a directory (enter the directory).

### 2. **Users and Groups**

Permissions are applied to three different categories:

- **Owner**: The user who owns the file or directory.
- **Group**: A group of users who are assigned similar permissions.
- **Others**: All other users on the system.

### 3. **Permission Format**

Permissions are displayed using a 10-character string when you run `ls -l` in the terminal. For example:

```
-rwxr-xr--
```

This string breaks down as follows:

- The first character indicates the type of file:
  - `-` for a regular file
  - `d` for a directory
  - `l` for a symbolic link
- The next 9 characters are divided into three sets of three (for owner, group, and others):
  - The first set: **Owner permissions** (e.g., `rwx` = read, write, execute)
  - The second set: **Group permissions** (e.g., `r-x` = read, execute)
  - The third set: **Others' permissions** (e.g., `r--` = read-only)

### 4. **Changing Permissions**

To change permissions, you use the `chmod` command. There are two ways to set permissions: **symbolic** and **numeric (octal)**.

#### Symbolic Method:

```bash
chmod u+x file.txt  # Add execute permission to the user (owner)
chmod g-w file.txt  # Remove write permission for the group
chmod o+r file.txt  # Add read permission for others
```

- `u`: owner (user)
- `g`: group
- `o`: others
- `+`: add permission
- `-`: remove permission
- `=`: set permission

#### Numeric (Octal) Method:

Permissions can also be set using a three-digit number, where each digit represents the permissions for the owner, group, and others, respectively.

- **4** = read
- **2** = write
- **1** = execute

You sum the numbers to define the permission. For example:

```bash
chmod 754 file.txt
```

- **7 (4+2+1)** = read, write, execute (owner)
- **5 (4+1)** = read, execute (group)
- **4** = read-only (others)

### 5. **Directories vs. Files**

- **Files**: The `read` permission allows viewing the content, `write` allows modifying the content, and `execute` allows running it as a program.
- **Directories**: The `read` permission allows listing contents, `write` allows adding/removing files, and `execute` allows entering the directory.

### 6. **Common Permission Settings**

- **644 (rw-r--r--)**: Typical for text files, where the owner can read and write, and others can only read.
- **755 (rwxr-xr-x)**: Common for directories or executable files, allowing the owner full access and others to read and execute.

## Master su and sudo for Superuser Access

In Linux, **superuser** access is required for certain system administration tasks, such as installing software, managing users, or modifying system files. Two common commands for superuser access are **`su`** and **`sudo`**.

### 1. **`su` Command: Switch User**

The `su` command allows you to **switch to another user account**, usually the root (superuser) account.

- When run without any options, `su` switches to the root user and asks for the **root password**.

  ```bash
  su
  ```

  After entering the root password, you have full superuser privileges.

- To switch to another user (besides root), use the following syntax:

  ```bash
  su <username>
  ```

  After entering the specified user's password, you are logged in as that user.

- To exit back to your original user account, type `exit` or press `Ctrl+D`.

#### `su` Options:

- `su -`: This option loads the target user’s environment variables (e.g., PATH) and behaves as if you've logged in as that user from the start. For example, to simulate a full root login:

  ```bash
  su -
  ```

- `su -c "command"`: Allows you to run a single command as another user without fully switching users:

  ```bash
  su -c "ls /root"
  ```

This runs the command `ls /root` with root privileges.

### 2. **`sudo` Command: Execute as Superuser (or Another User)**

The `sudo` command is used to **run a single command with superuser privileges**, but **without switching users**. Instead of requiring the root password, it asks for **your own user password** (if you have `sudo` privileges).

For example:

```bash
sudo apt-get update
```

This command runs `apt-get update` as root, asking for your password if it's the first use in a session.

#### Benefits of `sudo`:

- **Limited use of root access**: You only temporarily use root privileges for specific commands, which reduces the risk of accidental damage.
- **Auditability**: Actions performed using `sudo` are logged in `/var/log/auth.log`, providing a security audit trail.
- **Granular control**: Using the `/etc/sudoers` file, administrators can define specific commands that users can run with `sudo` without giving full root access.

#### `sudo` Options:

- `sudo -u <username> <command>`: Run a command as a different user:

  ```bash
  sudo -u john ls /home/john
  ```

- `sudo su -`: This allows you to switch to the root user (or another user) using `sudo` privileges.

  ```bash
  sudo su -
  ```

  This runs `su -` as root but only requires **your password** (if you're allowed `sudo` privileges).

- `sudo -s`: Opens a new shell with root privileges but without switching to the root environment:

  ```bash
  sudo -s
  ```

- `sudo !!`: Re-run the previous command with `sudo`. For instance, if you forgot to use `sudo` with a command that requires it:

  ```bash
  apt-get install somepackage  # fails due to insufficient privileges
  sudo !!                      # re-runs the above command with sudo
  ```

### 3. **`/etc/sudoers` and Managing Permissions**

The `/etc/sudoers` file controls which users can run `sudo` and what commands they can execute. It's edited using `visudo` to prevent syntax errors.

- To give a user full `sudo` access, add them to the `sudo` group:

  ```bash
  usermod -aG sudo <username>
  ```

- Example `sudoers` entry for allowing a user to run only specific commands:

  ```
  john ALL=(ALL:ALL) /usr/bin/apt-get, /usr/bin/systemctl
  ```

This allows the user `john` to run only `apt-get` and `systemctl` as root.

### 4. **Differences Between `su` and `sudo`**

- **Password**:

  - `su`: Requires the **root password** to switch to the root user.
  - `sudo`: Requires the **user's own password** if they are authorized to use `sudo`.

- **Scope**:

  - `su`: Grants full root access until you manually exit.
  - `sudo`: Grants root privileges **only for a specific command**.

- **Security**:
  - `su`: Users with the root password have full control of the system.
  - `sudo`: More secure because it limits root access to specific commands and users, and logs actions for auditing.

### Etymology:

- **`su`**: From **"substitute user"** or **"switch user"**. It allows you to switch from one user to another.
- **`sudo`**: Short for **"superuser do"**. It allows users to execute commands as a superuser or another user.

## chown

The `chown` command in Linux/Ubuntu is used to **change the ownership of files and directories**. Ownership of files and directories is essential for controlling access and permissions, ensuring only authorized users or groups can interact with them.

This tutorial covers the syntax, options, and examples of how to use the `chown` command.

### 1. **Basic Concepts of Ownership**

- **Owner**: The user who owns the file or directory.
- **Group**: A group of users who share ownership of the file or directory. This allows multiple users to access a file without changing global permissions.

In Linux, files have both an owner and a group. To view the ownership of a file, you can use `ls -l`:

```bash
ls -l file.txt
```

Example output:

```
-rw-r--r-- 1 alice developers 2048 Oct 21 10:32 file.txt
```

- `alice`: The owner of the file.
- `developers`: The group that owns the file.
- `2048`: The file size in bytes.
- `Oct 21`: The date of the last modification.

### 2. **Syntax of `chown`**

The basic syntax for the `chown` command is:

```bash
chown [OPTION] [OWNER][:GROUP] FILE
```

- `OWNER`: The new owner of the file.
- `GROUP`: The new group of the file.
- `FILE`: The file or directory whose ownership you want to change.
- `OPTION`: Optional flags that modify how `chown` works (discussed below).

### 3. **Changing File Owner**

To change the owner of a file:

```bash
chown newuser file.txt
```

This changes the owner of `file.txt` to `newuser`. The group remains unchanged.

### 4. **Changing File Group**

To change the group of a file without altering the owner:

```bash
chown :newgroup file.txt
```

This command changes the group of `file.txt` to `newgroup` while keeping the owner the same.

### 5. **Changing Both Owner and Group**

You can change both the owner and group in a single command:

```bash
chown newuser:newgroup file.txt
```

This changes the owner to `newuser` and the group to `newgroup`.

### 6. **Recursive Ownership Change**

If you want to change the ownership of a directory and all its contents (subdirectories and files), use the `-R` (recursive) option:

```bash
chown -R newuser:newgroup /path/to/directory
```

This applies the ownership change to the directory, its subdirectories, and every file within them.

### 7. **Options with `chown`**

- **`-R` (Recursive)**: Changes ownership of the directory and its contents recursively.

  Example:

  ```bash
  chown -R alice:developers /var/www/html
  ```

- **`--reference`**: Changes the ownership of a file to match another file.

  Example:

  ```bash
  chown --reference=referencefile.txt targetfile.txt
  ```

  This command changes the ownership of `targetfile.txt` to match `referencefile.txt`.

- **`-c` (Changes)**: Reports when a change is made.

  Example:

  ```bash
  chown -c alice file.txt
  ```

  This outputs a message only if the ownership changes.

- **`-v` (Verbose)**: Outputs detailed information about what `chown` is doing.

  Example:

  ```bash
  chown -v alice:developers file.txt
  ```

  This command provides verbose output about the ownership change.

- **`-f` (Force)**: Suppresses most error messages. This is useful when you expect some errors but want the command to keep running.

  Example:

  ```bash
  chown -f newuser file.txt
  ```

### 8. **Ownership Change for Symbolic Links**

By default, `chown` doesn’t affect symbolic links. When you run `chown` on a symbolic link, it changes the ownership of the **target** file, not the link itself. To modify the symbolic link itself (not the target), use the `-h` option:

```bash
chown -h newuser symlink
```

### 9. **Common Usage Examples**

- **Change the owner of a single file**:

  ```bash
  chown alice file.txt
  ```

- **Change the owner and group of a directory and its contents**:

  ```bash
  chown -R alice:developers /home/alice
  ```

- **Change group only, without changing owner**:

  ```bash
  chown :developers file.txt
  ```

- **Change ownership to the same as another file**:
  ```bash
  chown --reference=file1.txt file2.txt
  ```

### 10. **Check Ownership Before and After**

To confirm the ownership change, use `ls -l`:

Before:

```bash
ls -l file.txt
# Output:
# -rw-r--r-- 1 bob users 4096 Oct 21 10:10 file.txt
```

Change ownership:

```bash
chown alice:developers file.txt
```

After:

```bash
ls -l file.txt
# Output:
# -rw-r--r-- 1 alice developers 4096 Oct 21 10:10 file.txt
```

### Etymology of "chown":

- The command **`chown`** stands for **"change owner"**. It derives from _"ch"_ (change) and _"own"_ (ownership), indicating its function to change file ownership.

## Master groupadd & usermod Commands for creating groups and the users in Linux

In Linux, managing users and groups is crucial for maintaining security and organizing user permissions. The **`groupadd`** command is used to create new groups, while the **`usermod`** command is used to modify existing users, including adding users to groups. This guide will cover both commands and how to use them effectively.

---

### 1. **`groupadd` Command: Creating Groups**

The `groupadd` command is used to **create new groups** in the system, which can then be assigned to users. This helps in managing permissions more effectively by grouping users with similar access needs.

#### **Basic Syntax:**

```bash
groupadd [OPTIONS] group_name
```

#### **Common Options:**

- **`-g GID`**: Specifies a Group ID (GID) for the new group. If you don’t specify this, the system automatically assigns one.

  Example:

  ```bash
  groupadd -g 1050 developers
  ```

  This creates a group named `developers` with GID 1050.

- **`-r`**: Creates a system group. A system group is typically used for internal processes or system accounts.

  Example:

  ```bash
  groupadd -r sysadmin
  ```

  This creates a system group named `sysadmin`.

- **`-f`**: If the group already exists, this option prevents an error message and ensures that `groupadd` does nothing.

#### **Creating a New Group:**

```bash
groupadd developers
```

This creates a new group called `developers` with a default GID assigned by the system.

---

### 2. **`usermod` Command: Modifying Users**

The `usermod` command is used to **modify existing user accounts**, including adding users to groups or changing their primary or secondary groups.

#### **Basic Syntax:**

```bash
usermod [OPTIONS] username
```

#### **Common Options:**

- **`-a -G group`**: This is one of the most common options. It appends (adds) the user to a supplementary group without removing the user from other groups.

  Example:

  ```bash
  usermod -a -G developers alice
  ```

  This adds the user `alice` to the `developers` group without affecting her membership in other groups.

- **`-G group1,group2,...`**: Assigns a list of groups to the user, but it **replaces all existing supplementary groups** (use carefully). This is not the same as appending groups; it overwrites the user's group memberships.

  Example:

  ```bash
  usermod -G developers,sysadmin alice
  ```

  This sets the supplementary groups for `alice` to `developers` and `sysadmin`, **removing** her from any other groups she was part of.

- **`-g group`**: Changes the primary group of the user. Each user has one primary group (usually the same as their username).

  Example:

  ```bash
  usermod -g developers bob
  ```

  This changes Bob’s primary group to `developers`.

- **`-L` / `-U`**: Locks or unlocks a user’s password, which can be useful for temporarily disabling a user account.

  Example:

  ```bash
  usermod -L bob
  ```

  This locks the account of `bob`.

#### **Adding a User to a Group (Primary vs. Secondary Groups):**

- **Primary group**: Every user has a primary group (default when creating files or directories).
- **Secondary groups**: Users can belong to additional groups for access control purposes.

##### Example of Adding a User to a Secondary Group:

To add an existing user to the `developers` group as a **secondary** group:

```bash
usermod -a -G developers alice
```

This adds `alice` to the `developers` group **without affecting** her other group memberships.

##### Changing the Primary Group:

To change Alice’s primary group to `developers`:

```bash
usermod -g developers alice
```

---

### 3. **Creating a User and Adding to a Group**

You can combine user creation with group assignment. When creating a new user, you can immediately assign them to a group:

```bash
useradd -G developers alice
```

This creates the user `alice` and adds her to the `developers` group.

Alternatively, if you want to set the primary group during user creation:

```bash
useradd -g developers alice
```

---

### 4. **Viewing Group Membership**

To view the groups a user belongs to, use the `groups` command:

```bash
groups alice
```

This displays all the groups `alice` is a member of.

Alternatively, you can use the `id` command to see the user’s primary and supplementary groups:

```bash
id alice
```

---

### 5. **Managing Group Information with `groupmod`**

The `groupmod` command allows you to modify existing groups. For example, you can change the GID of a group or rename a group.

- **Change the GID**:

  ```bash
  groupmod -g 1051 developers
  ```

- **Rename a Group**:
  ```bash
  groupmod -n dev_team developers
  ```

This renames the `developers` group to `dev_team`.

---

### 6. **Removing Users from Groups**

To remove a user from a group, you must **overwrite** their group list by reassigning the groups they should be in (without including the group you want to remove).

```bash
usermod -G sysadmin alice
```

This removes `alice` from the `developers` group and keeps her in the `sysadmin` group.

---

### Example Workflow: Create a Group and Add Users

Here’s a complete workflow for creating a group and adding users to it:

1. **Create a group**:

   ```bash
   groupadd developers
   ```

2. **Create users and assign them to the group**:

   ```bash
   useradd -G developers alice
   useradd -G developers bob
   ```

3. **Add an existing user to the group**:

   ```bash
   usermod -a -G developers carol
   ```

4. **Verify group membership**:

   ```bash
   groups alice
   ```

5. **Remove a user from the group**:
   ```bash
   usermod -G sysadmin alice
   ```

---

### 7. **Etymology of `groupadd` and `usermod`**

- **`groupadd`**: Derived from _"group"_ and _"add"_, it refers to adding new groups to the system.
- **`usermod`**: From _"user"_ and _"modify"_, it indicates modifying user attributes, such as group memberships or account details.
