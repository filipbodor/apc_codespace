# Use the official Microsoft devcontainer base image which supports multi-arch
FROM mcr.microsoft.com/devcontainers/base:2.0.4-ubuntu-24.04

ARG DEBIAN_FRONTEND=noninteractive

RUN apt-get update \
 && apt-get install -y --no-install-recommends \
    build-essential \
    cmake \
    cmake-data \
    gdb \
 && rm -rf /var/lib/apt/lists/*

ARG USERNAME=vscode
ARG USER_UID=1000
ARG USER_GID=$USER_UID

USER $USERNAME

ENV PATH="/usr/local/bin:${PATH}"
