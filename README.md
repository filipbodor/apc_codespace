# Using the Dev Container

## In VS Code

1. Just open the folder in VS Code and it should prompt you to reopen in the container. If not, press F1 and select *Dev Containers: Reopen in Container*. It should build the container and open the workspace inside it.
2. Wait for image build; afterwards CMake tools should pick up the `CMakeLists.txt` automatically. If not. 
   - Run the task **configure** (Terminal → Run Task).
   - Run the task **build** (Terminal → Run Task) or let `preLaunchTask` run it for you.
3. Set breakpoints and press F5 (uses the provided `launch.json`).

## In github codespaces

1. Fork the repo
2. Create a new codespace from the forked repo
   - Menu → Codespaces → New codespace
   - Select, repo, branch, machine etc.
   - Hit Create codespace
3. Wait for code space to build and open
4. You have basically working VS Code in the browser
5. Set breakpoints and press F5