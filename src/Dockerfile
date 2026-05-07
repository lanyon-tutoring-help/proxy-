FROM ubuntu:22.04
RUN apt update && apt install -y cmake libcurl4-openssl-dev libev-dev \
    libmbedtls-dev git build-essential && \
    git clone https://github.com/sagernet/wisp.git /wisp && \
    cd /wisp && mkdir build && cd build && cmake .. && make -j$(nproc) && \
    make install
COPY . /app
WORKDIR /app
RUN cmake . && make -j$(nproc)
EXPOSE 8080
CMD ["./proxy"]
