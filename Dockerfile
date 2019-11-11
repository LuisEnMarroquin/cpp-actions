# Docker Hub image
FROM gcc:latest

# Set working directory
WORKDIR /usr/src/app

# Copy all to the Docker image
COPY . ./

# Compile
RUN gcc -o Test.out hello.c

# Run
RUN ./Test

# Keep container running
CMD tail -f /dev/null
