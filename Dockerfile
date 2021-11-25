FROM debian:latest

# Install packages
RUN apt update && apt upgrade && \
    apt install -y make clang valgrind
