# Using the Dev Container

## In VS Code

### Prequisites

1. You need to have [Docker](https://www.docker.com/get-started/) installed and running. Easiest way to get it is:
   - On Windows just install Docker Desktop and make sure WSL2 backend is enabled.
   - On Linux install docker from installation shell script, provided by docker.
   - On Mac install Docker Desktop. You need Rosetta 2 installed as well, if you are on Apple Silicon.
   - If you do not have Docker installed and you do not want to install it, you can use github codespaces as well, see below. It can be connected to local VS Code as well.
2. You need to have [VS Code](https://code.visualstudio.com/) installed.

### Steps

1. Just open the folder in VS Code and it should prompt you to reopen in the container. If not, press F1 and select *Dev Containers: Reopen in Container*. It should build the container and open the workspace inside it.
2. We use CMake to make our builds, there are two task defined in this devcontainer. 
   - **project-configure** runs `cmake` with build type `Debug`, it is setup in a way, so that on every attach to this dev container this task is run automatically. It should produce a `build` folder with all the necessary files. If for some reason it does not run automatically, you can run it manually (*F1 → Tasks: Run Task → project-configure*).
   - **project-build** this builds the project, it is run as precondition of the launch task, so you do not need to run it manually. If for some reason you want to run it manually, you can do so (*F1 → Tasks: Run Task → project-build*).
3. Running the project is done via *F5* or *Run → Start Debugging*. If it asks to select an environment, select *Debug (gdb)*. 
4. Breakpoints should work out of the box.

### Notes

- If compilation breaks and you do not know why, you can try to remove the `build` folder and run the configure task again.
- If anything breaks beyond repair, can you try to rebuild the container (*F1 → Dev Containers: Rebuild Container*).
- If you do not wish to use the devcontainer, you can delete `.devcontainer` folder, tasks and launch configuration in `.vscode` folder should work locally on Linux environment. Maybe you would need to adjust the paths. It should work as well. Just use at least gcc 13.
- VS Code may want you to install some extensions (namely cmake-tools), we recommend to ignore it, as we have everything setup in the devcontainer already. This should now be covered by `settings.json` in `.vscode` folder, so just in case.

## In github codespaces

1. Fork the repo
2. Create a new codespace from the forked repo
   - Menu → Codespaces → New codespace
   - Select, repo, branch, machine etc.
   - Hit Create codespace
3. Wait for code space to build and open
4. You have basically working VS Code in the browser, so proceed as in the VS Code section above (just skip first step).
5. It is possible to open the remote codespace in local VS Code as well, you just click on the left bottom corner with codespace name and select *Open in VS Code Desktop*. It will guide you through the steps (installing github extension and logging in to github). After that, the codespace is opened in local VS Code and you can work as if it was local devcontainer.