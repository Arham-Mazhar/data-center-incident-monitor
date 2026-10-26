FROM ubuntu:latest
RUN apt-get update
RUN apt-get install -y g++
WORKDIR /app
COPY data_center_monitor.cpp .
RUN g++ data_center_monitor.cpp -o DCM
CMD ["./DCM"]
