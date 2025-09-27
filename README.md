# Using the Dev Container (quick)

1. Add the `.devcontainer` folder and the `.vscode` files to your project root.
2. In VS Code: *Remote-Containers: Reopen in Container*.
3. Wait for image build; afterwards:
   - Run the task **configure** (Terminal → Run Task).
   - Run the task **build** (Terminal → Run Task) or let `preLaunchTask` run it for you.
4. Set breakpoints and press F5 (uses the provided `launch.json`).

Alternatively, if you have cmake extension installed, it should pick up the `CMakeLists.txt` automatically.

Notes on Apple M (arm64):
- Docker Desktop runs Linux containers as `aarch64` on Apple Silicon; the chosen base image supports multi-arch builds so packages installed via apt will be the correct arch automatically.
