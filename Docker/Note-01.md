# Lecture-01

## Hypervisor

A **hypervisor**, also known as a **virtual machine monitor (VMM)**, is software that creates and runs **virtual machines (VMs)**. It allows multiple operating systems to share a single hardware host, with each operating system running as a **guest** on a virtual machine, while the hypervisor manages the system's resources and ensures that each virtual machine operates independently.

### **Types of Hypervisors:**

There are two main types of hypervisors: **Type 1 (Bare Metal)** and **Type 2 (Hosted)**.

---

### **1. Type 1 Hypervisor (Bare Metal Hypervisor)**

- **Definition**: A Type 1 hypervisor runs **directly on the host’s hardware**. It doesn't need an underlying operating system to function. Instead, the hypervisor itself is the operating system, managing all hardware resources and VMs.

- **How it works**: The hypervisor has direct access to the system’s physical hardware (like CPU, memory, storage) and manages these resources across multiple VMs. These VMs, in turn, run their own operating systems (guest OS), isolated from each other.

- **Examples**:

  - **VMware ESXi**
  - **Microsoft Hyper-V**
  - **Xen (open-source)**
  - **KVM (Kernel-based Virtual Machine)** (Linux-based)

- **Use Case**: Type 1 hypervisors are typically used in **enterprise environments**, **data centers**, or **cloud environments** because they are more efficient and provide better performance by interacting directly with the hardware. They are often used for **server virtualization**, large-scale **cloud infrastructure** (like AWS, Azure), and **enterprise computing**.

- **Advantages**:
  - **High Performance**: Direct access to hardware leads to minimal overhead.
  - **Security**: The isolation between VMs makes it secure, as it runs directly on the hardware without an extra OS layer.
  - **Resource Efficiency**: Better utilization of system resources for virtualization.

---

### **2. Type 2 Hypervisor (Hosted Hypervisor)**

- **Definition**: A Type 2 hypervisor runs on top of an existing **operating system** (host OS) and relies on the host OS to manage calls to the system’s hardware resources.

- **How it works**: Since it runs as an application on the host OS, the Type 2 hypervisor doesn't have direct access to the system's hardware. It works by coordinating with the host OS to manage resources like CPU, memory, and storage for virtual machines.

- **Examples**:

  - **VMware Workstation**
  - **Oracle VirtualBox**
  - **Parallels Desktop (for macOS)**
  - **QEMU (Quick Emulator)**

- **Use Case**: Type 2 hypervisors are commonly used in **non-enterprise environments**, such as on **desktops** or **personal devices** where users want to run multiple operating systems for testing, development, or compatibility reasons (e.g., running Windows and Linux on the same machine). They are also used for **local development** and **lab testing environments**.

- **Advantages**:

  - **Ease of Use**: Easy to install and use as it runs like any other software on an existing OS.
  - **Good for Development**: Ideal for developers or hobbyists needing to test or run multiple operating systems without complex setup.

- **Disadvantages**:
  - **Performance**: Type 2 hypervisors have additional overhead because they rely on the host OS to manage hardware resources, leading to slower performance compared to Type 1.
  - **Security**: Since they run on top of an existing OS, they may be less secure and more prone to vulnerabilities than Type 1 hypervisors.

---

### **Key Differences: Type 1 vs. Type 2 Hypervisors**

| **Feature**             | **Type 1 Hypervisor (Bare Metal)**                          | **Type 2 Hypervisor (Hosted)**                       |
| ----------------------- | ----------------------------------------------------------- | ---------------------------------------------------- |
| **Runs on**             | Bare metal hardware (directly on physical host)             | Existing operating system                            |
| **Performance**         | Higher performance, minimal overhead due to direct access   | Lower performance, as it depends on the host OS      |
| **Use Case**            | Enterprise environments, data centers, cloud infrastructure | Personal use, development, testing, lab environments |
| **Installation**        | Installed directly on hardware (no host OS needed)          | Runs as an application within the host OS            |
| **Examples**            | VMware ESXi, Hyper-V, Xen, KVM                              | VMware Workstation, VirtualBox, Parallels, QEMU      |
| **Resource Management** | More efficient resource allocation                          | Less efficient resource allocation due to host OS    |
| **Security**            | More secure due to fewer layers between VM and hardware     | Potentially less secure as it relies on the host OS  |
| **Cost**                | Typically requires enterprise licenses or subscriptions     | Generally free or lower-cost solutions               |

---

### **In Summary:**

- **Type 1 (Bare Metal Hypervisors)** are high-performance hypervisors that run directly on the hardware and are mainly used in enterprise environments for virtualization on servers.
- **Type 2 (Hosted Hypervisors)** run as software on top of an existing operating system and are suitable for personal or non-critical environments like development and testing.

Choosing between Type 1 and Type 2 hypervisors depends on the use case. Type 1 is preferred for performance-critical enterprise workloads, while Type 2 is ideal for ease of use and development/testing scenarios.

## Limitations of Virtual Machine over container and Physical Server

Virtual Machines (VMs), containers, and physical servers are key technologies used to run applications and services, each with its own strengths and limitations. Below are the **limitations of Virtual Machines** when compared to both **containers** and **physical servers**:

---

### **1. Limitations of Virtual Machines Over Containers**

**a. Resource Overhead**

- **VMs**: Each VM runs a full operating system (guest OS), along with its own set of binaries and libraries. This results in more resource overhead (CPU, memory, and storage), as each VM requires its own OS kernel, which increases memory usage and boot time.
- **Containers**: Containers share the host operating system kernel, which reduces overhead significantly. As a result, containers are more lightweight and efficient in terms of CPU, memory, and storage consumption.

**b. Boot Time**

- **VMs**: Since a VM runs a full OS, the boot time for a virtual machine can be significantly longer, often ranging from several seconds to minutes, depending on the OS.
- **Containers**: Containers boot in a matter of seconds or even milliseconds, as they don’t need to start a separate OS, only the application and dependencies.

**c. Isolation Level**

- **VMs**: VMs provide strong isolation at the hardware level, as each VM runs its own OS kernel. However, this isolation can sometimes be overkill for lightweight applications.
- **Containers**: Containers provide application-level isolation. While this is generally sufficient for most use cases, it does not provide the same level of isolation as VMs because containers share the host OS kernel, which could theoretically lead to a greater security risk in some scenarios.

**d. Portability**

- **VMs**: Virtual machines are less portable due to their size and the need to replicate an entire OS environment. Migrating a VM from one environment to another (e.g., cloud to on-premise) can be cumbersome.
- **Containers**: Containers are extremely portable because they only bundle the application and its dependencies, making it easier to deploy and run them across different environments (e.g., development, staging, production).

**e. Efficiency in Microservices Architecture**

- **VMs**: Running a microservices architecture with multiple VMs for each service introduces considerable overhead, as each service would run on a separate VM with its own OS. This results in inefficient resource utilization.
- **Containers**: Containers are ideal for microservices since they are lightweight and can easily be orchestrated using tools like Kubernetes. They consume fewer resources and are faster to deploy and manage.

**f. Deployment Speed and Flexibility**

- **VMs**: Setting up and configuring VMs can be time-consuming, and scaling VMs can be slow due to their larger resource footprint.
- **Containers**: Containers can be spun up, replicated, and torn down much faster. They are ideal for continuous integration/continuous deployment (CI/CD) pipelines because they allow for rapid iterations and scaling.

---

### **2. Limitations of Virtual Machines Over Physical Servers**

**a. Performance Overhead**

- **VMs**: Virtual machines introduce a performance overhead because they run on a hypervisor layer, which manages the virtual hardware and communicates with the host hardware. This extra layer of abstraction can reduce performance compared to running directly on a physical server.
- **Physical Servers**: In a physical server environment, applications run directly on the hardware, resulting in better performance, as there is no virtualization layer.

**b. Direct Hardware Access**

- **VMs**: VMs have indirect access to the host's hardware resources through the hypervisor. This can cause issues with latency or performance in applications that require direct access to hardware components (e.g., high-performance computing, GPU-bound tasks, or real-time applications).
- **Physical Servers**: On physical servers, applications can directly interact with hardware components (CPU, GPU, RAM, etc.), resulting in optimal performance for demanding workloads.

**c. Resource Contention**

- **VMs**: Multiple VMs running on the same physical server share the underlying hardware resources. This can lead to resource contention, where one VM may monopolize resources (CPU, memory, disk I/O), negatively affecting the performance of other VMs on the same host.
- **Physical Servers**: In a dedicated physical server environment, there is no resource contention since all hardware resources are dedicated to one workload or application.

**d. Scalability**

- **VMs**: While VMs provide flexibility in managing workloads, scaling them can be less efficient than scaling on physical servers. VMs require more storage space and compute power due to the need to run multiple guest OSes.
- **Physical Servers**: For workloads that require significant compute power, physical servers are typically more scalable in terms of raw hardware performance. Vertical scaling (adding more resources to a physical server) is more direct in physical machines.

**e. Maintenance and Cost Efficiency**

- **VMs**: VMs rely on the underlying hardware and the hypervisor. If the physical host encounters issues (hardware failure, hypervisor problems), it affects all VMs running on that host. Additionally, licensing and maintenance of VMs can be costly.
- **Physical Servers**: While physical servers require hardware maintenance and management, there is no additional cost for hypervisor management. In certain cases (high-performance computing), physical servers are more cost-effective due to the performance gains.

---

### **Summary: Key Limitations of VMs**

| **Limitation**                | **VMs vs. Containers**                                              | **VMs vs. Physical Servers**                                                         |
| ----------------------------- | ------------------------------------------------------------------- | ------------------------------------------------------------------------------------ |
| **Resource Overhead**         | VMs require full OS per instance, containers do not                 | VMs introduce hypervisor overhead, physical servers do not                           |
| **Performance**               | VMs are slower to boot and run compared to containers               | VMs have performance overhead due to virtualization                                  |
| **Isolation**                 | VMs provide stronger isolation, but containers are more lightweight | Physical servers offer maximum performance isolation                                 |
| **Portability**               | VMs are less portable compared to containers                        | Physical servers offer more predictable performance in certain use cases             |
| **Hardware Access**           | VMs have indirect access to hardware resources                      | Physical servers have direct hardware access                                         |
| **Scalability**               | Scaling VMs is resource-heavy compared to containers                | Physical servers are more efficient for certain large workloads                      |
| **Deployment and Management** | VMs take longer to deploy and manage compared to containers         | Physical servers require manual management, but VMs have added hypervisor management |

---

### **When to Use Virtual Machines, Containers, or Physical Servers**

- **Use VMs** if you need:

  - Strong isolation between different applications or tenants.
  - A need to run different operating systems on the same hardware.
  - Legacy applications that require full OS environments.

- **Use Containers** if you need:

  - Lightweight, fast, and scalable deployment of applications.
  - Applications that are easy to migrate across environments.
  - Microservices-based architecture or DevOps environments.

- **Use Physical Servers** if you need:
  - Maximum performance with direct access to hardware.
  - High-performance computing, real-time, or latency-sensitive applications.
  - Dedicated resources without the overhead of a hypervisor.

## What is a container and different containerization tools available

### **What is a Container?**

A **container** is a lightweight, portable, and efficient method to package applications and their dependencies (libraries, binaries, configurations) together in an isolated environment. Unlike virtual machines, containers do not need an entire operating system to run. They share the host operating system’s kernel but are isolated from each other and the system, ensuring that the application within the container operates the same way, regardless of the environment.

Key features of containers include:

- **Isolation**: Each container runs in its own isolated space (namespace) with its own network, process tree, and filesystem.
- **Portability**: Containers can run consistently across different environments (development, testing, production) without worrying about differences in OS or libraries.
- **Efficiency**: Containers are lightweight, with minimal overhead, as they share the host OS kernel rather than running separate OS instances like virtual machines.
- **Scalability**: Containers are ideal for scaling microservices architectures because they can be quickly replicated or scaled horizontally.

### **How Containers Work**

Containers use **namespaces** and **cgroups** (control groups) provided by the host OS kernel to isolate and limit the resources each container can use. Containers run in separate namespaces for processes, network, filesystem mounts, etc., and cgroups ensure that the containers do not consume more resources than allowed.

---

### **Popular Containerization Tools**

There are several containerization tools available, each offering a way to create, deploy, and manage containers. Below are some of the most widely used containerization tools:

---

### **1. Docker**

- **Overview**: Docker is the most popular and widely used containerization tool. It provides a platform for developers to package applications and their dependencies into standardized units called **Docker containers**.
- **Key Features**:
  - **Docker Hub**: A public repository for sharing and downloading container images.
  - **Docker Compose**: Tool to define and run multi-container Docker applications.
  - **Docker Swarm**: Built-in container orchestration (although Kubernetes has become the industry standard).
  - **Portability**: Containers can run across different environments (cloud, local, on-premise).
- **Use Case**: Used for application development, microservices, DevOps practices, and cloud-native applications.

---

### **2. Kubernetes (K8s)**

- **Overview**: Kubernetes is an open-source **container orchestration** platform for automating the deployment, scaling, and management of containerized applications. While not a containerization tool itself, it is essential for managing containers in large-scale, production environments.
- **Key Features**:
  - **Scalability**: Easily scale up or down applications.
  - **Service Discovery and Load Balancing**: Automatically expose containers via DNS or IP addresses and balance traffic between them.
  - **Self-Healing**: Automatically restart failed containers and reschedule them on healthy nodes.
  - **Automated Rollouts and Rollbacks**: Safely deploy new versions of applications and roll back if necessary.
- **Use Case**: Used for managing large-scale containerized applications, especially in microservices architecture and cloud environments (Google Cloud, AWS, Azure).

---

### **3. Podman**

- **Overview**: **Podman** is a daemon-less container engine that is compatible with Docker but designed with a focus on security and rootless containers. Unlike Docker, Podman does not require a background daemon, making it more secure in certain environments.
- **Key Features**:
  - **Docker-Compatible CLI**: Podman can use Docker commands, making it easy to switch from Docker.
  - **Rootless Containers**: Allows users to run containers without root privileges, enhancing security.
  - **Pod Support**: Similar to Kubernetes Pods, Podman can run multiple containers in a single pod.
- **Use Case**: Ideal for secure environments where rootless containers are a priority or where running a background daemon is not desirable.

---

### **4. LXC (Linux Containers)**

- **Overview**: **LXC** is an older containerization technology that provides lightweight virtualization. Unlike Docker, LXC provides a more “traditional” virtualization experience with its full system containers that are closer to VMs but still lightweight like containers.
- **Key Features**:
  - **System-Level Containers**: Can run full Linux distributions inside containers.
  - **More Control**: Provides a closer experience to VMs, with more control over networking and system processes.
- **Use Case**: Used in environments where you need to run full Linux operating systems within a container, such as in infrastructure as a service (IaaS) or for building secure, isolated environments.

---

### **5. rkt (Rocket)**

- **Overview**: Developed by CoreOS, **rkt** is an alternative to Docker with a focus on security, composability, and standards compliance. It is designed to run alongside systemd and emphasizes running containers as part of a trusted computing base.
- **Key Features**:
  - **Security Focus**: Emphasizes running containers securely and supports isolated workloads.
  - **Pod-Native**: Like Kubernetes, rkt supports the concept of pods natively.
  - **Daemon-less**: Similar to Podman, rkt does not use a central daemon.
- **Use Case**: Suitable for users who want to prioritize security or who need an alternative to Docker with less dependence on a background daemon.

---

### **6. CRI-O**

- **Overview**: **CRI-O** is an implementation of Kubernetes' **Container Runtime Interface (CRI)**, allowing Kubernetes to run containers directly using **Open Container Initiative (OCI)**-compliant runtimes. It was built specifically to be lightweight and efficient for Kubernetes environments.
- **Key Features**:
  - **Designed for Kubernetes**: Provides a minimal runtime for Kubernetes without the extra features of Docker.
  - **Lightweight**: Focuses solely on container orchestration in Kubernetes environments, reducing overhead.
- **Use Case**: Ideal for Kubernetes environments where minimalism and adherence to the OCI standards are desired.

---

### **7. OpenVZ**

- **Overview**: **OpenVZ** is a container-based virtualization solution for Linux. It provides operating-system-level virtualization and allows multiple isolated Linux environments (containers) to run on a single physical server.
- **Key Features**:
  - **Full OS Virtualization**: Each container behaves like a standalone server, but with lower overhead than a virtual machine.
  - **Kernel Sharing**: Containers share the same Linux kernel, making them efficient in terms of performance.
- **Use Case**: Used in scenarios where many Linux environments need to run on a single host, such as web hosting environments.

---

### **8. Containerd**

- **Overview**: **Containerd** is a high-level container runtime used by Docker and Kubernetes. It is a lightweight runtime that provides basic functionality for running containers, managing images, networking, and storage.
- **Key Features**:
  - **Core Container Runtime**: Provides minimal functionality, delegating higher-level tasks to orchestration platforms like Kubernetes.
  - **Integration with Docker and Kubernetes**: Acts as the core container runtime in many container platforms.
- **Use Case**: Used in conjunction with higher-level orchestration tools, often behind the scenes in Docker and Kubernetes setups.

---

### **9. Singularity**

- **Overview**: **Singularity** is a container platform designed specifically for scientific and high-performance computing (HPC) workloads. It allows containers to run applications in an environment identical to the one in which they were built.
- **Key Features**:
  - **HPC Focus**: Optimized for running containers in high-performance computing environments.
  - **Security**: Does not require root privileges to run containers.
- **Use Case**: Popular in scientific research, bioinformatics, and other industries that require large-scale computation in highly secure environments.

---

### **Conclusion**

Different containerization tools are suited for different needs:

- **Docker**: The go-to tool for most containerization needs.
- **Kubernetes**: The de facto standard for orchestrating large-scale container deployments.
- **Podman**: Focuses on secure, daemon-less containers.
- **LXC**: For those who need more control and closer-to-VM containers.
- **rkt**: A secure, standards-focused alternative to Docker.
- **CRI-O**: A lightweight container runtime designed specifically for Kubernetes.
- **OpenVZ**: Best for full system OS virtualization on Linux.
- **Singularity**: Ideal for high-performance computing environments.

## Docker Overview and why we need to use Docker and tools available in the Docker Platform

### **Docker Overview**

**Docker** is an open-source platform designed to automate the deployment, scaling, and management of applications in **containers**. Docker containers package the code, runtime environment, system libraries, and dependencies, enabling the application to run consistently across different environments, such as development, testing, and production.

Docker has revolutionized the way applications are developed, shipped, and deployed by providing a lightweight, consistent, and isolated environment for running applications. It solves many of the problems caused by differences in system environments.

---

### **Why Use Docker?**

#### 1. **Consistency Across Environments**

- **Problem**: Applications behave differently in different environments (developer machines, staging, production) because of varying configurations, dependencies, or system setups.
- **Solution (Docker)**: Docker ensures that an application runs the same way across different environments by packaging it in a container with all its dependencies.

#### 2. **Isolation**

- **Problem**: Running multiple applications or services on the same host can lead to conflicts between dependencies or different versions of software.
- **Solution (Docker)**: Containers isolate applications from each other, ensuring that they don't interfere with one another’s dependencies or settings.

#### 3. **Portability**

- **Problem**: Moving an application from one environment (on-premise, cloud, local machine) to another often leads to compatibility issues.
- **Solution (Docker)**: Docker containers are portable and can run on any system that supports Docker, allowing applications to be deployed across different environments with minimal changes.

#### 4. **Efficient Resource Usage**

- **Problem**: Traditional virtual machines (VMs) consume a lot of resources because each VM runs its own operating system.
- **Solution (Docker)**: Containers are more lightweight than VMs because they share the host OS kernel, resulting in faster start times, lower resource consumption, and less overhead.

#### 5. **Microservices Architecture**

- **Problem**: Traditional monolithic applications are harder to scale, update, or maintain.
- **Solution (Docker)**: Docker enables the microservices architecture, allowing each service to run in its own container. This makes it easier to scale, update, and maintain individual components of the application.

#### 6. **DevOps and Continuous Integration/Continuous Deployment (CI/CD)**

- **Problem**: Integrating development with operations often leads to delays, misconfigurations, or compatibility issues during deployment.
- **Solution (Docker)**: Docker streamlines the development and deployment process, making it easier to integrate with CI/CD pipelines for continuous testing, integration, and deployment.

#### 7. **Version Control and Rollback**

- **Problem**: Upgrading or modifying applications can sometimes lead to issues, and reverting to a previous version is difficult.
- **Solution (Docker)**: Docker images are immutable, meaning that you can version control and roll back to a previous version of an application with ease.

#### 8. **Faster Time to Market**

- **Problem**: Developing, testing, and deploying applications on different infrastructures can be slow and error-prone.
- **Solution (Docker)**: By creating standardized environments, Docker accelerates development workflows, reducing bugs, and ensuring faster deployment cycles.

---

### **Key Tools Available in the Docker Platform**

Docker offers a variety of tools that enable developers to manage containers, automate tasks, and ensure the smooth operation of applications across environments. Here are the key components and tools in the Docker platform:

---

#### **1. Docker Engine**

- **Description**: The core component of Docker that allows developers to build and run containers. It consists of the **Docker daemon**, a REST API, and a command-line interface (CLI) client.
- **Purpose**: Provides the foundational capabilities for containerizing applications, running them, and managing images.
- **Key Features**:
  - Build, manage, and run containers.
  - Handles container networking and storage.

---

#### **2. Docker Hub**

- **Description**: A cloud-based repository where developers can store, share, and discover container images.
- **Purpose**: Acts as a public or private registry for storing Docker images.
- **Key Features**:
  - Access to a vast library of pre-built images (official and community-contributed).
  - Automated builds and triggers for CI/CD workflows.
  - Supports both public and private repositories.

---

#### **3. Docker Compose**

- **Description**: A tool for defining and running multi-container Docker applications using a simple **YAML** configuration file (`docker-compose.yml`).
- **Purpose**: Simplifies the management of multi-container applications, such as microservices.
- **Key Features**:
  - Define services, networks, and volumes in a single file.
  - Easily start, stop, and manage multiple containers with a single command (`docker-compose up` and `docker-compose down`).
  - Works well for development, testing, and small-scale production deployments.

---

#### **4. Docker Swarm**

- **Description**: Docker’s native **container orchestration** tool, allowing you to deploy and manage a cluster of Docker engines as a single system.
- **Purpose**: Provides the ability to scale containerized applications across multiple hosts.
- **Key Features**:
  - Integrated into Docker Engine, making it easy to turn on orchestration.
  - Service discovery, load balancing, and scaling of services.
  - Self-healing: Restarts failed containers automatically.

---

#### **5. Docker Networking**

- **Description**: Docker provides built-in network drivers to manage container connectivity, such as **bridge networks**, **host networks**, and **overlay networks**.
- **Purpose**: Ensures containers can communicate with each other and with external networks securely and efficiently.
- **Key Features**:
  - **Bridge Network**: Default network for containers running on the same host.
  - **Host Network**: Containers share the host’s network stack, giving them direct access to the network interfaces.
  - **Overlay Network**: Allows communication between containers across multiple hosts in a Docker Swarm or Kubernetes cluster.

---

#### **6. Docker Volumes**

- **Description**: Docker Volumes are a method of persisting data generated or used by Docker containers.
- **Purpose**: Ensures data persists outside the lifecycle of containers.
- **Key Features**:
  - Data is stored outside the container’s writable layer, so it remains intact even if the container is removed.
  - Volumes can be shared between multiple containers.
  - Offers better performance compared to bind mounts or container filesystem storage.

---

#### **7. Dockerfile**

- **Description**: A **Dockerfile** is a script containing instructions on how to build a Docker image.
- **Purpose**: Automates the creation of Docker images, making them reproducible and customizable.
- **Key Features**:
  - Declarative syntax to define the base image, install dependencies, copy files, and run commands inside the container.
  - Easy to version control and share.

---

#### **8. Docker Registry**

- **Description**: A Docker **registry** is a service for storing and distributing Docker images. Docker Hub is a public registry, but private registries can also be set up using **Docker Registry**.
- **Purpose**: Facilitates the distribution of container images across multiple environments or teams.
- **Key Features**:
  - Customizable private registries.
  - Secure storage and image distribution.

---

#### **9. Docker CLI (Command-Line Interface)**

- **Description**: The **Docker CLI** is a command-line tool for interacting with the Docker engine. It allows users to build, run, stop, and manage containers.
- **Purpose**: Provides full control over the Docker environment and containers.
- **Key Features**:
  - `docker build`: Build an image from a Dockerfile.
  - `docker run`: Run a container from an image.
  - `docker ps`: List running containers.
  - `docker stop`, `docker start`, `docker rm`: Manage containers.
  - `docker pull` and `docker push`: Download and upload images to/from registries.

---
